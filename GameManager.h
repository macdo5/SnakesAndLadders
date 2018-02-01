/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GameManager.h
 * Author: oscar
 *
 * Created on 27 December 2017, 2:12 PM
 */

#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "Board.h"
#include "Player.h"
#include "Dice.h"
#include "Snake.h"
#include "Ladder.h"

/*

 */
class GameManager {
    static const int maxPlayers = 4;
    Dice* dice;
    Player* players [maxPlayers];  // pointer to array of players
    Board* board;
    int numPlayers;
    
public:
    GameManager();
    GameManager(int numPlayers, bool playerIsHuman [], int numDice, int boardLength);
    GameManager(const GameManager& orig);
    virtual ~GameManager();
    
    void Play();
private:

};

#endif /* GAMEMANAGER_H */

