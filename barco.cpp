//
// Created by Felipe Eguia on 26/5/2023.
//

#include "barco.h"

using namespace std;

barco::barco() {
    L=0;
    E=0;
}

barco::barco(int longitud) {
    L= longitud;

}

int barco::getL() {
    return L;
}

void barco::setL(int longitud) {
    L=longitud;
}

int barco::getE() {
    for(int i =0;i<L;i++){
        if(E[i] = 0){
            return 0;
        }
    } return 1;
}











