/********************************************************************************
** Form generated from reading UI file 'wizardmarcas.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARDMARCAS_H
#define UI_WIZARDMARCAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_wizardMarcas
{
public:

    void setupUi(QDialog *wizardMarcas)
    {
        if (wizardMarcas->objectName().isEmpty())
            wizardMarcas->setObjectName(QStringLiteral("wizardMarcas"));
        wizardMarcas->resize(576, 433);

        retranslateUi(wizardMarcas);

        QMetaObject::connectSlotsByName(wizardMarcas);
    } // setupUi

    void retranslateUi(QDialog *wizardMarcas)
    {
        wizardMarcas->setWindowTitle(QApplication::translate("wizardMarcas", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class wizardMarcas: public Ui_wizardMarcas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARDMARCAS_H
