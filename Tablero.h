#ifndef TABLERO_H
#define  TABLERO_H

#include "Nodo.h"
#include <vector>

class Tablero{
    public:
        Carta cartas[52];
        vector<Carta> cartasPasando;
        Tablero();
        void ejecutar();
        void mostrarCartas(Carta cartasArray[]);
        void imprimirCabezal(Nodo* &cola1, Nodo* &cola2, Nodo* &pila1, Nodo* &pila2, Nodo* &pila3, Nodo* &pila4, Carta cartaMostrando);
        void imprimirNodo(Nodo * &cola);
        Carta pop(Nodo* &primeroCola1);
        void ordenarcartasAleatorias();
        void imprimirPie(Nodo* &pila5, Nodo* &pila6, Nodo* &pila7, Nodo* &pila8, Nodo* &pila9, Nodo* &pila10, Nodo* &pila11);
        void imprimirNodoPila(Nodo* &pila);//unicamente para imprimir las pilas del tablero las pilas de abajo
        void imprimirColaOPilaCabezal(Nodo* &Cola);
        void llevarAlUltimo(Nodo* &pila);
        int medirTamanio(Nodo *&pila);
        int tamanioMasGrandeDeLista(Nodo* &pila5,Nodo* &pila6, Nodo* &pila7, Nodo* &pila8,Nodo* &pila9, Nodo * &pila10, Nodo* &pila11);
        
        void popPilaSimple(Nodo* &pila) ;
        void eliminarPrimeroPilaDoblementeEnlazada(Nodo*& pila) ;
        void eliminarUltimoDeCola(Nodo* &primero, Nodo* &ultimo);


        //metodos para movimiento de pilas inferiores a pilas inferiores
        void quitarCartas(Nodo* &pila, string acci);
        bool existeLaCarta(Nodo* &pila, string acci);
        void ponerCartas(Nodo* &pila);
        Carta traerCarta(string acci);
        void imprimirCartasPasando();
        bool verificarSiSePuedeMostrar(Nodo* &pila, string carta);

        //metodos para mostrar una carta de las 7 pilas
        bool devolverInfoCarta(int numCarta, Nodo* &pila);
};  
#endif