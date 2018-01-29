/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ISlider.cpp
 * Author: oscar
 * 
 * Created on 27 December 2017, 8:57 AM
 */

#include "Transporter.h"

Transporter::Transporter(){
    
}

Transporter::Transporter(BoardSquare* topSquare, BoardSquare* bottomSquare) : 
    topSquare(topSquare), bottomSquare(bottomSquare) {
    
}

Transporter::Transporter(const Transporter& orig) {
}

Transporter::~Transporter() {
}

