/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   NewGameForm.cpp
 * Author: oscar
 *
 * Created on 19 December 2017, 10:25 AM
 */

#include "NewGameForm.h"

NewGameForm::NewGameForm() {
    widget.setupUi(this);
    // don't forget to connect slots to signals!
    connect(widget.spnBoxNumPlayers, SIGNAL(valueChanged(int)),
            this, SLOT(numPlayersChanged(int)));
    disableAllPlayerOptions();
}

NewGameForm::~NewGameForm() {
}

void NewGameForm::numPlayersChanged(int i){
    // there must be between 1-4 players inclusive
    // first, disable options for players 2-4
    // player 1 remains active because there must always be at least 1 player
    printf("value changed triggered\n");
    disableAllPlayerOptions();
    // if 2+ players are specified, activate player 2
    if(i > 1){
        widget.grpBoxP2->setEnabled(true);
    }
    // if 3+ players are specified, activate player 3
    if(i > 2){
        widget.grpBoxP3->setEnabled(true);
    }
    // if 4 players are specified, activate player 4
    if(i > 3){
        widget.grpBoxP4->setEnabled(true);
    }
}

void NewGameForm::disableAllPlayerOptions(){
    widget.grpBoxP2->setEnabled(false);
    widget.grpBoxP3->setEnabled(false);
    widget.grpBoxP4->setEnabled(false);
}