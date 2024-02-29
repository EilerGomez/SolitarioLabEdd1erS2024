#ifndef TABLERO_H
#define  TABLERO_H

#include "Carta.h"
#include "Cola.h"
#include "Nodo.h"
class Tablero{
    public:
        Carta cartas[52];
        Tablero();
        void ejecutar();
        void mostrarCartas(Carta cartasArray[]);
        void imprimirCabezal(Nodo* &cola1, Nodo* &cola2, Nodo* &pila1, Nodo* &pila2, Nodo* &pila3, Nodo* &pila4, Carta cartaMostrando);
        void imprimirNodo(Nodo * &cola);
        Carta pop(Nodo* &primeroCola1);
        
};
#endif