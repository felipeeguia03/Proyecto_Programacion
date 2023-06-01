//
// Created by Felipe Eguia on 26/5/2023.
//

#include "barco.h"
#include <string>
#include <iostream>
using namespace std;

barco::barco() {
    L=0;
    P=' ';
    E= 0;

}

barco::barco(int longitud, char posicion, int estado) {
    L= longitud;
    P= posicion;
    E= estado;
}

int barco::getL() {
    return L;
}

void barco::setL(int longitud) {
    L=longitud;
}

char barco::getP() {
    return P;
}
void barco::setP(char posicion) {
    P=posicion;
}








