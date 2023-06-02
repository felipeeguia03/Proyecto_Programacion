//
// Created by Felipe Eguia on 27/5/2023.
//

#ifndef TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_TABLERO_H
#define TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_TABLERO_H
#include <string>
#include "barco.h"


class tablero {
protected:
    int TAM;
    char TIPO;
    int J;

public:
    char** matriz;
    tablero();
    tablero(int tamanho,char tipo,int jugador);
    char getT();
    void setT (char tipo);
    int getJ();
    void setJ (int jugador);
    void mostrarTablero(int nj,string l);
    void colocarBarco (int fila,int columna);
    void Disparar(int fila,int columna);





};


#endif //TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_TABLERO_H
