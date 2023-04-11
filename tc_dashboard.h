#ifndef TC_DASHBOARD_H
#define TC_DASHBOARD_H

#include <QWidget>

namespace Ui {
class tc_dashboard;
}

class tc_dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit tc_dashboard(QWidget *parent = nullptr);
    ~tc_dashboard();

private:
    Ui::tc_dashboard *ui;
};

#endif // TC_DASHBOARD_H
