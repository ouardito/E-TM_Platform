#ifndef TCSIGNUPPAGE_H
#define TCSIGNUPPAGE_H

#include <QDialog>

namespace Ui {
class TCsignupPage;
}

class TCsignupPage : public QDialog
{
    Q_OBJECT

public:
    explicit TCsignupPage(QWidget *parent = nullptr);
    ~TCsignupPage();

private:
    Ui::TCsignupPage *ui;
};

#endif // TCSIGNUPPAGE_H
