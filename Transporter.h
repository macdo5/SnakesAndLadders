/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ISlider.h
 * Author: oscar
 *
 * Created on 27 December 2017, 8:57 AM
 */

#ifndef ISLIDER_H
#define ISLIDER_H
#include "BoardSquare.h"

//The Transport method takes the Player from topSquare to bottomSquare or vice versa
class Transporter {
protected:
    BoardSquare* topSquare;
    BoardSquare* bottomSquare;
public:
    Transporter();
    Transporter(BoardSquare* topSquare, BoardSquare* bottomSquare);
    Transporter(const Transporter& orig);
    virtual ~Transporter();
    virtual int Transport() = 0;
private:

};

#endif /* ISLIDER_H */

