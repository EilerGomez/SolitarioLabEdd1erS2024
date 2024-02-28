#ifndef ENTORNOJUEGO_H
#define  ENTORNOJUEGO_H
#include "Carta.h"
#include "Nodo.h"

class Cola{
    public:

        Nodo *primero=nullptr;
        Nodo *ultimo=nullptr;

        
        void agregarNodoCola(Carta carta);

};

#endif