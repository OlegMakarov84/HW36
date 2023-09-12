#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QSqlDatabase>
#include <string>
#include <vector>
#include <QMessageBox>
#include <QWidget>
#include <memory>

inline QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");


bool createConnection();

std::vector<std::string> getUserList();
QString getid(QString Qemail);
QString getQemail(QString Qid);


#endif // DATABASE_H
