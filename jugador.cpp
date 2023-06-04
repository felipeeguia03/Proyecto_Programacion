//
// Created by felipe Eguia on 27/5/2023.
//

#include <iostream>
#include "jugador.h"
#include <string>
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
int convertirFila(char letra){
    return letra-'A';

}

void jugador::colocarBarco() {
    int columna,longitud;
    char fila, orientacion;
    int numB=7,numL=1,numS=2,numD=3,numP=1,aux;
    bool bandera,banderin;

    cout<<endl<<"=-=-=-=-=-=- Colocando Barcos =-=-=-=-=-=-=-=-";
    for (int i=0;i<7;i++) {
        cout << endl << "Quedan: " << numB << " Barcos";
        cout << endl << "Que desea colocar? [1] Lancha [2] Submarino [3] Destructor [4] Portaaviones ";
        cin >> aux;
            switch (aux){
                case 1:
                    longitud=2;
                    if (numS!=0) {
                        cout << endl << "=-=-=-=-=-=- Colocando Submarino -=-=-=-=-=-=-=-";
                        do {
                            cout << endl << "Ingrese la pocision inicial: (fila,columna)";
                            cin >> fila >> columna;
                            fila = convertirFila(fila);
                            if ((columna <= 0 || columna > TAM) || (fila <= 0 || fila > TAM) ||
                                (matriz[fila][columna] != ' ')) {
                                cout << endl << "Posicion de inicio invalida, intente nuevamente";
                                bandera = false;
                            } else {
                                bandera = true;
                            }
                        }while (!bandera);
                            do {
                                bandera = false;
                                cout << endl << "Ingrese la orientacion: ('v' o 'h')";
                                cin >> orientacion;
                                if ((orientacion!= 'v' || orientacion != 'h') || (orientacion == 'v' && fila-1<=0) || (orientacion = 'h' && columna>TAM)) {
                                    cout << endl << "Orientacion invalida,intente nuevamente'";
                                    bandera = false;
                                }
                                    else {bandera=true;}

                            }while (!bandera);
                            do {
                                bandera= false;
                                if (orientacion=='v'){
                                for (int i=0;i<2;i++) {
                                    if (tableroPropio[fila - i][columna] != ' ') {
                                        cout << endl << "Orientacion invalida, el sumbarino chocaria con otro barco aliado";
                                    }
                                    else {bandera=true;}
                                }
                                if (orientacion=='h'){
                                    for (int i=0;i<2;i++){
                                        if (tableroPropio[fila][columna+i] != ' ') {
                                            cout << endl << "Orientacion invalida, el sumbarino chocaria con otro barco aliado";
                                        }
                                    }
                                }
                                }
                                    do{
                                        cout<< endl << "Prefiere volver al menu de colocacion? [1] Si [2] No";
                                        cin>>aux;
                                        if (aux==1){
                                            banderin= true;
                                            break;
                                        }
                                        if (aux==2){
                                            banderin = true;
                                            cout<< endl << "Intente nuevamente: ";
                                        }
                                        else {banderin=false;}
                                    } while (!banderin);
                                }while (!bandera);

                    }
                    else {
                        cout<< endl << "No quedan submarinos por ingresar!";
                    }
                    break;
            }
    }

}

void jugador::disparar() {

}
