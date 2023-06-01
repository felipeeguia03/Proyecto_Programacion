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
    int FILAS=TAM;
    int COLUMNAS=TAM;
    char tablero [FILAS][COLUMNAS];

    if (nj==1 && l=="A") {

        cout << endl << endl;
        cout << endl << "=-=-=-=-=-=-=-=-=-= BATALLA NAVAL =-=-=-=-=-=-=-=-=-=-=-=-";
        cout << endl << endl << "Tablero jugador 1 ATAQUE:";
        cout << endl << endl << "     ";
        cout << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                Tablero1A[i][j] = '0';
            }
        }
        cout<<"  ";
            for (int i=0;i<TAM;i++){
                cout<<" ";
                cout<<i+1;

            }
        cout<<endl;
        for (int i=0;i<FILAS;i++){
            cout << static_cast<char>('A' + i) << "  ";
                for (int j = 0; j < COLUMNAS; j++) {
                    cout << Tablero1A[i][j] << " ";
                }
                cout << endl;
            }
        }

    if (nj==1 && l=="D"){
        cout << endl << endl;
        cout << endl << "=-=-=-=-=-=-=-=-=-= BATALLA NAVAL =-=-=-=-=-=-=-=-=-=-=-=-";
        cout << endl << endl << "Tablero jugador 1 DEFENSA:";
        cout << endl << endl << "     ";
        cout << endl;
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                Tablero1D[i][j] = '0';
            }
        }
        cout<<"  ";
        for (int i=0;i<TAM;i++){
            cout<<" ";
            cout<<i+1;

        }
        cout<<endl;
        for (int i=0;i<FILAS;i++){
            cout << static_cast<char>('A' + i) << "  ";
            for (int j = 0; j < COLUMNAS; j++) {
                cout << Tablero1D[i][j] << " ";
            }
            cout << endl;
        }
    }

    if (nj==2 && l=="A") {

                cout << endl <<
    endl;
        cout << endl << "=-=-=-=-=-=-=-=-=-= BATALLA NAVAL =-=-=-=-=-=-=-=-=-=-=-=-";
        cout << endl << endl << "Tablero jugador 2 ATAQUE:";
        cout << endl << endl << "     ";
        cout <<
        endl;
        for (int i = 0;i<FILAS;i++) {
        for (int j = 0;j<COLUMNAS;j++) {
        Tablero2A[i][j] = '0';
        }
}

cout << "  1 2 3 4 5 6 7 8 9 10" << endl;
for (int i=0;i<FILAS;i++){
cout << static_cast<char>('A' + i) << " ";
for (int j = 0; j < COLUMNAS; j++) {
cout << Tablero2A[i][j] << " ";
}
cout << endl;
}

            cout << endl;
        }

    if (nj==2 &&l=="D"){
cout << endl << endl;
cout << endl << "=-=-=-=-=-=-=-=-=-= BATALLA NAVAL =-=-=-=-=-=-=-=-=-=-=-=-";
cout << endl << endl << "Tablero jugador 2 DEFENSA:";
cout << endl << endl << "     ";
cout << endl;
for (int i = 0; i < FILAS; i++) {
for (int j = 0; j < COLUMNAS; j++) {
Tablero2D[i][j] = '0';
}
}
cout << "  1 2 3 4 5 6 7 8 9 10" << endl;
for (int i=0;i<FILAS;i++){
cout << static_cast<char>('A' + i) << " ";
for (int j = 0; j < COLUMNAS; j++) {
cout << Tablero2D[i][j] << " ";
}
cout << endl;
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



