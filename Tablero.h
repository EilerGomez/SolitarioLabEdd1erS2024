#ifndef TABLERO_H
#define  TABLERO_H

#include "Cola.h"
#include "Pila.h"
class Tablero{
    public:
        Pila pila1;
        Pila pila2;
        Pila pila3;
        Pila pila4;
        Pila pila5;
        Pila pila6;
        Pila pila7;
        Pila pila8;
        Pila pila9;
        Pila pila10;
        Pila pila11;
        Cola cola1;
        Cola cola2;
        Carta cartas[52];
        Tablero();
        void ejecutar();
};
#endif