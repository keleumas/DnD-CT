#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addCreature.h"

int objCounter = 0;
bool fight=false;
Creature c[64];

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
    int HP= ui->HPspinBox->value();
    int AC= ui->ACspinBox->value();
    int INI= ui->INIspinBox->value();
    QString creatureName = ui->insertName->text(); //Zczytywanie informacji z dodawania stworzenia

    if (creatureName==""||creatureName=="NaC") ui->statusbar->showMessage("Wrong Name", 2000);
    else if (objCounter>=64) ui->statusbar->showMessage("Too many creatures", 2000);
        {

            for(int i=objCounter; i<64; i++)
            {
                c[i].name =creatureName;
                c[i].hp=HP;
                c[i].ac=AC;
                c[i].ini=INI;
                ui->creatureChoose->addItem(c[i].name);
                ui->insertName->setText("");

                objCounter++;
                break;
            }
        }

}

void MainWindow::on_DisplayCreatureButton_clicked()
{

    int tempDis = ui->creatureChoose->currentIndex();
    if (tempDis<0) ui->statusbar->showMessage("No creature to display", 2000);
    else
    {
        ui->chosenName->setText(c[tempDis].name);
        ui->chosenHP->setText(QString::number(c[tempDis].hp));
        ui->chosenAC->setText(QString::number(c[tempDis].ac));
        ui->chosenINI->setText(QString::number(c[tempDis].ini));
    }
}

/*void MainWindow::on_DeleteCreatureButton_clicked()      //Czyszczenie obiektów
{
    int tempDel = ui->creatureChoose->currentIndex();

    if (tempDel<0) ui->statusbar->showMessage("No creature to delete", 2000);

    else
    {
         for(int i = tempDel; i<objCounter; i++)
         {
             c[i].name = c[i+1].name;
             c[i].hp = c[i+1].hp;
             c[i].ac = c[i+1].ac;
             c[i].ini = c[i+1].ini;
         }
         c[objCounter].name = "NaC";
         c[objCounter].hp=10;
         c[objCounter].ac=10;
         c[objCounter].ini=10;
        // ui->creatureChoose->removeItem(c[tempDel].name);
         qDebug()<<c[objCounter].name;
         objCounter --;
    }
}*/


void MainWindow::on_StartButton_clicked()
{
    if (fight==true) ui->statusbar->showMessage("Cannot start fight that is already in progress", 5000);
    else
    {
        fight=true;
        ui->currentName->setText(c[0].name);
        ui->currentHP->setText(QString::number(c[0].hp));
        ui->currentAC->setText(QString::number(c[0].ac));
        ui->currentINI->setText(QString::number(c[0].ini));
    }
}

void MainWindow::on_EndButton_clicked()
{
    fight=false;
}

