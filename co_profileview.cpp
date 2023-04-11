#include "co_profileview.h"
#include "ui_co_profileview.h"

co_profileview::co_profileview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::co_profileview)
{
    ui->setupUi(this);
}

co_profileview::~co_profileview()
{
    delete ui;
}
