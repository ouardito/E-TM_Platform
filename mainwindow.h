
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//Include Sign-Up Pages
#include "co_signuppage.h"
#include "dr_signuppage.h"
#include "tc_signuppage.h"


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
    void on_signinBtn_clicked();

    void on_signupBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
