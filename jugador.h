//
// Created by Felipe Eguia on 27/5/2023.
//

#ifndef TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_JUGADOR_H
#define TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_JUGADOR_H
#include <string>
#include "tablero.h"
using namespace std;

class jugador {
private:
    int NUM;
    string N;
    int G;
    int PG;
public:
    jugador();
    jugador(int numero,string nombre, int golpes, int partidas);
    string getN ();
    void setN (string nombre);
    int getG();
    void setG (int golpes);
    int getPG ();
    void setPG (int partidas);
    void colocarBarco();
    void disparar();

    //agregacion
    barco B;
    tablero T;
    //objetos agregados
    barco L{1};
    barco S1{2};
    barco S2{2};
    barco D1{3};
    barco D2{3};
    barco D3{3};
    barco P{4};









};


#endif //TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_JUGADOR_H
