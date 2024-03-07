#ifndef ENTORNOjUEJO_H
#define  ENTORNOjUEJO_H

#include "Carta.h"
#include "Movimientos.h"
#include "Nodo.h"
#include "Tablero.h"

class EntornoDeJuego{
    public:
        Movimientos movimiento;
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
        //vatiables para los metodos siguiente y anterior
        //ANTERIOR
        Nodo *primeroCola1An, *ultimoCola1An, *primerocola2An, *ultimoCola2An;
        Nodo *pila1An, *pila2An, *pila3An,*pila4An, *pila5An, *pila6An, *pila7An, *pila8An, *pila9An, *pila10An, *pila11An;
        void llenarVariablesAnterior();//metodo para llenar las pilas y colas para el paso anterior
        void hacerNullLasvariablesPasoAnterior();//hacer todas las variables null
        void llenarVariablesActualesConAnteriores();
        void pasarcartasAPasoAnterior(Nodo* &primeroDeCola, Nodo* &primeroAnt, Nodo* &ultimoAnt);
        void pasarCartasPilasPasoAnterior(Nodo* &pila, Nodo* &pilaAnt);
        //DIGUIENTE
            Nodo *primeroCola1Sig, *ultimoCola1Sig, *primerocola2Sig, *ultimoCola2Sig;
            Nodo *pila1Sig, *pila2Sig, *pila3Sig,*pila4Sig, *pila5Sig, *pila6Sig, *pila7Sig, *pila8Sig, *pila9Sig, *pila10Sig, *pila11Sig;
            void llenarVariablesSiguientes();
            void hacerNullLasvariablesPasoSiguiente();//hacer todas las variables null
            void llenarVariablesActualesConSiguientes();
            bool haySiguiente=false;

};
#endif
