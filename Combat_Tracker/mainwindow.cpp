#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addCreature.h"
#include <vector>

int objCounter = 0;
bool fight=false;
QVector<Creature> c;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddCreatureButton_clicked()
{
    Creature (ui->insertName->text(), ui->HPspinBox->value(), ui->ACspinBox->value(), ui->INIspinBox->value(), objCounter);
}

void MainWindow::on_DisplayCreatureButton_clicked()
{

}

/*void MainWindow::on_DeleteCreatureButton_clicked()      //Czyszczenie obiektów
{

}


void MainWindow::on_StartButton_clicked()
{

}

void MainWindow::on_EndButton_clicked()
{

}
*/
