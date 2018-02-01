/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.h
 * Author: oscar
 *
 * Created on 1 February 2018, 2:35 PM
 */

#ifndef BOARD_H
#define BOARD_H
#include "BoardSquare.h"
#include <QWidget>

class Board : public QWidget {
    Q_OBJECT 
    static const int maxBoardSquares = 100;
    BoardSquare* boardSquares [maxBoardSquares];
    int boardLength;  // represents length of perfect square of size 2+, 2^2, 3^2, 4^2 etc
public:
    Board(QWidget* parent = 0, int boardLength = 100);
    Board(const Board& orig);
    virtual ~Board();
private:

};

#endif /* BOARD_H */

