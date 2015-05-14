#include "wizardmarcas.h"
#include "ui_wizardmarcas.h"

wizardMarcas::wizardMarcas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wizardMarcas)
{
    ui->setupUi(this);
}

wizardMarcas::~wizardMarcas()
{
    delete ui;
}
