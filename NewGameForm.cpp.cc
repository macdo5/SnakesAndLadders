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
#include "GameForm.h"
#include <iostream>

NewGameForm::NewGameForm() {
    widget.setupUi(this);
    // don't forget to connect slots to signals!
    connect(widget.spnBoxNumPlayers, SIGNAL(valueChanged(int)),
            this, SLOT(numPlayersChanged(int)));
    connect(widget.btnPlay, SIGNAL(released()),
            this, SLOT(btnPlayPressed()));
    disableMultiplayerOptions();
}

NewGameForm::~NewGameForm() {
}

void NewGameForm::numPlayersChanged(int i){
    // there must be between 1-4 players inclusive
    // first, disable options for players 2-4
    // player 1 remains active because there must always be at least 1 player
    disableMultiplayerOptions();
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

void NewGameForm::btnPlayPressed(){
    int numPlayers = widget.spnBoxNumPlayers->value();
    bool isHuman [numPlayers];
    // There must be at least one player, so no need to check numPlayers for Player 1
    isHuman[0] = widget.rdoBtnP1Hum->isChecked();
    if(numPlayers > 1){
        isHuman[1] = widget.rdoBtnP2Hum->isChecked();
    }
    if(numPlayers > 1){
        isHuman[2] = widget.rdoBtnP3Hum->isChecked();
    }
    if(numPlayers > 1){
        isHuman[3] = widget.rdoBtnP4Hum->isChecked();
    }
    GameForm* newGame = new GameForm(numPlayers, isHuman);
    newGame->showMaximized();
    hide();
}

void NewGameForm::disableMultiplayerOptions(){
    widget.grpBoxP2->setEnabled(false);
    widget.grpBoxP3->setEnabled(false);
    widget.grpBoxP4->setEnabled(false);
}