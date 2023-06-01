//
// Created by felipe Eguia on 27/5/2023.
//

#include "jugador.h"
#include <string>
#include "submarino.h"
#include "destructor.h"
#include "portaaviones.h"
#include "submarino.h"
#include "tablero.h"

using namespace std;

jugador::jugador() {
    NUM=0;
    N="";
    G=0;
    PG=0;
}

jugador::jugador(int numero,string nombre, int golpes, int partidas) {
    N=nombre;
    G=golpes;
    PG=partidas;
}

string jugador::getN() {
    return N;
}

void jugador::setN(string nombre) {
    N=nombre;
}

int jugador::getG() {
    return G;
}

void jugador::setG(int golpes) {
    G=golpes;
}

int jugador::getPG() {
    return PG;
}

void jugador::setPG(int partidas) {
    PG=partidas;
}

void jugador::colocarBarco() {
    int aux,columna_;
    char fila_,orientacion_;

    bool colocados =false;
    int nump=1,numd=3,nums=2,numl=1,numb=7;
    do {
        cout << endl << "-.-.-.-.-.-.-..-.-..-. Colocar Barcos -.-.-.-.-.-.-..-.-";
        cout << endl << "Quedan '"<<numb<<"' Barcos: '"<<nump<<"' Portaaviones - '"<<numd<<"' Destructores - '"<<nums<<"' Submarinos - '"<<numl<<"' Lanchas";
        cout << endl <<  "Escoja el barco que quiere colocar: [1] Submarino [2] Destructor [3] Portaaviones [4] Lancha";
        cout << endl;
        cin >> aux;
        switch (aux) {
            case 1:
                cout<<endl << "=-=-=-=-=-= Submarino =.=.=.=.=.=.";
                cout<<endl;

                cout<<endl<<"Ingrese la posicion del Submarino (Fila, Columna)";
                cout<<"Fila:";
                cin>>fila_;
                cout<<" Columna:";
                cin>>columna_;
                cout<<" Orientacion: (h o v) ";
                cin>>orientacion_;











        }
    }while (!colocados);

}

void jugador::disparar() {

}

void jugador::mostrarTableroDefensa() {

}
