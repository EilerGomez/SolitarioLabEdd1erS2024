#include "Carta.h"
#include<iostream>

using namespace std;


Carta::Carta(const string acci, string nombre, string color, string tipo, bool usada){
    this->acci=acci;
    this->nombre=nombre;
    this->color=color;
    this->tipo=tipo;
    this->usada=usada;
}

Carta::Carta(){}

void Carta::mostrarInfo(){
    cout<<"Carta "<<acci<<":"<<nombre<<" de "<<tipo<<" "<<color<<endl;
}

string Carta::getAcci(){
    return this->acci;
}

string Carta::getColor(){
    return this->color;
}

string Carta::getNombre(){
    return this->nombre;
}

string Carta::getTipo(){
    return this->tipo;
}

bool Carta::getUsada(){
    return this->usada;
}

void Carta::setUsada(bool usada){
    this->usada=usada;
}