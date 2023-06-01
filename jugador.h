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
    void mostrarTableroDefensa();

    //agregacion
    barco B;
    tablero T;





};


#endif //TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_JUGADOR_H
