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

    matriz= new char * [TAM];
    for (int i=0;i<TAM;i++){
        for (int j=0;j<TAM;j++){
        matriz[i][j]= '0';
        }
    }
}
char tablero::getT() {
    return TIPO;
}

void tablero::setT(char tipo) {
    TIPO= tipo;
}

int tablero::getJ() {
    return J;
}

void tablero::setJ(int jugador) {
    J= jugador;
}

void tablero::mostrarTablero(int nj, int l){
        cout << endl << endl;
        cout << endl << "=-=-=-=-=-=-=-=-=-= BATALLA NAVAL =-=-=-=-=-=-=-=-=-=-=-=-";
        cout << endl << endl << "Tablero jugador"<<nj;
        cout << endl;
        cout << "  ";
        for (int i = 0; i < TAM; i++) {
            cout << " ";
            cout << i + 1;
        }
        cout << endl;
        for (int i = 0; i < FILAS; i++) {
            cout << static_cast<char>('A' + i) << "  ";
            for (int j = 0; j < COLUMNAS; j++) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
}
void tablero::colocarBarco(int fila, int columna){

}







