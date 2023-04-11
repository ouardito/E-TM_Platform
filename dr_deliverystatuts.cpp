#include "dr_deliverystatuts.h"
#include "ui_dr_deliverystatuts.h"

dr_deliverystatuts::dr_deliverystatuts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dr_deliverystatuts)
{
    ui->setupUi(this);
}

dr_deliverystatuts::~dr_deliverystatuts()
{
    delete ui;
}
