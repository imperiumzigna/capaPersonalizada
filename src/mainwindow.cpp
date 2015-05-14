#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wizardmarcas.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_botaoUIPersonalizar_clicked()
{
wizardMarcas novoWizard;
novoWizard.setModal(true);
novoWizard.exec();

}
