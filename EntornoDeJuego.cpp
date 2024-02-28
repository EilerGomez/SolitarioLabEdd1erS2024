#include "EntornoDeJuego.h"
#include "Carta.h"
#include "Tablero.h"
#include <cstdlib>
#include<iostream>


EntornoDeJuego::EntornoDeJuego(){
   this->tablero = *new Tablero();
   cola1=nullptr;
   primeroCola1=nullptr;
   ultimoCola1=nullptr;
   cola2=nullptr;
   primeroCola2=nullptr;
   ultimoCola2=nullptr;
   generarCola1ConCartas();
   //cout<<"aqui empiezan las cartas de la cola1"<<endl<<endl;
   tablero.imprimirCabezal(primeroCola1,primeroCola2, pila1, pila2,pila3,pila4);
   //tablero.imprimirNodo(primeroCola1);
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
void EntornoDeJuego::imprimirCabezal(Nodo *cola){
    Nodo *tmp=cola;
    while(tmp != nullptr){
        cout<<tmp->carta.getAcci()<<endl;
        tmp=tmp->siguiente;
    }
}