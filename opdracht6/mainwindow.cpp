#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <iostream>
#include <QTextBrowser>

#include "hallsensor.h"
#include "schuifdeur.h"
#include "draaideur.h"
#include "codeslot.h"
#include "sleutelslot.h"
#include "herkenningsslot.h"
#include "kaartslot.h"
#include "drukbox.h"
#include "idkaart.h"
#include "slotexception.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    s1 = std::shared_ptr<Sensor> (new HallSensor(515,160));

    hs1 = std::shared_ptr<Slot> (new HerkenningsSlot(ui->lineEditDraaiBoven2, new Drukbox(ui->textBrowser)));
    ks1 = std::shared_ptr<Slot> (new KaartSlot("schuifdeur", ui->lineEditSchuif2));
    ks2 = std::shared_ptr<Slot> (new KaartSlot("draaideur boven", ui->lineEditDraaiBoven2));
    deuren[0] = std::shared_ptr<Deur> (new SchuifDeur(true,503,250,80,s1.get()));
    deuren[1] = std::shared_ptr<Deur> (new Draaideur(true,295,290,30,true));
    deuren[2] = std::shared_ptr<Deur> (new Draaideur(true,248,140,40, false));

    deuren[0]->maakSlot(std::shared_ptr<Slot> (new SleutelSlot("test1", ui->lineEditSchuif1)));
//    deuren[0]->maakSlot(std::shared_ptr<Slot> (new SleutelSlot("test2", ui->lineEditSchuif2)));
    deuren[0]->maakSlot(std::shared_ptr<Slot> (ks1));


    deuren[2]->maakSlot(std::shared_ptr<Slot> (new CodeSlot(420,ui->lineEditDraaiBoven1)));
    deuren[2]->maakSlot(std::shared_ptr<Slot> (ks2));

    deuren[1]->maakSlot(std::shared_ptr<Slot> (new CodeSlot(123,ui->lineEditDraaiBeneden1)));

    for(int i = 0; i < 3; i++)
    {
        deuren[i]->sluit();
    }
    update();
}

MainWindow::~MainWindow()
{
}

void MainWindow::paintEvent(QPaintEvent *event){

    QPainter painter(this);
    QPen pen;
    QImage image("../Gebouw.png");

    pen.setColor(Qt::green);
    pen.setWidth(4);
    painter.setPen(pen);
    painter.drawImage(10,10,image);

    s1->teken(this);
    deuren[0]->teken(this);
    deuren[1]->teken(this);
    deuren[2]->teken(this);

}

void MainWindow::on_sensor_act_clicked()
{
    if(s1->isGeactiveerd())
         s1->deactiveer();
     else
         s1->activeer();
     update();
}

void MainWindow::on_schuifdeurSensorKnop_clicked()
{
    if(deuren[0]->isDeurOpen())
        deuren[0]->sluit();
    else
    {
        try
        {
            for(auto &i : deuren[0]->returnSlot())
            {
                i->ontgrendel(i->getLineInput()->text().toStdString());
            }
        }
        catch (SlotException &ex)
        {
            ui->textBrowser->clear();
            ui->textBrowser->append(QString::fromStdString(ex.returnErrorMessage()));
        }
        deuren[0]->open();
    }
    update();
}

void MainWindow::on_d1Knop_clicked()
{
    if(deuren[2]->isDeurOpen())
        deuren[2]->sluit();
    else
    {
        try
        {
            for(auto &i : deuren[2]->returnSlot())
            {
                i->ontgrendel(i->getLineInput()->text().toStdString());
            }
        }
        catch (SlotException &ex)
        {
            ui->textBrowser->clear();
            ui->textBrowser->append(QString::fromStdString(ex.returnErrorMessage()));
        }
        deuren[2]->open();
    }
    update();
}
void MainWindow::on_d2Knop_clicked()
{
    if(deuren[1]->isDeurOpen())
        deuren[1]->sluit();
    else
    {
        for(auto &i : deuren[1]->returnSlot())
        {
            i->ontgrendel(i->getLineInput()->text().toStdString());
        }
        deuren[1]->open();
    }
    update();
}

/**********************/
/* opdracht 4 knoppen */
/**********************/

void MainWindow::on_positiveAutorisatieKnop_clicked()
{
    HerkenningsSlot *slot = dynamic_cast<HerkenningsSlot*>(hs1.get());
    slot->voegAutorissatieToe(ui->lineEditVoegAutorisatieToe->text().toStdString(), true);
    ui->lineEditVoegAutorisatieToe->setText("");
    update();
}

void MainWindow::on_negatieveAutorisatieKnop_clicked()
{
    HerkenningsSlot *slot = dynamic_cast<HerkenningsSlot*>(hs1.get());
    slot->voegAutorissatieToe(ui->lineEditVoegAutorisatieToe->text().toStdString(), false);
    ui->lineEditVoegAutorisatieToe->setText("");
    update();
}

/**********************/
/* Opdracht 5 knoppen */
/**********************/

void MainWindow::on_maakIdKnop_clicked()
{
//    KaartSlot slot("", nullptr);
    std::shared_ptr<KaartSlot> slot = make_shared<KaartSlot>("", nullptr);
    IdKaart *kaart = new IdKaart(ui->lineEditUniekId->text().toStdString(), ui->lineEditNaam->text().toStdString(), ui->lineEditAdres->text().toStdString());
//    std::shared_ptr<IdKaart> kaart = make_shared<IdKaart>(ui->lineEditUniekId->text().toStdString(), ui->lineEditNaam->text().toStdString(), ui->lineEditAdres->text().toStdString());
    slot->voegIdKaartToe(kaart);
    ui->lineEditUniekId->setText("");
    ui->lineEditNaam->setText("");
    ui->lineEditAdres->setText("");
    update();

//    delete kaart;
}

void MainWindow::on_deleteID_clicked()
{
    KaartSlot slot("", nullptr);
    slot.verwijderIdKaart(ui->lineEditDeleteId->text().toStdString());
    ui->lineEditDeleteId->setText("");
    update();
}

void MainWindow::on_koppelId_clicked()
{
    KaartSlot *tempSlot = new KaartSlot("", nullptr);
    KaartSlot *slot = dynamic_cast<KaartSlot*> (ks1.get());
    std::map<std::string, IdKaart*> tempIdKaart = tempSlot->returnIdKaarten();

    std::map<std::string, IdKaart*>::iterator i;
    i = tempIdKaart.find(ui->lineEditKoppelId->text().toStdString());
    if(i != tempIdKaart.end())
        i->second->geefToegang(slot);
    ui->lineEditKoppelId->setText("");
    update();

    delete tempSlot;
}

void MainWindow::on_ontkoppelId_clicked()
{
    KaartSlot *tempSlot = new KaartSlot("", nullptr);
    KaartSlot *slot = dynamic_cast<KaartSlot*> (ks1.get());
    std::map<std::string, IdKaart*> tempIdKaart = tempSlot->returnIdKaarten();

    std::map<std::string, IdKaart*>::iterator i;
    i = tempIdKaart.find(ui->lineEditKoppelId->text().toStdString());
    if(i != tempIdKaart.end())
        i->second->verwijderToegang(slot);
    ui->lineEditKoppelId->setText("");
    update();

    delete tempSlot;
}














