/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   MainMenu.cpp
 * Author: oscar
 *
 * Created on 18 December 2017, 5:48 PM
 */

#include "MainMenu.h"
#include "NewGameForm.h"

MainMenu::MainMenu() {
    widget.setupUi(this);
    // you need to conenct each widget action with a signal and slot.
    connect(widget.btnNewGame, SIGNAL(released()),
        this, SLOT(btnNewGamePressed()));
    connect(widget.btnExit, SIGNAL(released()),
        this, SLOT(btnExitPressed()));
}

MainMenu::~MainMenu() {
}

void MainMenu::btnNewGamePressed(){
    printf("The New Game button has been pressed\n");
    NewGameForm *newGameForm = new NewGameForm();
    newGameForm->show();
    hide();
}

void MainMenu::btnExitPressed(){
    exit(0);
}
