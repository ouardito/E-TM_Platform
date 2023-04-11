#include "dbmanager.h"

QSqlDatabase DbManager::setupDB(){
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("application.db");
    return database;
}

int DbManager::testDB(QSqlDatabase& x){
    if (!x.open()) {
        qDebug() << "Failed to open database:" << x.lastError().text();
        return 1;
    }
    else {
        qDebug() << "Connection Established : " << x.connectionName() ;
        return 0;
    }
}


void DbManager::getUserInfo() {
    QSqlQuery query;
    query.exec("SELECT * FROM users");

    while (query.next()) {
        int id = query.value("id").toInt();
        QString username = query.value("username").toString();
        QString email = query.value("email").toString();
        QString address = query.value("address").toString();
        QString password = query.value("password").toString();
        int number = query.value("number").toInt();

        qDebug() << "ID:" << id << "Username:" << username << "Email:" << email
                 << "Address:" << address << "Password:" << password << "Number:" << number;
    }
}



