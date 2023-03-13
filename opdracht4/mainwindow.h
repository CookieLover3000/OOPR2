#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>

namespace Ui {
class MainWindow;
}
class Sensor;
class Deur;
class Afdrukker;
class Slot;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
      ~MainWindow();

private slots:
    void on_sensor_act_clicked();
    void on_schuifdeurSensorKnop_clicked();
    void on_d1Knop_clicked();
    void on_d2Knop_clicked();
    void on_positiveAutorisatieKnop_clicked();
    void on_negatieveAutorisatieKnop_clicked();

private:
    std::shared_ptr<Ui::MainWindow> ui;
    std::shared_ptr<Sensor> s1;
    std::shared_ptr<Slot> hs1;
    std::array<std::shared_ptr<Deur>,3> deuren = {};
};

#endif // MAINWINDOW_H
