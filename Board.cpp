/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.cpp
 * Author: oscar
 * 
 * Created on 1 February 2018, 2:35 PM
 */

#include "Board.h"

Board::Board(QWidget* parent, int boardLength) : 
QWidget(parent), boardLength(boardLength) {
    for(int i = 0; i < boardLength; i++){
        for(int j = 0; j < boardLength; j++){
            // create each BoardSquare
            int boardIndex = i * j + j;
            boardSquares[boardIndex] = new BoardSquare(boardIndex);
        }
    }
}

Board::Board(const Board& orig) {
}

Board::~Board() {
}

