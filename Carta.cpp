#include "Carta.h"
#include<iostream>

using namespace std;


Carta::Carta(const string acci, string nombre, string color, string tipo){
    this->acci=acci;
    this->nombre=nombre;
    this->color=color;
    this->tipo=tipo;
}

Carta::Carta(){}

void Carta::mostrarInfo(){
    cout<<"Carta: "<<nombre<<" de "<<tipo<<" "<<color<<endl;
}