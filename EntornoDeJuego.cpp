#include "EntornoDeJuego.h"
#include "Carta.h"
#include "Tablero.h"
#include <cstdlib>
#include<iostream>
#include <list>
#include <vector>


EntornoDeJuego::EntornoDeJuego(){
   this->tablero = *new Tablero();
   cola1=nullptr;
   primeroCola1=nullptr;
   ultimoCola1=nullptr;
   cola2=nullptr;
   primeroCola2=nullptr;
   ultimoCola2=nullptr;
   pila1=nullptr;
   pila2=nullptr;
   pila3=nullptr;
   pila4=nullptr;
   generarCola1ConCartas(24);
   generarPilasConCartas(pila5,24,25);
   generarPilasConCartas(pila6,25,27);
   generarPilasConCartas(pila7,27,30);
   generarPilasConCartas(pila8,30,34);
   generarPilasConCartas(pila9,34,39);
   generarPilasConCartas(pila10,39,45);
   generarPilasConCartas(pila11,45,52);/**/
   inicializarPrimeraCartaVisible(pila5);
   inicializarPrimeraCartaVisible(pila6);
   inicializarPrimeraCartaVisible(pila7);
   inicializarPrimeraCartaVisible(pila8);
   inicializarPrimeraCartaVisible(pila9);
   inicializarPrimeraCartaVisible(pila10);
   inicializarPrimeraCartaVisible(pila11);
   //generarPilasConCartas(pila6,2);
   //generarPilasConCartas(pila7,3);
   //generarPilasConCartas(pila8,4);
   //generarPilasConCartas(pila9,5);
   //generarPilasConCartas(pila10,6);
   //generarPilasConCartas(pila11,7);

   //cout<<"aqui empiezan las cartas de la cola1"<<endl<<endl;
   //tablero.imprimirCabezal(primeroCola1,primeroCola2, pila1, pila2,pila3,pila4);
   //tablero.imprimirNodo(primeroCola1);
    //tablero.imprimirNodo(primeroCola1);

   Menu();
   
}

void EntornoDeJuego::inicializarPrimeraCartaVisible(Nodo* &PilaVar){
    PilaVar->carta.setMostrar(true);
}

void EntornoDeJuego::agregarNodoCola(Nodo* &primero, Nodo* &ultimo, Carta carta){
    Nodo *nuevo = new Nodo(carta);
    //cout<<"agregando la carta: "<<carta.getAcci()<<endl;
    if(ultimo==nullptr){
        primero=ultimo=nuevo;
        primero->siguiente=ultimo;
    }else{
        ultimo->siguiente=nuevo;
        ultimo=nuevo;
    }
}
void EntornoDeJuego::generarCola1ConCartas(int numCartas){
    for(int i=0;i<numCartas;i++){
        agregarNodoCola(primeroCola1, ultimoCola1, tablero.cartas[i]);
    }
}

void EntornoDeJuego::agregarNodoAPila(Nodo* &pila, Carta carta){
        Nodo* nuevoNodo = new Nodo(carta);
        nuevoNodo->siguiente = pila;
        pila = nuevoNodo;
}
void EntornoDeJuego::agregarNodoAPilaDobleEnlace(Nodo* &pila, Carta carta){
       Nodo* nuevoNodo = new Nodo(carta);
        
        if (pila == nullptr) {
            pila = nuevoNodo;
        } else {
            nuevoNodo->siguiente = pila;
            pila->anterior = nuevoNodo;
            pila = nuevoNodo;
        }
}

void EntornoDeJuego::generarPilasConCartas(Nodo* &pilaG, int numInit, int numFinish){
    for(int i=numInit;i<numFinish;i++){
        agregarNodoAPilaDobleEnlace(pilaG, tablero.cartas[i]);
    }
}


void EntornoDeJuego::Menu(){

    int opcion=0;
    while(opcion !=-1){
        tablero.imprimirCabezal(primeroCola1,ultimoCola2, pila1, pila2,pila3,pila4,cartaMostrando);
        tablero.imprimirPie(pila5, pila6,pila7, pila8, pila9, pila10, pila11);
        cout<<"Ingrese una opcion:"<<endl;
        cout<<"1.Sacar carta."<<endl<<"2.Hacer movimiento"<<endl<<"-1. Salir"<<endl;
        cout<<"DARLE UN TAMANIO DINAMICO AL TABLERO QUE SEA EL NUMERO DE LISTA MAS GRANDE"<<endl;
        cin>>opcion;
        switch (opcion) {
            case 1:
                //metodo para pasar la primera carta de la cola 1 a la cola2
                if(primeroCola1==nullptr){
                        //cout<<"la pila 1 esta vacia"<<endl;
                        primeroCola1=primeroCola2;
                        ultimoCola1=ultimoCola2;
                        primeroCola2=nullptr;
                        ultimoCola2=nullptr;
                }else{
                    agregarNodoCola(primeroCola2, ultimoCola2,tablero.pop(primeroCola1));

                }
                break;
            case 2:
                break;
            default:
                break;
        }
    }
}