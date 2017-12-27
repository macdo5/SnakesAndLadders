/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Snake.cpp
 * Author: oscar
 * 
 * Created on 27 December 2017, 9:32 AM
 */

#include "Snake.h"

Snake::Snake(BoardSquare* topSquare, BoardSquare* bottomSquare) : Transporter(topSquare, bottomSquare) {
}

Snake::Snake(const Snake& orig) : Transporter(orig){
}

Snake::~Snake() {
}

// If the player has landed on the snake head, transport the player to the tail.
int Snake::Transport(){
    return bottomSquare->GetPosition();
}

