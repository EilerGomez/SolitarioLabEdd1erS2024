#ifndef ENTORNOjUEJO_H
#define  ENTORNOjUEJO_H

#include "Carta.h"
#include "Cola.h"
#include "Tablero.h"
class EntornoDeJuego{
    public:
        Tablero tablero;
        Nodo *cola1, *primeroCola1,*ultimoCola1;
        Nodo *cola2, *primeroCola2, *ultimoCola2;

        Nodo *pila1,*pila2, *pila3,*pila4, *pila5, *pila6, *pila7, *pila8, *pila9, *pila10, *pila11;
        Carta cartaMostrando;
        EntornoDeJuego();

        void generarCola1ConCartas(int num);
        void generarPilasConCartas(Nodo* &pilaG, int numInit, int numFinish);
        void agregarNodoCola(Nodo* &primero, Nodo* &ultimo, Carta carta);
        void imprimirCabezal(Nodo *cola);
        void agregarNodoAPila(Nodo* &Pila, Carta carta);
        void agregarNodoAPilaDobleEnlace(Nodo* &pila, Carta carta);
        void Menu();
        void inicializarPrimeraCartaVisible(Nodo* &PilaVar);
        
};
#endif
