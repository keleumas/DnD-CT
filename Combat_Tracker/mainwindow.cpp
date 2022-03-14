#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "creature.h"

int Creature::objCount =0; //NIE MAM POJĘCIA DLACZEGO TO MUSI BYĆ ZAINICJALIZOWANE TUTAJ

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


void MainWindow::on_addButton_clicked()
{
    sendDataToCreatureConstructor(ui->inputName->text(), ui->inputHp->value(), ui->inputAc->value(), ui->inputIni->value());
}

