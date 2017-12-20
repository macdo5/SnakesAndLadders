/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: oscar
 *
 * Created on 18 December 2017, 5:46 PM
 */

#include <QApplication>     // auto generated for new Qt applicatons
#include "MainMenu.h"   // required so I can use the MainMenu form.

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    printf("Hello World!\n");  // to allow printf to actually show in Output window, right click on Project -> Properties -> Run -> Change Console Type to Standard Output
    QApplication app(argc, argv);

    // create and show your widgets here
    MainMenu form;
    form.show();

    return app.exec();
}
