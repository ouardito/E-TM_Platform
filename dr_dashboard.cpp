#include "dr_dashboard.h"
#include "ui_dr_dashboard.h"

dr_dashboard::dr_dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dr_dashboard)
{
    ui->setupUi(this);
}

dr_dashboard::~dr_dashboard()
{
    delete ui;
}
