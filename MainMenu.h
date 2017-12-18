/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MainMenu.h
 * Author: oscar
 *
 * Created on 18 December 2017, 5:48 PM
 */

#ifndef _MAINMENU_H
#define _MAINMENU_H

#include "ui_MainMenu.h"

class MainMenu : public QDialog {
    Q_OBJECT
public:
    MainMenu();
    virtual ~MainMenu();
private slots:   // signals and slots are basically publishers/subscribers 
    void btnNewGamePressed();
    void btnExitPressed();
private:
    Ui::MainMenu widget;
};

#endif /* _MAINMENU_H */
