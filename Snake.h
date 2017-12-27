/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Snake.h
 * Author: oscar
 *
 * Created on 27 December 2017, 9:32 AM
 */

#ifndef SNAKE_H
#define SNAKE_H
#include "Transporter.h"

class Snake : public Transporter {
public:
    Snake();
    Snake(BoardSquare* topSquare, BoardSquare* bottomSquare);
    Snake(const Snake& orig);
    virtual ~Snake();
    int Transport();
private:

};

#endif /* SNAKE_H */

