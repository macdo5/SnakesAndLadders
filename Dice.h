/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dice.h
 * Author: oscar
 *
 * Created on 27 December 2017, 2:37 PM
 */

#ifndef DICE_H
#define DICE_H

class Dice {
    int numDice;
public:
    Dice();
    Dice(int newNumDice);
    Dice(const Dice& orig);
    virtual ~Dice();
    int RollDice();
private:

};

#endif /* DICE_H */

