/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: oscar
 *
 * Created on 26 December 2017, 9:48 PM
 */

#ifndef PLAYER_H
#define PLAYER_H
#include <QColor>

class Player {
    int ID;
    int position;
    QColor colour;
public:
    Player(int ID);
    Player(const Player& orig);
    virtual ~Player();
    QColor GetColour() const;
    void SetPosition(int position);
    int GetPosition() const;
    int GetID() const;
private:

};

#endif /* PLAYER_H */

