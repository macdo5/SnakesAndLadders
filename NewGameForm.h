/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NewGameForm.h
 * Author: oscar
 *
 * Created on 19 December 2017, 10:25 AM
 */

#ifndef _NEWGAMEFORM_H
#define _NEWGAMEFORM_H

#include "ui_NewGameForm.h"

class NewGameForm : public QDialog {
    Q_OBJECT
public:
    NewGameForm();
    virtual ~NewGameForm();
private slots:
    void numPlayersChanged(int i);  
    void btnPlayPressed();
private:
    Ui::NewGameForm widget;
    void disableMultiplayerOptions();
};

#endif /* _NEWGAMEFORM_H */
