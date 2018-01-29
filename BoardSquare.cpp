/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BoardSquare.cpp
 * Author: oscar
 * 
 * Created on 26 December 2017, 9:49 PM
 */

#include "BoardSquare.h"

BoardSquare::BoardSquare() {
}

BoardSquare::BoardSquare(int newPosition) : 
    position(newPosition){
}

BoardSquare::BoardSquare(const BoardSquare& orig) {
}

BoardSquare::~BoardSquare() {
}

int BoardSquare::GetPosition() const {
    return position;
}

