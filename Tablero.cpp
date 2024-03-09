#include "Tablero.h"
#include "Carta.h"
#include<iostream>
#include <iterator>
#include<cstdlib>
#include<ctime>
#include <algorithm>
#include <array>
#include <random>
using namespace std;

void Tablero::mostrarCartas(Carta cartasArray[]){
     for (int i=0; i<52; i++) {
        cout<<i+1<<".";
        cartasArray[i].mostrarInfo();
    }
}
Tablero::Tablero(){
    cartas[0]=*new Carta("A<>R","As","Rojo","Diamantes", false);
    cartas[1]=*new Carta("2<>R","Dos","Rojo","Diamantes", false);
    cartas[2]=*new Carta("3<>R","Tres","Rojo","Diamantes", false);
    cartas[3]=*new Carta("4<>R","Cuatro","Rojo","Diamantes", false);
    cartas[4]=*new Carta("5<>R","Cinco","Rojo","Diamantes", false);
    cartas[5]=*new Carta("6<>R","Seis","Rojo","Diamantes",false);
    cartas[6]=*new Carta("7<>R","Siete","Rojo","Diamantes",false);
    cartas[7]=*new Carta("8<>R","Ocho","Rojo","Diamantes",false);
    cartas[8]=*new Carta("9<>R","Nueve","Rojo","Diamantes",false);
    cartas[9]=*new Carta("10<>R","Diez","Rojo","Diamantes",false);
    cartas[10]=*new Carta("J<>R","Jota","Rojo","Diamantes",false);
    cartas[11]=*new Carta("Q<>R","Cuina","Rojo","Diamantes",false);
    cartas[12]=*new Carta("K<>R","Rey","Rojo","Diamantes",false);
    cartas[13]=*new Carta("A<3R","As","Rojo","Corazones",false);
    cartas[14]=*new Carta("2<3R","Dos","Rojo","Corazones",false);
    cartas[15]=*new Carta("3<3R","Tres","Rojo","Corazones",false);
    cartas[16]=*new Carta("4<3R","Cuatro","Rojo","Corazones",false);
    cartas[17]=*new Carta("5<3R","Cinco","Rojo","Corazones",false);
    cartas[18]=*new Carta("6<3R","Seis","Rojo","Corazones",false);
    cartas[19]=*new Carta("7<3R","Siete","Rojo","Corazones",false);
    cartas[20]=*new Carta("8<3R","Ocho","Rojo","Corazones",false);
    cartas[21]=*new Carta("9<3R","Nueve","Rojo","Corazones",false);
    cartas[22]=*new Carta("10<3R","Diez","Rojo","Corazones",false);
    cartas[23]=*new Carta("J<3R","Jota","Rojo","Corazones",false);
    cartas[24]=*new Carta("Q<3R","Cuina","Rojo","Corazones",false);
    cartas[25]=*new Carta("K<3R","Rey","Rojo","Corazones",false);
    //falta la mitad, los treboles y las espadas
    cartas[26]=*new Carta("AE3N","As","Negro","Treboles",false);
    cartas[27]=*new Carta("2E3N","Dos","Negro","Treboles",false);
    cartas[28]=*new Carta("3E3N","Tres","Negro","Treboles",false);
    cartas[29]=*new Carta("4E3N","Cuatro","Negro","Treboles",false);
    cartas[30]=*new Carta("5E3N","Cinco","Negro","Treboles",false);
    cartas[31]=*new Carta("6E3N","Seis","Negro","Treboles",false);
    cartas[32]=*new Carta("7E3N","Siete","Negro","Treboles",false);
    cartas[33]=*new Carta("8E3N","Ocho","Negro","Treboles",false);
    cartas[34]=*new Carta("9E3N","Nueve","Negro","Treboles",false);
    cartas[35]=*new Carta("10E3N","Diez","Negro","Treboles",false);
    cartas[36]=*new Carta("JE3N","Jota","Negro","Treboles",false);
    cartas[37]=*new Carta("QE3N","Cuina","Negro","Treboles",false);
    cartas[38]=*new Carta("KE3N","Rey","Negro","Treboles",false);

    //cartas de espadas
    cartas[39]=*new Carta("A!!N","As","Negro","Espadas",false);
    cartas[40]=*new Carta("2!!N","Dos","Negro","Espadas",false);
    cartas[41]=*new Carta("3!!N","Tres","Negro","Espadas",false);
    cartas[42]=*new Carta("4!!N","Cuatro","Negro","Espadas",false);
    cartas[43]=*new Carta("5!!N","Cinco","Negro","Espadas",false);
    cartas[44]=*new Carta("6!!N","Seis","Negro","Espadas",false);
    cartas[45]=*new Carta("7!!N","Siete","Negro","Espadas",false);
    cartas[46]=*new Carta("8!!N","Ocho","Negro","Espadas",false);
    cartas[47]=*new Carta("9!!N","Nueve","Negro","Espadas",false);
    cartas[48]=*new Carta("10!!N","Diez","Negro","Espadas",false);
    cartas[49]=*new Carta("J!!N","Jota","Negro","Espadas",false);
    cartas[50]=*new Carta("Q!!N","Cuina","Negro","Espadas",false);
    cartas[51]=*new Carta("K!!N","Rey","Negro","Espadas",false);
    //mostrarCartas(cartas);
    ordenarcartasAleatorias();
   // mostrarCartas(cartas);
   
}

void Tablero::ordenarcartasAleatorias(){
    array<Carta, 52> listacartas ={};
    for(int i=0;i<52;i++){
        listacartas[i]=cartas[i];
    }
    size_t tamano = listacartas.size();
    random_device rd;
    mt19937 generador(rd());
    shuffle(listacartas.begin(), listacartas.end(), generador);

    for(int i=0; i<52;i++){
        cartas[i]=listacartas[i];
    }
}
void Tablero::imprimirCabezal(Nodo* &cola1, Nodo* &cola2,Nodo* &pila1, Nodo* &pila2, Nodo* &pila3, Nodo* &pila4, Carta cartaMostrando){
    for(int i=0;i<7;i++){
        if(i==1){
            cout<<"___MACHO__";
        }else if(i==3){
            cout<<"____S1____";
        }
        else if(i==4){
            cout<<"____S2____";
        }else if(i==5){
            cout<<"____S3____";
        }else if(i==6){
            cout<<"____S4____";
        }else{
            cout<<"__________";
        }
        
    }
    cout<<endl;
    for(int i=0;i<7;i++){
        cout<<"|        |";
    }
    cout<<endl;
    if(cola1!=nullptr){
        cout<<"| ****** |";//impresion de cola 1

    }else{
        cout<<"|        |";
    }

    imprimirColaOPilaCabezal(cola2);
    cout<<"|        |";//espacio en blanco
    //impresion de pilas
    imprimirColaOPilaCabezal(pila1);//pila1
    imprimirColaOPilaCabezal(pila2);//pila2
    imprimirColaOPilaCabezal(pila3);//pila3
    imprimirColaOPilaCabezal(pila4);//pila4
    cout<<endl;
    for(int i=0;i<7;i++){
            cout<<"|________|";
        
    }
    cout<<endl;

}

void Tablero::imprimirColaOPilaCabezal(Nodo* &colatmp){
    if(colatmp==nullptr){
        cout<<"|        |";
    }else{
        if(colatmp->carta.getAcci().length()>4){
            cout<<"|  "<<colatmp->carta.getAcci()<<" |";
        }else{
            cout<<"|  "<<colatmp->carta.getAcci()<<"  |";
        }   
    }
}

void Tablero::imprimirNodo(Nodo* &cola){
    Nodo *tmp=cola;
    int i=1;
    while(tmp != nullptr){
        cout<<i<<". ";
        tmp->carta.mostrarInfo();
        tmp=tmp->siguiente;
        i++;
    }
}

Carta Tablero:: pop(Nodo* &primeroCola1) {
    Carta tmpcarta = primeroCola1->carta;
        if (primeroCola1 != nullptr) {
            Nodo* temp = primeroCola1;
            primeroCola1 = primeroCola1->siguiente;
            delete temp;
        } else {
            std::cout << "La cola está vacía." << std::endl;
        }
    return tmpcarta;
}

void Tablero::imprimirPie(Nodo* &pila5, Nodo* &pila6, Nodo* &pila7, Nodo* &pila8, Nodo* &pila9, Nodo* &pila10, Nodo* &pila11){
    Nodo *pila5tmp=pila5;
    Nodo *pila6tmp=pila6;
    Nodo *pila7tmp=pila7;
    Nodo *pila8tmp=pila8;
    Nodo *pila9tmp=pila9;
    Nodo *pila10tmp=pila10;
    Nodo *pila11tmp=pila11;
    llevarAlUltimo(pila5tmp);
    llevarAlUltimo(pila6tmp);
    llevarAlUltimo(pila7tmp);
    llevarAlUltimo(pila8tmp);
    llevarAlUltimo(pila9tmp);
    llevarAlUltimo(pila10tmp);
    llevarAlUltimo(pila11tmp);
    for(int i=0;i<7;i++){
        if(i==0){
            cout<<"|_________";
        }else if(i==6){
            cout<<"_________|";
        }else{
            cout<<"__________";
        }
    }
    cout<<endl;
    for(int i=1;i<tamanioMasGrandeDeLista(pila5, pila6, pila7, pila8, pila9, pila10, pila11);i++){
        imprimirNodoPila((pila5tmp));
        imprimirNodoPila((pila6tmp));
        imprimirNodoPila((pila7tmp));
        imprimirNodoPila((pila8tmp));
        imprimirNodoPila((pila9tmp));
        imprimirNodoPila((pila10tmp));
        imprimirNodoPila((pila11tmp));
        cout<<endl;
    }
    for(int i=5;i<12;i++){
        if(i==10 || i==11){
            cout<<"____S"<<i<<"___";
        }else{
            cout<<"____S"<<i<<"____";
        }
        
    }
    cout<<endl;
}
void Tablero::llevarAlUltimo(Nodo* &pila){
    //cout<<"llevando al ultimo";
    if(pila!=nullptr){
        while (pila->siguiente!=nullptr) {
        pila=pila->siguiente;
        }
    }
    
}
void Tablero::imprimirNodoPila(Nodo* &pila){
    
    if(pila==nullptr){
        cout<<"|        |";
    }else{
        if(pila->carta.getMostrar()){            
            if(pila->carta.getAcci().length()>4){
                cout<<"|  "<<pila->carta.getAcci()<<" |";
            }else{
                cout<<"|  "<<pila->carta.getAcci()<<"  |";
            } 
        }else{
            cout<<"| ****** |";
        }       
        pila=pila->anterior;
    }
    
}
int Tablero::medirTamanio(Nodo* &pila){
    //cout<<"midiendo tamanio..."<<endl;
    Nodo* tmp=pila;
    int i=1;
    while(tmp!=nullptr){
        
        tmp=tmp->siguiente;
        i++;
    }
    return i;
}
 int Tablero::tamanioMasGrandeDeLista(Nodo* &pila5,Nodo* &pila6, Nodo* &pila7, Nodo* &pila8,Nodo* &pila9, Nodo * &pila10, Nodo* &pila11){
    int max=0;
    int aux=0;
    Nodo* tmpPila5=pila5;
    Nodo* tmpPila6=pila6;
    Nodo* tmpPila7=pila7;
    Nodo* tmpPila8=pila8;
    Nodo* tmpPila9=pila9;
    Nodo* tmpPila10=pila10;
    Nodo* tmpPila11=pila11;
    aux=medirTamanio(tmpPila5);
    if(aux>max){
        max=aux;
    }
    aux=medirTamanio(tmpPila6);
    if(aux>max){
        max=aux;
    }
    aux=medirTamanio(tmpPila7);
    if(aux>max){
        max=aux;
    }
    aux=medirTamanio(tmpPila8);
    if(aux>max){
        max=aux;
    }
    aux=medirTamanio(tmpPila9);
    if(aux>max){
        max=aux;
    }
    aux=medirTamanio(tmpPila10);
    if(aux>max){
        max=aux;
    }
    aux=medirTamanio(tmpPila11);
    if(aux>max){
        max=aux;
    }
    return max;
 }

 void Tablero::eliminarUltimoDeCola(Nodo* &frente, Nodo* &final){
    //cout<<"se ha eliminado la carta: "<<final->carta.getAcci()<<endl;
        if (frente == nullptr) {
            //std::cout << "La cola está vacía." << std::endl;
            return;
        }

        if (frente == final) {
            // Hay un solo elemento en la cola
            delete frente;
            frente = final = nullptr;
            return;
        }

        Nodo* nodoActual = frente;
        Nodo* nodoAnterior = nullptr;

        // Avanzar hasta el penúltimo nodo
        while (nodoActual->siguiente != nullptr) {
            nodoAnterior = nodoActual;
            nodoActual = nodoActual->siguiente;
        }

        // Eliminar el último nodo
        delete nodoActual;
        final = nodoAnterior;
        if (final != nullptr) {
            final->siguiente = nullptr;
        } else {
            // La cola está vacía después de la eliminación
            frente = nullptr;
        }
    
 }

 void Tablero::eliminarPrimeroPilaDoblementeEnlazada(Nodo*& pila) {
    //cout<<"haciendo pop a lista doblemente enlazada..."<<endl;

    if (pila != nullptr) {
        //cout<<"Eliminando el nodo de la lista doblemente enlazada...."<<endl;
        Nodo* nodoAEliminar = pila;
        pila = pila->siguiente;

        if (pila != nullptr) {    
            //cout<<"Eliminando el nodo de la lista doblemente enlazada....."<<endl;        
            pila->anterior = nullptr;
            pila->carta.setMostrar(true);
        }else{
            pila=nullptr;
            //cout<<"La pila quedo nula"<<endl;
        }
            

        delete nodoAEliminar;
    } else {
        //std::cout << "La pila está vacía." << std::endl;
    }
}
void Tablero::popPilaSimple(Nodo* &pila) {
        if (pila != nullptr) {
            Nodo* nodoAEliminar = pila;
            pila = pila->siguiente;
            delete nodoAEliminar;
        } else {
            cout << "La pila está vacía." << endl;
    }
}

//metodos para mover de pila inf a pila inf
bool Tablero::existeLaCarta(Nodo* &pila, string carta){
    Nodo *tmp = pila;
    bool existe=false;
    while(tmp!=nullptr){
        if(tmp->carta.getAcci()==carta){
            existe =true;
        }
        tmp=tmp->siguiente;
    }

    return existe;
}

void Tablero::quitarCartas(Nodo* &pila, string carta){
    if(existeLaCarta(pila, carta)){
        //cout<<"Si existe la carta.."<<endl;
        while (pila->carta.getAcci()!=carta) {
            cartasPasando.push_back(pila->carta);
            //metodo para eliminar el nodo actual de
            eliminarPrimeroPilaDoblementeEnlazada(pila);
            //pila=pila->siguiente;
        }
            cartasPasando.push_back(pila->carta);
            //metodo para eliminar el nodo actual de
            eliminarPrimeroPilaDoblementeEnlazada(pila);
            //pila=pila->siguiente;
            if(pila!=nullptr){
                pila->carta.setMostrar(true);
            }else{
                pila=nullptr;
            }
    }
}

void Tablero::imprimirCartasPasando(){
    for(int i=0;i<cartasPasando.size();i++){
        cartasPasando[i].mostrarInfo();
    }
}

Carta Tablero::traerCarta(string acci){
    Carta carta = *new Carta("null","null","null","null",false);
    for (int i=0; i<52; i++) {
        if(cartas[i].getAcci()==acci){            
            carta=cartas[i];
            i=52;
        }
    }
    return carta;
}

bool Tablero::verificarSiSePuedeMostrar(Nodo* &pila, string carta){
    Nodo* tmp=pila;
    bool existe=false;
    while (tmp!=nullptr) {
        if(tmp->carta.getAcci()==carta){
            existe=tmp->carta.getMostrar();
            
        }
        tmp=tmp->siguiente;
    }

    return existe;
}

bool Tablero::devolverInfoCarta(int numCarta, Nodo* &pila){
    
    bool info =false;
    Nodo* tmp=pila;
    //imprimirNodoPila(tmp);
    llevarAlUltimo(tmp);
    for(int i=0;i<numCarta;i++){
        //cout<<medirTamanio(pila)<<endl;
        if(numCarta<=medirTamanio(pila)-1){
            if(pila==nullptr){
            i=numCarta;
            }else if(i==numCarta-1){
            i=numCarta;
            info=true;
            cout<<"------>";tmp->carta.mostrarInfo();
            }else{
            tmp=tmp->anterior;
            }
        }
        
    }

    return info;
}