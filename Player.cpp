/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.cpp
 * Author: oscar
 * 
 * Created on 26 December 2017, 9:48 PM
 */

#include "Player.h"

Player::Player(int ID) {
    this->ID = ID;
    this->position = 0;
    switch(ID){
        case 0:
            colour = QColor("red");
            break;
        case 1:
            colour = QColor("blue");
            break;
        case 2:
            colour = QColor("yellow");
            break;
        case 3:
            colour = QColor("green");
            break;
    }
}

Player::Player(const Player& orig) {
}

Player::~Player() {
}
QColor Player::GetColour() const {
    return colour;
}

void Player::SetPosition(int position) {
    this->position = position;
}

int Player::GetPosition() const {
    return position;
}

int Player::GetID() const {
    return ID;
}