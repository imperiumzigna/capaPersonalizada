/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *botaoUIPersonalizar;
    QToolButton *botaoUIGaleria;
    QToolButton *botaoUIConfig;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(711, 354);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(711, 354));
        MainWindow->setMaximumSize(QSize(711, 354));
        QIcon icon;
        icon.addFile(QStringLiteral("../images/icons/image6.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("#centralWidget{\n"
"background-color: rgb(26, 26, 26);\n"
"}\n"
"\n"
"\n"
""));
        botaoUIPersonalizar = new QToolButton(centralWidget);
        botaoUIPersonalizar->setObjectName(QStringLiteral("botaoUIPersonalizar"));
        botaoUIPersonalizar->setGeometry(QRect(270, 80, 151, 161));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../images/icons/responsive17.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoUIPersonalizar->setIcon(icon1);
        botaoUIPersonalizar->setIconSize(QSize(126, 126));
        botaoUIPersonalizar->setAutoRaise(true);
        botaoUIGaleria = new QToolButton(centralWidget);
        botaoUIGaleria->setObjectName(QStringLiteral("botaoUIGaleria"));
        botaoUIGaleria->setGeometry(QRect(500, 80, 151, 161));
        botaoUIGaleria->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QStringLiteral("../images/icons/photos13.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoUIGaleria->setIcon(icon2);
        botaoUIGaleria->setIconSize(QSize(126, 126));
        botaoUIGaleria->setAutoRaise(true);
        botaoUIConfig = new QToolButton(centralWidget);
        botaoUIConfig->setObjectName(QStringLiteral("botaoUIConfig"));
        botaoUIConfig->setGeometry(QRect(50, 80, 151, 161));
        botaoUIConfig->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral("../images/icons/Branch-Engineering-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoUIConfig->setIcon(icon3);
        botaoUIConfig->setIconSize(QSize(126, 126));
        botaoUIConfig->setAutoRaise(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 711, 20));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Personalizador de Capas", 0));
        botaoUIPersonalizar->setText(QApplication::translate("MainWindow", "...", 0));
        botaoUIGaleria->setText(QApplication::translate("MainWindow", "...", 0));
        botaoUIConfig->setText(QApplication::translate("MainWindow", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
