#include "Tablero.h"
#include "Carta.h"
#include "Cola.h"
#include "Nodo.h"
#include<iostream>
#include <iterator>
#include<cstdlib>
#include<ctime>
using namespace std;

void Tablero::mostrarCartas(Carta cartasArray[]){
     for (int i=0; i<52; i++) {
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
    cartas[30]=*new Carta("5E3N","Cinco","Negro","Trebole",false);
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
   
}
void Tablero::imprimirCabezal(Nodo* &cola1, Nodo* &cola2,Nodo* &pila1, Nodo* &pila2, Nodo* &pila3, Nodo* &pila4){
    for(int i=0;i<7;i++){
        cout<<"|--------|";
    }
    cout<<endl;
    /*Nodo *tmp=cola;
    while(tmp != nullptr){
        cout<<tmp->carta.getAcci()<<endl;
        tmp=tmp->siguiente;
    }*/

    cout<<"|__"<<cola1->carta.getAcci()<<"__|";//impresion de cola 1

    if(cola2==nullptr){//impresion de cola2
        cout<<"|        |";
    }else{
        cout<<"|__"<<cola2->carta.getAcci()<<"__|";
    }

    //impresion de espacio vacio
    cout<<"|        |";
    //impresion de cola1
    if(pila1==nullptr){
        cout<<"|        |";
    }else{
        cout<<"|__"<<pila1->carta.getAcci()<<"__|";
    }
    
    //impresion de pila 2
    if(pila2==nullptr){
        cout<<"|        |";
    }else{
        cout<<"|__"<<pila2->carta.getAcci()<<"__|";
    }
    //impresion de pila3
    if(pila3==nullptr){
        cout<<"|        |";
    }else{
        cout<<"|__"<<pila3->carta.getAcci()<<"__|";
    }
    //impresion de pila4
    if(pila4==nullptr){
        cout<<"|        |";
    }else{
        cout<<"|__"<<pila4->carta.getAcci()<<"__|";
    }
    cout<<endl;
    for(int i=0;i<7;i++){
        cout<<"|________|";
    }
    cout<<endl;

}

void Tablero::imprimirNodo(Nodo* &cola){
    Nodo *tmp=cola;
    while(tmp != nullptr){
        cout<<tmp->carta.getAcci()<<endl;
        tmp->siguiente;
    }
}
/*
void Tablero::imprimirCabezal(Cola *cola1arr){
    Cola *colaTemp=cola1arr;
    while(colaTemp != nullptr){
        cout<<colaTemp->carta.getAcci()<<endl;
        colaTemp->siguiente;
    }
}

bool Tablero::verificarSiLaCartaYaEstaAsignada(Carta carta){
    cout<<"verificando numero de carta";
    bool usada=false;
    for(int i=0 ; i<52;i++){
        if(carta.getAcci()==cartas[i].getAcci()){
            if(cartas[i].getUsada()){
                usada=true;
            }
            i=52;
        }
    }
    return usada;
}
void Tablero::inicializarCartasEnCola1(Cola *arrayCola1){
    for(int i=0; i<24;i++){
        int n;
        do
            
            n = 1 + rand() % 53;
            
        while(verificarSiLaCartaYaEstaAsignada(cartas[n]));
        arrayCola1->agregarNodo(arrayCola1, cartas[n]);
    }
}
*/