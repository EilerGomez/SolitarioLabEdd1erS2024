#include "Tablero.h"
#include "Carta.h"
#include<iostream>
using namespace std;


Tablero::Tablero(){
    cartas[0]=*new Carta("A<>R","As","Rojo","Diamantes");
    cartas[1]=*new Carta("2<>R","Dos","Rojo","Diamantes");
    cartas[2]=*new Carta("3<>R","Tres","Rojo","Diamantes");
    cartas[3]=*new Carta("4<>R","Cuatro","Rojo","Diamantes");
    cartas[4]=*new Carta("5<>R","Cinco","Rojo","Diamantes");
    cartas[5]=*new Carta("6<>R","Seis","Rojo","Diamantes");
    cartas[6]=*new Carta("7<>R","Siete","Rojo","Diamantes");
    cartas[7]=*new Carta("8<>R","Ocho","Rojo","Diamantes");
    cartas[8]=*new Carta("9<>R","Nueve","Rojo","Diamantes");
    cartas[9]=*new Carta("10<>R","Diez","Rojo","Diamantes");
    cartas[10]=*new Carta("J<>R","Jota","Rojo","Diamantes");
    cartas[11]=*new Carta("Q<>R","Cuina","Rojo","Diamantes");
    cartas[12]=*new Carta("K<>R","Rey","Rojo","Diamantes");
    cartas[13]=*new Carta("A<3R","As","Rojo","Corazones");
    cartas[14]=*new Carta("2<3R","Dos","Rojo","Corazones");
    cartas[13]=*new Carta("3<3R","Tres","Rojo","Corazones");
    cartas[14]=*new Carta("4<3R","Cuatro","Rojo","Corazones");
    cartas[15]=*new Carta("5<3R","Cinco","Rojo","Corazones");
    cartas[16]=*new Carta("6<3R","Seis","Rojo","Corazones");
    cartas[17]=*new Carta("7<3R","Siete","Rojo","Corazones");
    cartas[18]=*new Carta("8<3R","Ocho","Rojo","Corazones");
    cartas[19]=*new Carta("9<3R","Nueve","Rojo","Corazones");
    cartas[20]=*new Carta("10<3R","Diez","Rojo","Corazones");
    cartas[21]=*new Carta("J<3R","Jota","Rojo","Corazones");
    cartas[22]=*new Carta("Q<3R","Cuina","Rojo","Corazones");
    cartas[23]=*new Carta("R<3R","Rey","Rojo","Corazones");
    //falta la mitad, los treboles y las espadas


}