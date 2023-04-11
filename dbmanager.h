
#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QString>
#include <QDebug>
#include <QtSql>


class DbManager
{

private:

public:
    QSqlDatabase setupDB();
    int testDB(QSqlDatabase& x);
    void getUserInfo();
};


#endif // DBMANAGER_H
