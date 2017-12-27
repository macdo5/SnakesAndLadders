/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ladder.cpp
 * Author: oscar
 * 
 * Created on 27 December 2017, 1:10 PM
 */

#include "Ladder.h"

Ladder::Ladder(BoardSquare* topSquare, BoardSquare* bottomSquare) : Transporter(topSquare, bottomSquare) {
}

Ladder::Ladder(const Ladder& orig) : Transporter(orig){
}

Ladder::~Ladder() {
}

// if the player has landed on the bottom rung, transport them to the top rung.
int Ladder::Transport(){
    return topSquare->GetPosition();
}