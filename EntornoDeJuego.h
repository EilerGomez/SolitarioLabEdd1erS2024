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

        Nodo *pila1,*pila2, *pila3,*pila4;

        EntornoDeJuego();

        void generarCola1ConCartas();
        void agregarNodoCola(Nodo* &primero, Nodo* &ultimo, Carta carta);
        void imprimirCabezal(Nodo *cola);
        
        
};
#endif
