/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GameForm.h
 * Author: oscar
 *
 * Created on 29 January 2018, 5:14 PM
 */

#ifndef _GAMEFORM_H
#define _GAMEFORM_H

#include "ui_GameForm.h"

class GameForm : public QDialog {
    Q_OBJECT
public:
    GameForm(int numPlayers, bool playerIsHuman []);
    virtual ~GameForm();
private:
    Ui::GameForm widget;
};

#endif /* _GAMEFORM_H */
