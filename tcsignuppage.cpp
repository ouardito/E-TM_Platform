#include "tcsignuppage.h"
#include "ui_tcsignuppage.h"

TCsignupPage::TCsignupPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TCsignupPage)
{
    ui->setupUi(this);
}

TCsignupPage::~TCsignupPage()
{
    delete ui;
}
