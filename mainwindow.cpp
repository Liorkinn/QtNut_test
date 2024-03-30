#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sampledatabase.h"
#include "sampletable.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qRegisterMetaType<sampleTable*>();
    qRegisterMetaType<SampleDataBase*>();

    SampleDataBase db;

    db.setDriver("QPSQL");
    db.setDatabaseName("isbu");
    db.setHostName("127.0.0.1");
    db.setUserName("postgres");
    db.setPassword("1");
    db.open();


    Nut::RowList<sampleTable> allList = db.weapons()->query().toList();
    Nut::RowList<sampleTable> listWhere = db.weapons()->query().where(sampleTable::idField() == "1").toList();

    qDebug() << "Запрос на вывод всей таблицы:";
    foreach (Nut::Row<sampleTable> t, allList) {
        qDebug() << t.get()->id();
        qDebug() << t.get()->type_weapon();
    }
//    qDebug() << "\nЗапрос с выборкой:";
//    foreach (Nut::Row<sampleTable> t, listWhere) {
//        qDebug() << t.data()->id() << "||" << t.data()->name_full();
//    }

//    auto listId = db.weapons()->query().select(sampleTable::idField());

//    foreach (auto str, listId) {
//        qDebug() << str;
//    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

