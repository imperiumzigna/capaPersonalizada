#ifndef WIZARDMARCAS_H
#define WIZARDMARCAS_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QStandardItemModel>
#include <QString>
namespace Ui {
class wizardMarcas;
}

class wizardMarcas : public QDialog
{
    Q_OBJECT

public:
    explicit wizardMarcas(QWidget *parent = 0);
    ~wizardMarcas();

private:
    Ui::wizardMarcas *ui;

};

#endif // WIZARDMARCAS_H
