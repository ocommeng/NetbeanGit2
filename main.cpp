/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: ocommeng
 *
 * Created on 15 janvier 2018, 15:12
 */

#include <QApplication>
#include <iostream>
#include "IHM.h"

using namespace std;

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);
    cout << "Hello Git World" << endl;
   

    QApplication app(argc, argv);
    IHM* uneIHM = new IHM();
    uneIHM->show();
    // create and show your widgets here

    return app.exec();
}
