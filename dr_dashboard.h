#ifndef DR_DASHBOARD_H
#define DR_DASHBOARD_H

#include <QWidget>

namespace Ui {
class dr_dashboard;
}

class dr_dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit dr_dashboard(QWidget *parent = nullptr);
    ~dr_dashboard();

private:
    Ui::dr_dashboard *ui;
};

#endif // DR_DASHBOARD_H
