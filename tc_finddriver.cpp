#include "tc_finddriver.h"
#include "ui_tc_finddriver.h"

tc_finddriver::tc_finddriver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tc_finddriver)
{
    ui->setupUi(this);
}

tc_finddriver::~tc_finddriver()
{
    delete ui;
}
