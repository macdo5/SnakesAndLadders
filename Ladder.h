/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ladder.h
 * Author: oscar
 *
 * Created on 27 December 2017, 1:10 PM
 */

#ifndef LADDER_H
#define LADDER_H
#include "Transporter.h"

class Ladder : public Transporter {
public:
    Ladder();
    Ladder(BoardSquare* topSquare, BoardSquare* bottomSquare);
    Ladder(const Ladder& orig);
    virtual ~Ladder();
    int Transport();
private:

};

#endif /* LADDER_H */

