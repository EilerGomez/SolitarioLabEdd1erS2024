#include<iostream>
#include "Movimientos.h"

Movimientos::Movimientos(){}

bool Movimientos::movimientoDeMachoAPilasCabezales(Nodo* &macho, Nodo* &pila1, Nodo* &pila2, Nodo* &pila3, Nodo* &pila4, int numSecion){
        bool iscorrect=false;
            if(macho!=nullptr){
                switch (numSecion) {
                    case 1:
                        iscorrect=VerificarCorreccionMovimientoPilasCabezales(macho, pila1);
                        break;
                    case 2:
                        iscorrect=VerificarCorreccionMovimientoPilasCabezales(macho, pila2);
                        break;
                    case 3:
                        iscorrect=VerificarCorreccionMovimientoPilasCabezales(macho, pila3);
                        break;
                    case 4:
                        iscorrect=VerificarCorreccionMovimientoPilasCabezales(macho, pila4);
                        break;
                    default:
                        break;
                }
            }
        return iscorrect;

}

bool Movimientos::VerificarCorreccionMovimientoPilasCabezales(Nodo* &macho, Nodo* &pilaCabezal){
    bool iscorrect=false;
    if(OrdenPilasCabezales(macho, pilaCabezal)&&verificarTipoCartasPilaCabezal(macho, pilaCabezal)){
        agregarNodoAPila(pilaCabezal, macho->carta);//agregamos la carta a
        cout<<"Correcto, se deberia eliminar la carta de la pila inferior: "<<macho->carta.getAcci()<<endl;
        iscorrect=true;
    }else{
        cout<<"MOVIMIENTO NO VALIDO!!!!!"<<endl;
        cout<<OrdenPilasCabezales(macho, pilaCabezal)<<endl;
        cout<<verificarTipoCartasPilaCabezal(macho, pilaCabezal)<<endl;
    }
    return iscorrect;
}
bool Movimientos::verificarTipoCartasPilaCabezal(Nodo* &macho, Nodo* &pilaCabezal){
    bool iscorrect=false;
    if(pilaCabezal==nullptr){
        if(macho->carta.getNombre()=="As"){        
            iscorrect=true;
        }
    }else{
        iscorrect=macho->carta.getTipo()==pilaCabezal->carta.getTipo();
    }
    return iscorrect;    
}
Carta Movimientos:: popMacho(Nodo* &macho) {//pop a una COLA
    Carta tmpcarta = macho->carta;
        if (macho != nullptr) {
            Nodo* temp = macho;
            macho = macho->siguiente;
            cout<<"eliminando carta del macho: "<<temp->carta.getAcci()<<endl;
            delete temp;
        } else {
            std::cout << "La cola está vacía." << std::endl;
        }
    return tmpcarta;
}



void Movimientos::agregarNodoAPila(Nodo* &pila, Carta carta){//agregar nodo a pila normal
        Nodo* nuevoNodo = new Nodo(carta);
        nuevoNodo->siguiente = pila;
        pila = nuevoNodo;
}

bool Movimientos::OrdenPilasCabezales(Nodo* &macho, Nodo* &pilaCabezal){
    bool correcto=false;
    cout<<macho->carta.getNombre()<<endl;
    if(macho->carta.getNombre()=="As"){
        cout<<"la carta es un ass"<<endl;
        if(pilaCabezal==nullptr){
            correcto=true;
        }
    }else if(pilaCabezal!=nullptr){
        if(macho->carta.getNombre()=="Dos"){
        if(pilaCabezal->carta.getNombre()=="As"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Tres"){
        if(pilaCabezal->carta.getNombre()=="Dos"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Cuatro"){
        if(pilaCabezal->carta.getNombre()=="Tres"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Cinco"){
        if(pilaCabezal->carta.getNombre()=="Cuatro"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Seis"){
        if(pilaCabezal->carta.getNombre()=="Cinco"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Siete"){
        if(pilaCabezal->carta.getNombre()=="Seis"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Ocho"){
        if(pilaCabezal->carta.getNombre()=="Siete"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Nueve"){
        if(pilaCabezal->carta.getNombre()=="Ocho"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Diez"){
        if(pilaCabezal->carta.getNombre()=="Nueve"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Jota"){
        if(pilaCabezal->carta.getNombre()=="Diez"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Cuina"){
        if(pilaCabezal->carta.getNombre()=="Jota"){
            correcto=true;
        }
    }else if(macho->carta.getNombre()=="Rey"){
        if(pilaCabezal->carta.getNombre()=="Cuina"){
            correcto=true;
        }
    }
    }
    return correcto;
}

bool Movimientos::movimientoDeMachoAPilasInferiores(Nodo* &macho, Nodo* &pila5, Nodo* &pila6
        , Nodo* &pila7, Nodo* &pila8, Nodo* &pila9, Nodo* &pila10, Nodo* &pila11, int numSecion){
        bool iscorrect=false;
        if(macho!=nullptr){
            switch (numSecion) {
                case 5: iscorrect=VerificarCorreccionMovimientoPilasInferiores(macho,pila5);
                    break;
                case 6: iscorrect=VerificarCorreccionMovimientoPilasInferiores(macho,pila6);
                    break;
                case 7:iscorrect=VerificarCorreccionMovimientoPilasInferiores(macho,pila7);
                    break;
                case 8:iscorrect=VerificarCorreccionMovimientoPilasInferiores(macho,pila8);
                    break;
                case 9:iscorrect=VerificarCorreccionMovimientoPilasInferiores(macho,pila9);
                    break;
                case 10:iscorrect=VerificarCorreccionMovimientoPilasInferiores(macho,pila10);
                    break;
                case 11:iscorrect=VerificarCorreccionMovimientoPilasInferiores(macho,pila11);
                    break;
                default:
                    break;
            }
        }
    return iscorrect;
}
void Movimientos::agregarNodoAPilaDobleEnlace(Nodo* &pila, Carta carta){
       Nodo* nuevoNodo = new Nodo(carta);
        
        if (pila == nullptr) {
            pila = nuevoNodo;
        } else {
            nuevoNodo->siguiente = pila;
            pila->anterior = nuevoNodo;
            pila = nuevoNodo;
        }
}

bool Movimientos::VerificarCorreccionMovimientoPilasInferiores(Nodo* &macho, Nodo* &pilaInferior){
    bool iscorrect=false;
    if(verificarColorCartaPilasInferiores(macho, pilaInferior)&&OrdenPilasInferiores(macho, pilaInferior)){
        //agregar a la pila
        agregarNodoAPilaDobleEnlace(pilaInferior, macho->carta);
        pilaInferior->carta.setMostrar(true);//para que lo muestre en el tablero
        iscorrect=true;
    }else{
        cout<<"MOVIMIENTO NO VALIDO!!!!!"<<endl;
        cout<<verificarColorCartaPilasInferiores(macho, pilaInferior)<<endl;
        cout<<OrdenPilasInferiores(macho, pilaInferior)<<endl;
    }

    return iscorrect;
}

bool Movimientos::verificarColorCartaPilasInferiores(Nodo* &macho, Nodo* &pilaInferior){
    bool iscorrect=false;
    if(macho->carta.getNombre()=="Rey"){
        if(pilaInferior==nullptr){
            iscorrect=true;
        }
    }else{
        if(pilaInferior!=nullptr){
            if(macho->carta.getColor()=="Rojo"){
                if(pilaInferior->carta.getColor()=="Negro"){
                    iscorrect=true;
                }
            }else if(macho->carta.getColor()=="Negro"){
                if(pilaInferior->carta.getColor()=="Rojo"){
                    iscorrect=true;
                }
            }
        }
    }
    return iscorrect;
}
bool Movimientos::OrdenPilasInferiores(Nodo* &macho, Nodo* &pilaInferior){
    bool iscorrect=false;
    if(macho->carta.getNombre()=="Rey"){
        if(pilaInferior==nullptr){
            iscorrect=true;
        }
    }else if(pilaInferior!=nullptr){
        if(macho->carta.getNombre()=="As"){
            if(pilaInferior->carta.getNombre()=="Dos"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Dos"){
            if(pilaInferior->carta.getNombre()=="Tres"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Tres"){
            if(pilaInferior->carta.getNombre()=="Cuatro"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Cuatro"){
            if(pilaInferior->carta.getNombre()=="Cinco"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Cinco"){
            if(pilaInferior->carta.getNombre()=="Seis"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Seis"){
            if(pilaInferior->carta.getNombre()=="Siete"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Siete"){
            if(pilaInferior->carta.getNombre()=="Ocho"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Ocho"){
            if(pilaInferior->carta.getNombre()=="Nueve"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Nueve"){
            if(pilaInferior->carta.getNombre()=="Diez"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Diez"){
            if(pilaInferior->carta.getNombre()=="Jota"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Jota"){
            if(pilaInferior->carta.getNombre()=="Cuina"){
                iscorrect=true;
            }
        }else if(macho->carta.getNombre()=="Cuina"){
            if(pilaInferior->carta.getNombre()=="Rey"){
                iscorrect=true;
            }
        }
    }

    return iscorrect;
}

bool Movimientos::MovimientoDePilaInferiorAPilasCabezales(Nodo* &pila1,Nodo* &pila2,Nodo* &pila3, Nodo* &pila4, Nodo* &pila5, Nodo* &pila6
        , Nodo* &pila7, Nodo* &pila8, Nodo* &pila9, Nodo* &pila10, Nodo* &pila11, int numpilaCabezal, int numPilaInferior){
            return VerificarCorreccionMovimientoPilasCabezales(pilaInferior(pila5, pila6, pila7, pila8, pila9, pila10, pila11, numPilaInferior),
            pilaCabezal(pila1,pila2,pila3,pila4,numpilaCabezal));
}


Nodo* &Movimientos::pilaInferior(Nodo* &pila5, Nodo* &pila6, Nodo* &pila7, Nodo* &pila8, Nodo* &pila9, Nodo* &pila10, Nodo* &pila11, int numPilaInferior){
    switch (numPilaInferior) {
    case 5: return pila5;break;
    case 6:return pila6;break;
    case 7:return pila7;break;
    case 8:return pila8;break;
    case 9:return pila9;break;
    case 10: return pila10;break;
    case 11:return pila11;break;
    default:throw std::runtime_error("Número de pila inferior no válido");break;
    }
}
Nodo* &Movimientos::pilaCabezal(Nodo* &pila1, Nodo* &pila2, Nodo* &pila3, Nodo* &pila4, int numPilaCabezal){
    switch (numPilaCabezal) {
    case 1:return pila1;break;
    case 2:return pila2;break;
    case 3:return pila3;break;
    case 4:return pila4;break;
    default:
        throw std::runtime_error("Número de pila de cabezal no válido");
    break;
    }
}

bool Movimientos::MovimientoDePilasCabezalesAPilasInferiores(Nodo* &pila1,Nodo* &pila2,Nodo* &pila3, Nodo* &pila4, Nodo* &pila5, Nodo* &pila6
        , Nodo* &pila7, Nodo* &pila8, Nodo* &pila9, Nodo* &pila10, Nodo* &pila11, int numpilaCabezal, int numPilaInferior){
            return VerificarCorreccionMovimientoPilasInferiores(pilaCabezal(pila1, pila2, pila3, pila4, numpilaCabezal),
            pilaInferior(pila5, pila6, pila7, pila8, pila9, pila10, pila11,  numPilaInferior));
}



