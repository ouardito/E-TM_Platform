#include "dr_profileview.h"
#include "ui_dr_profileview.h"

dr_profileview::dr_profileview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dr_profileview)
{
    ui->setupUi(this);
}

dr_profileview::~dr_profileview()
{
    delete ui;
}
