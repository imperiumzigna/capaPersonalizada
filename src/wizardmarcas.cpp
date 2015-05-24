#include "wizardmarcas.h"
#include "ui_wizardmarcas.h"
#include <QPushButton>
#include <QSql>
#include <QSqlDriver>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlDriverPlugin>
#include <QMessageBox>
#include <QSqlError>
wizardMarcas::wizardMarcas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wizardMarcas)
{
    ui->setupUi(this);
    /* Colocar a conexão entre a base de dados com as imagens das marcas no grid layout
     * em casa grid colocar um botão com um ícone vindo da base
     * QPushButton button;
     * while(i<=número de imagens){
     * alguma coisa
     *
     * i=i+1;
     * }
     * */
QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
db.setHostName("localhost");
db.setDatabaseName("marcas");
db.setUserName("root");
db.setPassword("123456");
db.setPort(3308);
db.open();

}

wizardMarcas::~wizardMarcas()
{
    delete ui;
}



