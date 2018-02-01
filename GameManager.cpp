/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GameManager.cpp
 * Author: oscar
 * 
 * Created on 27 December 2017, 2:12 PM
 */

#include "GameManager.h"

GameManager::GameManager() {
}

GameManager::GameManager(int numPlayers, bool playerIsHuman [], int numDice, int boardLength) : 
numPlayers(numPlayers){
    dice = new Dice(numDice);
    for(int i = 0; i < sizeof(players); i++){
        //gives the player an ID and specifies whether they are human or AI
        players[i] = new Player(i, playerIsHuman[i]);
    }
    
}
GameManager::GameManager(const GameManager& orig) {
}

GameManager::~GameManager() {
}

