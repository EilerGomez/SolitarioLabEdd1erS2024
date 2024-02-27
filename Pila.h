#ifndef PILA_H
#define PILA_H

#include "Carta.h"

class Pila {
private:
    Carta carta;
    Pila *siguiente;

public:
    Pila();
};

#endif
