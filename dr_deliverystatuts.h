#ifndef DR_DELIVERYSTATUTS_H
#define DR_DELIVERYSTATUTS_H

#include <QDialog>

namespace Ui {
class dr_deliverystatuts;
}

class dr_deliverystatuts : public QDialog
{
    Q_OBJECT

public:
    explicit dr_deliverystatuts(QWidget *parent = nullptr);
    ~dr_deliverystatuts();

private:
    Ui::dr_deliverystatuts *ui;
};

#endif // DR_DELIVERYSTATUTS_H
