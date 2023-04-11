
#include "mainwindow.h"
#include "ui_mainwindow.h"


//Debug
#include <QDebug>





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



void MainWindow::on_signinBtn_clicked()
{
    //Sign in Process
}


void MainWindow::on_signupBtn_clicked()
{
    //Sign up Process
    QString x = ui->accTypeInput->currentText();

    COsignupPage page1;
    DRsignuppage page2;
    TCsignupPage page3;

    qDebug() << "Page shows : " << x; //Debug Success

    if (x == "Cargo Owner"){
        //Display CO Sign Up Dialog
        page1.setModal(true);
        page1.exec();


    } else if(x == "Driver"){
        //Display DR Sign Up Dialog
        page2.setModal(true);
        page2.exec();

    } else {
        //Display TC Sign Up Dialog
        page3.setModal(true);
        page3.exec();
    }


}

