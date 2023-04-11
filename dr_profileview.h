#ifndef DR_PROFILEVIEW_H
#define DR_PROFILEVIEW_H

#include <QDialog>

namespace Ui {
class dr_profileview;
}

class dr_profileview : public QDialog
{
    Q_OBJECT

public:
    explicit dr_profileview(QWidget *parent = nullptr);
    ~dr_profileview();

private:
    Ui::dr_profileview *ui;
};

#endif // DR_PROFILEVIEW_H
