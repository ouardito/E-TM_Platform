#ifndef CO_PROFILEVIEW_H
#define CO_PROFILEVIEW_H

#include <QDialog>

namespace Ui {
class co_profileview;
}

class co_profileview : public QDialog
{
    Q_OBJECT

public:
    explicit co_profileview(QWidget *parent = nullptr);
    ~co_profileview();

private:
    Ui::co_profileview *ui;
};

#endif // CO_PROFILEVIEW_H
