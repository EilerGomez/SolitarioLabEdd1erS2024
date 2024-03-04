#ifndef MOVIMIENTO_H
#define  MOVIMIENTO_H
#include "Carta.h"
#include "Nodo.h"
class Movimientos{
    public:
        Movimientos();
        bool movimientoDeMachoAPilasCabezales( Nodo* &macho, Nodo* &pila1, Nodo* &pila2
        , Nodo* &pila3, Nodo* &pila4, int numSecion);

        bool OrdenPilasCabezales(Nodo* &macho, Nodo* &pilaCabezal); 
        bool VerificarCorreccionMovimientoPilasCabezales(Nodo* &macho, Nodo* &pilaCabezal); 
        bool verificarTipoCartasPilaCabezal(Nodo* &macho, Nodo* &pilaCabezal);
        Carta popMacho(Nodo* &macho);        
        void agregarNodoAPila(Nodo* &pila, Carta carta);

        //metodos para macho a pilas inferiores:
        bool movimientoDeMachoAPilasInferiores(Nodo* &macho, Nodo* &pila5, Nodo* &pila6
        , Nodo* &pila7, Nodo* &pila8, Nodo* &pila9, Nodo* &pila10, Nodo* &pila11, int numSecion);
        bool VerificarCorreccionMovimientoPilasInferiores(Nodo* &macho, Nodo* &pilaInferior);
        bool verificarColorCartaPilasInferiores(Nodo* &macho, Nodo* &pilaInferior);
        bool OrdenPilasInferiores(Nodo* &macho, Nodo* &pilaInferior);
        void agregarNodoAPilaDobleEnlace(Nodo* &pila, Carta carta);

        //metodos para pilas inferiores a pilas cabezales
        bool MovimientoDePilaInferiorAPilasCabezales(Nodo* &pila1,Nodo* &pila2,Nodo* &pila3, Nodo* &pila4, Nodo* &pila5, Nodo* &pila6
        , Nodo* &pila7, Nodo* &pila8, Nodo* &pila9, Nodo* &pila10, Nodo* &pila11, int numPilaCabezal, int numPilaInferior);

        Nodo* &pilaInferior(Nodo* &pila5, Nodo* &pila6
        , Nodo* &pila7, Nodo* &pila8, Nodo* &pila9, Nodo* &pila10, Nodo* &pila11, int numPilaInferior);

        Nodo* &pilaCabezal(Nodo* &pila1, Nodo* &pila2, Nodo* &pila3, Nodo* &pila4, int numPilaCabezal);

        //metodos para pilas cabezales a pilas inferiores
        bool MovimientoDePilasCabezalesAPilasInferiores(Nodo* &pila1,Nodo* &pila2,Nodo* &pila3, Nodo* &pila4, Nodo* &pila5, Nodo* &pila6
        , Nodo* &pila7, Nodo* &pila8, Nodo* &pila9, Nodo* &pila10, Nodo* &pila11, int numPilaCabezal, int numPilaInferior);
        bool OrdenPilasInferioresPorCarta(Nodo* &pilaAPoner, Carta carta);

        bool VerificarColorcartasInferioresPorCarta(Nodo* &pila, Carta carta);
};

#endif