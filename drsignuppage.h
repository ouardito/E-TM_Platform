#ifndef DRSIGNUPPAGE_H
#define DRSIGNUPPAGE_H

#include <QDialog>

namespace Ui {
class DRsignuppage;
}

class DRsignuppage : public QDialog
{
    Q_OBJECT

public:
    explicit DRsignuppage(QWidget *parent = nullptr);
    ~DRsignuppage();

private:
    Ui::DRsignuppage *ui;
};

#endif // DRSIGNUPPAGE_H
