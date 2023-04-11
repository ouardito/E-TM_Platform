#include "co_dashboard.h"
#include "ui_co_dashboard.h"

co_dashboard::co_dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::co_dashboard)
{
    ui->setupUi(this);
}

co_dashboard::~co_dashboard()
{
    delete ui;
}
