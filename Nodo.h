#ifndef COLA_H
#define COLA_H
#include "Carta.h"
class Nodo{
    public:
        Carta carta;
        Nodo *siguiente;
        Nodo();
        Nodo(const Carta carta);
};


#endif