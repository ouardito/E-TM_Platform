#include "tc_dashboard.h"
#include "ui_tc_dashboard.h"

tc_dashboard::tc_dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tc_dashboard)
{
    ui->setupUi(this);
}

tc_dashboard::~tc_dashboard()
{
    delete ui;
}
