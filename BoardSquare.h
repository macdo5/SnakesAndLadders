/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BoardSquare.h
 * Author: oscar
 *
 * Created on 26 December 2017, 9:49 PM
 */

#ifndef BOARDSQUARE_H
#define BOARDSQUARE_H

class BoardSquare {
    int position;
public:
    BoardSquare();
    BoardSquare(int position);
    BoardSquare(const BoardSquare& orig);
    virtual ~BoardSquare();
    int GetPosition() const;
private:

};

#endif /* BOARDSQUARE_H */

