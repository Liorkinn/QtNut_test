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
    db.setDatabaseName("test_spiral");
    db.setHostName("127.0.0.1");
    db.setUserName("postgres");
    db.setPassword("1");
    db.open();

//Post::idField()
   // auto ids = db.posts().query()
   //     ->select(Post::idField());
   // auto onlyTech = db.posts()->query().where(sampleTable::nameField() == "Техник").toList();
    auto list = db.posts()->query().select(sampleTable::nameField());

    foreach (auto str, list) {
        qDebug() << str;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

