#include "EntornoDeJuego.h"
#include "Carta.h"
#include "Tablero.h"
#include <cstdlib>
#include<iostream>
#include <list>
#include <vector>


EntornoDeJuego::EntornoDeJuego(){
    cartaMostrando=*new Carta("NULL","NULL","NULL","NULL",false);
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
   generarCola1ConCartas();
   generarPilasConCartas(pila5,1);
   //generarPilasConCartas(pila6,2);
   //generarPilasConCartas(pila7,3);
   //generarPilasConCartas(pila8,4);
   //generarPilasConCartas(pila9,5);
   //generarPilasConCartas(pila10,6);
   //generarPilasConCartas(pila11,7);

   //cout<<"aqui empiezan las cartas de la cola1"<<endl<<endl;
   //tablero.imprimirCabezal(primeroCola1,primeroCola2, pila1, pila2,pila3,pila4);
   //tablero.imprimirNodo(primeroCola1);
   Menu();
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
void EntornoDeJuego::generarCola1ConCartas(){
    int n;    
    for(int i=0;i<24;i++){
        do{
            n = 0+rand()%53;
            //cout<<n<<endl;
        }while(tablero.cartas[n].getUsada()==true);
        agregarNodoCola(primeroCola1, ultimoCola1, tablero.cartas[n]);
        tablero.cartas[n].setUsada(true);
        //cout<<"Agregando cartas a la cola1"<<endl;
        //agregarNodoCola(primeroCola1, ultimoCola1, tablero.cartas[i]);
    }
}

void EntornoDeJuego::agregarNodoAPila(Nodo* &pila, Carta carta){
        Nodo* nuevoNodo = new Nodo(carta);
        nuevoNodo->siguiente = pila;
        pila = nuevoNodo;
}

void EntornoDeJuego::generarPilasConCartas(Nodo* &pilaG, int numCartas){
    list<Carta> cartasNoUsadas= {};
    for(int i=0;i<53;i++){
        if(tablero.cartas[i].getUsada()==false){
            cartasNoUsadas.push_back(tablero.cartas[i]);
        }
    }
    cout<<"Tamanio que sobra: "<<cartasNoUsadas.max_size()<<endl;
    //int n;
    /*for(int i=0; i<numCartas;i++){
        do{
            n = 0+rand()%cartasNoUsadas.max_size();
        }while(tablero.cartas[n].getUsada()==true);
        agregarNodoAPila(pilaG, tablero.cartas[n]);
        tablero.cartas[n].setUsada(true);

    }*/
}

void EntornoDeJuego::imprimirCabezal(Nodo *cola){
    Nodo *tmp=cola;
    while(tmp != nullptr){
        cout<<tmp->carta.getAcci()<<endl;
        tmp=tmp->siguiente;
    }
}

void EntornoDeJuego::Menu(){

    int opcion=0;
    while(opcion !=-1){
        tablero.imprimirCabezal(primeroCola1,ultimoCola2, pila1, pila2,pila3,pila4,cartaMostrando);
        cout<<"Ingrese una opcion:"<<endl;
        cout<<"1.Sacar carta."<<endl<<"2.Hacer movimiento"<<endl<<"-1. Salir"<<endl;
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