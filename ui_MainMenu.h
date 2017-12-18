/********************************************************************************
** Form generated from reading UI file 'MainMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QLabel *lblWelcome;
    QPushButton *btnNewGame;
    QPushButton *btnExit;

    void setupUi(QDialog *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(650, 456);
        lblWelcome = new QLabel(MainMenu);
        lblWelcome->setObjectName(QStringLiteral("lblWelcome"));
        lblWelcome->setGeometry(QRect(210, 30, 221, 20));
        btnNewGame = new QPushButton(MainMenu);
        btnNewGame->setObjectName(QStringLiteral("btnNewGame"));
        btnNewGame->setGeometry(QRect(120, 360, 88, 34));
        btnExit = new QPushButton(MainMenu);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(470, 360, 88, 34));

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QDialog *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "MainMenu", Q_NULLPTR));
        lblWelcome->setText(QApplication::translate("MainMenu", "Welcome to Snakes and Ladders", Q_NULLPTR));
        btnNewGame->setText(QApplication::translate("MainMenu", "New Game", Q_NULLPTR));
        btnExit->setText(QApplication::translate("MainMenu", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
