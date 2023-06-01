//
// Created by Felipe Eguia on 27/5/2023.
//

#ifndef TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_TABLERO_H
#define TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_TABLERO_H
#include <string>
#include "barco.h"
#include "submarino.h"
#include "destructor.h"
#include "portaaviones.h"
#include "lancha.h"


class tablero {
protected:
    char Tablero1D[23][23];
    char Tablero1A[23][23];
    char Tablero2D[23][23];
    char Tablero2A[23][23];
    int TAM;
    char TIPO;
    int J;
public:
    tablero();
    tablero(int tamanho,char tipo,int jugador);
    char getT();
    void setT (char tipo);
    int getJ();
    void setJ (int jugador);
    void crearTablero(int nj,string l);
    void mostrarTablero();
    bool verificar ();
    submarino S;
    portaaviones P;
    destructor D;
    lancha L;



};


#endif //TRABAJO_FINAL_NAVAL_MATEOS_EGUIA_CPP_TABLERO_H
