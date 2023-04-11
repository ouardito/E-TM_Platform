#ifndef COSIGNUPPAGE_H
#define COSIGNUPPAGE_H

#include <QDialog>
#include <vector>

#include <QLineEdit>

namespace Ui {
class COsignupPage;
}

class COsignupPage : public QDialog
{
    Q_OBJECT

public:
    explicit COsignupPage(QWidget *parent = nullptr);
    ~COsignupPage();

    void storeDetails();

    struct info{
        QString username;
        QString email;
        QString password;
        QString address;

        int mobile;

    };

    info createInfo(QLineEdit* usrnm, QLineEdit* eml, QLineEdit* pass, QLineEdit* adrs, QLineEdit* num);

private slots:
    void on_submitBtn_clicked();

private:
    Ui::COsignupPage *ui;
};

#endif // COSIGNUPPAGE_H
