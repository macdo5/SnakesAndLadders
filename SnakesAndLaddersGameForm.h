/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SnakesAndLaddersGameForm.h
 * Author: oscar
 *
 * Created on 19 December 2017, 10:05 AM
 */

#ifndef _SNAKESANDLADDERSGAMEFORM_H
#define _SNAKESANDLADDERSGAMEFORM_H

#include "ui_SnakesAndLaddersGameForm.h"

class SnakesAndLaddersGameForm : public QDialog {
    Q_OBJECT
public:
    SnakesAndLaddersGameForm();
    virtual ~SnakesAndLaddersGameForm();
private:
    Ui::SnakesAndLaddersGameForm widget;
};

#endif /* _SNAKESANDLADDERSGAMEFORM_H */
