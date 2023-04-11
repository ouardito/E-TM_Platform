#include "drsignuppage.h"
#include "ui_drsignuppage.h"

DRsignuppage::DRsignuppage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DRsignuppage)
{
    ui->setupUi(this);
}

DRsignuppage::~DRsignuppage()
{
    delete ui;
}
