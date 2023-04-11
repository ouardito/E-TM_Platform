#ifndef CO_DASHBOARD_H
#define CO_DASHBOARD_H

#include <QWidget>

namespace Ui {
class co_dashboard;
}

class co_dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit co_dashboard(QWidget *parent = nullptr);
    ~co_dashboard();

private:
    Ui::co_dashboard *ui;
};

#endif // CO_DASHBOARD_H
