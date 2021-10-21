#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/LENOVO/Documents/DnD_5E_CT/Interface/Base.png");
    ui->Basic_Interface->setPixmap(pix.scaled(800,600,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

