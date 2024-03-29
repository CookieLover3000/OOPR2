#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>

#include "hallsensor.h"
#include "schuifdeur.h"
#include "draaideur.h"
#include "codeslot.h"
#include "sleutelslot.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    s1 = std::shared_ptr<Sensor> (new HallSensor(515,160));

    deuren[0] = std::shared_ptr<Deur> (new SchuifDeur(true,503,250,80,s1.get(), new SleutelSlot("test")));
    deuren[1] = std::shared_ptr<Deur> (new Draaideur(true,295,290,30,true, new CodeSlot(420)));
    deuren[2] = std::shared_ptr<Deur> (new Draaideur(true,248,140,40, false, new CodeSlot(69)));



}

MainWindow::~MainWindow()
{}

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
    {
        deuren[0]->sluit();
    }
    else
    {
        deuren[0]->returnSlot()->ontgrendel(ui->lineEdit->text().toStdString());
        deuren[0]->open();
    }
    update();
}

void MainWindow::on_d1Knop_clicked()
{
    if(deuren[2]->isDeurOpen())
    {
        deuren[2]->sluit();
    }
    else
    {
        deuren[2]->returnSlot()->ontgrendel(ui->lineEdit1->text().toStdString());
        deuren[2]->open();
    }
    update();
}
void MainWindow::on_d2Knop_clicked()
{
    if(deuren[1]->isDeurOpen())
    {
        deuren[1]->sluit();
    }
    else
    {
        deuren[1]->returnSlot()->ontgrendel(ui->lineEdit2->text().toStdString());
        deuren[1]->open();
    }
    update();
}


