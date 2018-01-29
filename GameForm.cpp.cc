/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   GameForm.cpp
 * Author: oscar
 *
 * Created on 29 January 2018, 5:14 PM
 */

#include "GameForm.h"
#include "GameManager.h"

GameForm::GameForm(int numPlayers, bool playerIsHuman []) {
    widget.setupUi(this);
    int numDice = 2;
    int boardLength = 10;
    GameManager* gameManager = new GameManager(numPlayers, playerIsHuman, numDice, boardLength);
    
    
}

GameForm::~GameForm() {
}
