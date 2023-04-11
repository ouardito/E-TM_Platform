#include "co_signuppage.h"
#include "ui_cosignuppage.h"

COsignupPage::COsignupPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::COsignupPage)
{
    ui->setupUi(this);
}

COsignupPage::~COsignupPage()
{
    delete ui;
}


COsignupPage::info COsignupPage::createInfo(QLineEdit* usrnm, QLineEdit* eml, QLineEdit* pass, QLineEdit* adrs, QLineEdit* num){
    QString username = usrnm->text();
    QString email = eml->text();
    QString password = pass->text();
    QString address = adrs->text();
    int mobile = num->text().toInt();

    info newInfo{username, email, password, address, mobile};

    return newInfo;
}

void COsignupPage::on_submitBtn_clicked()
{
    COsignupPage::info newUser = createInfo(ui->usernameField, ui->emailField, ui->passwordField, ui->adressField, ui->mobileField);


}

