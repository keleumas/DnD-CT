#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AddCreatureButton_clicked();

    void on_DisplayCreatureButton_clicked();

   // void on_DeleteCreatureButton_clicked();

    void on_StartButton_clicked();

    void on_EndButton_clicked();

private:
    Ui::MainWindow *ui;
};



#endif // MAINWINDOW_H
