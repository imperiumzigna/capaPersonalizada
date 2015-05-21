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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wizardMarcas
{
public:
    QScrollBar *verticalScrollBar;
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *marcasCelularesGrid;
    QWidget *gridLayoutWidget_2;
    QGridLayout *marcasNotesGrid;

    void setupUi(QDialog *wizardMarcas)
    {
        if (wizardMarcas->objectName().isEmpty())
            wizardMarcas->setObjectName(QStringLiteral("wizardMarcas"));
        wizardMarcas->resize(714, 479);
        wizardMarcas->setMinimumSize(QSize(0, 0));
        wizardMarcas->setStyleSheet(QLatin1String("#wizardMarcas{\n"
"background-color:rgb(26,26,26);\n"
"\n"
"}"));
        verticalScrollBar = new QScrollBar(wizardMarcas);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(500, 0, 16, 481));
        verticalScrollBar->setStyleSheet(QStringLiteral(""));
        verticalScrollBar->setOrientation(Qt::Vertical);
        frame = new QFrame(wizardMarcas);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(510, 0, 211, 481));
        frame->setStyleSheet(QLatin1String("#frame{\n"
"background-color:rgb(84, 84, 84)\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(wizardMarcas);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 471, 211));
        marcasCelularesGrid = new QGridLayout(gridLayoutWidget);
        marcasCelularesGrid->setObjectName(QStringLiteral("marcasCelularesGrid"));
        marcasCelularesGrid->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(wizardMarcas);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 250, 471, 221));
        marcasNotesGrid = new QGridLayout(gridLayoutWidget_2);
        marcasNotesGrid->setObjectName(QStringLiteral("marcasNotesGrid"));
        marcasNotesGrid->setContentsMargins(0, 0, 0, 0);
        frame->raise();
        verticalScrollBar->raise();
        gridLayoutWidget->raise();
        gridLayoutWidget_2->raise();

        retranslateUi(wizardMarcas);

        QMetaObject::connectSlotsByName(wizardMarcas);
    } // setupUi

    void retranslateUi(QDialog *wizardMarcas)
    {
        wizardMarcas->setWindowTitle(QApplication::translate("wizardMarcas", "Marcas", 0));
    } // retranslateUi

};

namespace Ui {
    class wizardMarcas: public Ui_wizardMarcas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARDMARCAS_H
