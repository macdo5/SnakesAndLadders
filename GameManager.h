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
#include "Player.h"
#include "Dice.h"
#include "BoardSquare.h"
#include "Snake.h"
#include "Ladder.h"
#include <vector>

/*

 */
class GameManager {
    static const int maxPlayers = 4;
    static const int maxBoardSquares = 100;
    Dice* dice;
    Player* players [maxPlayers];  // pointer to array of players
    BoardSquare* boardSquares [maxBoardSquares];
    int boardLength;  // represents length of perfect square of size 2+, 2^2, 3^2, 4^2 etc
    int numPlayers;
    
public:
    GameManager();
    GameManager(int numPlayers, bool playerIsHuman [], int numDice, int boardLength);
    GameManager(const GameManager& orig);
    virtual ~GameManager();
private:

};

#endif /* GAMEMANAGER_H */

