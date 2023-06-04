#include <iostream>
#include <stdlib.h>
#include <string>
#include "jugador.h"
#include "tablero.h"
#include "barco.h"


using namespace std;


jugador* jugadores[2];
tablero* tableros[4];
barco* barcos[14];

void crearJugador();
void iniciarTablero(int n);

//funcion auxiliar
int convertirFila(char letra);

int numJ=0,numT=0,numS=0,numD=0,numP=0,numL=0;
extern int TAM=0;
int main(){

bool turno1=true;
bool turno2=true;

    cout<<endl<<"=-=-=-=-=-=-=-=-=-= BATALLA NAVAL =-=-=-=-=-=-=-=-=-=-=-=-";
    crearJugador();
    crearJugador();
    cout<<endl;
    cout<<endl<<"Ingrese el tamanho del tablero (Mayor a 9) ";
    cin>>TAM;
    do {

        cout << endl << "Jugador " << numJ - 1;
        iniciarTablero(numJ-1);
        tableros[0]->crearTablero(numJ-1,"A");
        tableros[1]->crearTablero(numJ-1,"D");
        turno1=false;

       } while (turno1);


}



void crearJugador(){
    string nombre;
    int golpes;
    int partidas;
    cout<<endl<<"Bienvenido!";
    cout<<endl<<"Ingrese el nombre del jugador "<<numJ+1<<":";
    cout<<endl;
    cin>>nombre;
    jugadores[numJ] = new jugador (numJ+1,nombre,golpes,partidas);
    numJ++;

}
int convertirFila(char letra){
    return letra-'A';

}


































