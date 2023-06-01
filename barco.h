//
// Created by Felipe Eguia on 26/5/2023.
//

#ifndef TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_BARCO_H
#define TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_BARCO_H
#include <string>
#include <vector>
using namespace std;

class barco {
protected:
    int L;
    int* E;

public:
    barco();
    barco(int longitud);
    int getL ();
    void setL (int longitud);
    int getE();





};


#endif //TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_BARCO_H
