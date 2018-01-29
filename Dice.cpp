/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dice.cpp
 * Author: oscar
 * 
 * Created on 27 December 2017, 2:37 PM
 */

#include "Dice.h"
#include <cstdlib>

Dice::Dice() {
}

Dice::Dice(int newNumDice) : numDice(newNumDice){
}

Dice::Dice(const Dice& orig) {
}

Dice::~Dice() {
}

int Dice::RollDice(){
    int sum = 0;
    for(int i = 0; i < numDice; i++){
        sum += rand() % 6 + 1; // adds a d6 roll to sum for each dice.
    }
    return sum;
}
