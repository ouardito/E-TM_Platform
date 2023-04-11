#ifndef TC_FINDDRIVER_H
#define TC_FINDDRIVER_H

#include <QDialog>

namespace Ui {
class tc_finddriver;
}

class tc_finddriver : public QDialog
{
    Q_OBJECT

public:
    explicit tc_finddriver(QWidget *parent = nullptr);
    ~tc_finddriver();

private:
    Ui::tc_finddriver *ui;
};

#endif // TC_FINDDRIVER_H
