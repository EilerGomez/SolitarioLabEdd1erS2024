#ifndef COLA_H
#define COLA_H

#include "Carta.h"
class Cola{
    private:
        Carta carta;
        Cola *siguiente;

    public:
        Cola();
};

#endif