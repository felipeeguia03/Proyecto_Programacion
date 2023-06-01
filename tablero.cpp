//
// Created by Felipe Eguia on 27/5/2023.
//
#include <iostream>
#include "tablero.h"
#include "barco.h"
#include <string>
using namespace std;

tablero::tablero() {
    TAM=0;
    TIPO=' ';
    J= 0;
}

tablero::tablero(int tamanho,char tipo,int jugador) {
    TAM= tamanho;
    TIPO= tipo;
    J=jugador;
}
char tablero::getT() {
    return TIPO;
}

void tablero::setT(char tipo) {
    TIPO= tipo;
}



void tablero::setJ(int jugador) {
    J= jugador;
}

void tablero::crearTablero(int nj,string l) {
    int FILAS = TAM;
    int COLUMNAS = TAM;
    char tablero[FILAS][COLUMNAS];



        cout << endl << endl;
        cout << endl << "=-=-=-=-=-=-=-=-=-= BATALLA NAVAL =-=-=-=-=-=-=-=-=-=-=-=-";
        cout << endl << endl << "Tablero jugador"<<nj<<" ATAQUE:";
        cout << endl << endl << "     ";
        cout << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                [i][j] = '0';
            }
        }
        cout << "  ";
        for (int i = 0; i < TAM; i++) {
            cout << " ";
            cout << i + 1;

        }
        cout << endl;
        for (int i = 0; i < FILAS; i++) {
            cout << static_cast<char>('A' + i) << "  ";
            for (int j = 0; j < COLUMNAS; j++) {
                cout << Tablero1A[i][j] << " ";
            }
            cout << endl;
        }



        cout << endl << endl;
        cout << endl << "=-=-=-=-=-=-=-=-=-= BATALLA NAVAL =-=-=-=-=-=-=-=-=-=-=-=-";
        cout << endl << endl << "Tablero jugador"<<nj<<" DEFENSA:";
        cout << endl << endl << "     ";
        cout << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                Tablero1D[i][j] = '0';
            }
        }
        cout << "  ";
        for (int i = 0; i < TAM; i++) {
            cout << " ";
            cout << i + 1;

        }
        cout << endl;
        for (int i = 0; i < FILAS; i++) {
            cout << static_cast<char>('A' + i) << "  ";
            for (int j = 0; j < COLUMNAS; j++) {
                cout << Tablero1D[i][j] << " ";
            }
            cout << endl;
        }
}


void tablero::mostrarTablero() {

}

bool tablero::verificar() {

}

int tablero::getJ() {
    return J;
}



