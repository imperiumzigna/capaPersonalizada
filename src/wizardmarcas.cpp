#include "wizardmarcas.h"
#include "ui_wizardmarcas.h"
#include <QPushButton>

//int i=0;
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
}

wizardMarcas::~wizardMarcas()
{
    delete ui;
}
