#include "EntornoDeJuego.h"
#include "Carta.h"
#include <cstdlib>
#include<iostream>
#include <list>
#include <vector>


EntornoDeJuego::EntornoDeJuego(){
   this->tablero = *new Tablero();
   cola1=nullptr;
   primeroCola1=nullptr;
   ultimoCola1=nullptr;
   cola2=nullptr;
   primeroCola2=nullptr;
   ultimoCola2=nullptr;
   pila1=nullptr;
   pila2=nullptr;
   pila3=nullptr;
   pila4=nullptr;
   pila5=nullptr;
   pila6=nullptr;
   pila7=nullptr;
   pila8=nullptr;
   pila9=nullptr;
   pila10=nullptr;
   pila11=nullptr;
   generarCola1ConCartas(24);
   generarPilasConCartas(pila5,24,25);
   generarPilasConCartas(pila6,25,27);
   generarPilasConCartas(pila7,27,30);
   generarPilasConCartas(pila8,30,34);
   generarPilasConCartas(pila9,34,39);
   generarPilasConCartas(pila10,39,45);
   generarPilasConCartas(pila11,45,52);/**/
   inicializarPrimeraCartaVisible(pila5);
   inicializarPrimeraCartaVisible(pila6);
   inicializarPrimeraCartaVisible(pila7);
   inicializarPrimeraCartaVisible(pila8);
   inicializarPrimeraCartaVisible(pila9);
   inicializarPrimeraCartaVisible(pila10);
   inicializarPrimeraCartaVisible(pila11);
   //generarPilasConCartas(pila6,2);
   //generarPilasConCartas(pila7,3);
   //generarPilasConCartas(pila8,4);
   //generarPilasConCartas(pila9,5);
   //generarPilasConCartas(pila10,6);
   //generarPilasConCartas(pila11,7);

   //cout<<"aqui empiezan las cartas de la cola1"<<endl<<endl;
   //tablero.imprimirCabezal(primeroCola1,primeroCola2, pila1, pila2,pila3,pila4);
   //tablero.imprimirNodo(primeroCola1);
    //tablero.imprimirNodo(primeroCola1);
    hacerNullLasvariablesPasoSiguiente();
    hacerNullLasvariablesPasoAnterior();
    llenarVariablesAnterior();

   Menu();
   
}
void EntornoDeJuego::hacerNullLasvariablesPasoSiguiente(){
    primeroCola1Sig=nullptr;ultimoCola1Sig=nullptr;
    primerocola2Sig=nullptr;ultimoCola2Sig=nullptr;
    pila1Sig=pila2Sig=pila3Sig=pila4Sig=pila5Sig=pila6Sig=pila7Sig=pila8Sig=pila9Sig=pila10Sig=pila11Sig=nullptr;
}

void EntornoDeJuego::llenarVariablesSiguientes(){
    hacerNullLasvariablesPasoSiguiente();
    //pasarcartasAPasoAnterior FUNCIONA COMO PARA ANTERIOR COMO PARA SIGUIENTE
    primeroCola1Sig=nullptr;ultimoCola1Sig=nullptr;primerocola2Sig=nullptr;ultimoCola2Sig=nullptr;
    pasarcartasAPasoAnterior(primeroCola1, primeroCola1Sig, ultimoCola1Sig);
    pasarcartasAPasoAnterior(primeroCola2, primerocola2Sig, ultimoCola2Sig);
    pila1Sig=pila1;pila2Sig=pila2;pila3Sig=pila3;pila4Sig=pila4;
    pasarCartasPilasPasoAnterior(pila5,pila5Sig);pasarCartasPilasPasoAnterior(pila6,pila6Sig);
    pasarCartasPilasPasoAnterior(pila7,pila7Sig);pasarCartasPilasPasoAnterior(pila8,pila8Sig);
    pasarCartasPilasPasoAnterior(pila9,pila9Sig);pasarCartasPilasPasoAnterior(pila10,pila10Sig);
    pasarCartasPilasPasoAnterior(pila11,pila11Sig);
    tablero.imprimirNodo(primerocola2Sig);
}

void EntornoDeJuego::llenarVariablesActualesConSiguientes(){
    pila5=pila6=pila7=pila8=pila9=pila10=pila11=nullptr;
    primeroCola1=primeroCola1Sig;primeroCola2=primerocola2Sig;
    ultimoCola1=ultimoCola1Sig;ultimoCola2=ultimoCola2Sig;
    pila1=pila1Sig;pila2=pila2Sig;pila3=pila3Sig;pila4=pila4Sig;
    pasarCartasPilasPasoAnterior(pila5Sig, pila5); pasarCartasPilasPasoAnterior(pila6Sig, pila6);
    pasarCartasPilasPasoAnterior(pila7Sig, pila7); pasarCartasPilasPasoAnterior(pila8Sig, pila8);
    pasarCartasPilasPasoAnterior(pila9Sig, pila9); pasarCartasPilasPasoAnterior(pila10Sig, pila10);
    pasarCartasPilasPasoAnterior(pila11Sig, pila11);
}
void EntornoDeJuego::hacerNullLasvariablesPasoAnterior(){
    primeroCola1An=nullptr;
    ultimoCola1An=nullptr;
    primerocola2An=nullptr;
    ultimoCola2An = nullptr;
    pila1An=pila2An=pila3An=pila4An=pila5An=pila6An=pila7An=pila8An=pila9An=pila10An=pila11An=nullptr;
}

void EntornoDeJuego::llenarVariablesAnterior(){
    hacerNullLasvariablesPasoAnterior();
    primeroCola1An=nullptr;ultimoCola1An=nullptr;primerocola2An=nullptr;ultimoCola2An=nullptr;
    pasarcartasAPasoAnterior(primeroCola1, primeroCola1An, ultimoCola1An);
    pasarcartasAPasoAnterior(primeroCola2, primerocola2An, ultimoCola2An);
    pila1An=pila1;pila2An=pila2;pila3An=pila3;pila4An=pila4;
    pasarCartasPilasPasoAnterior(pila5,pila5An);pasarCartasPilasPasoAnterior(pila6,pila6An);
    pasarCartasPilasPasoAnterior(pila7,pila7An);pasarCartasPilasPasoAnterior(pila8,pila8An);
    pasarCartasPilasPasoAnterior(pila9,pila9An);pasarCartasPilasPasoAnterior(pila10,pila10An);
    pasarCartasPilasPasoAnterior(pila11,pila11An);

}
void EntornoDeJuego::llenarVariablesActualesConAnteriores(){
    pila5=pila6=pila7=pila8=pila9=pila10=pila11=nullptr;
    primeroCola1=primeroCola1An;primeroCola2=primerocola2An;
    ultimoCola1=ultimoCola1An;ultimoCola2=ultimoCola2An;
    pila1=pila1An;pila2=pila2An;pila3=pila3An;pila4=pila4An;
    pasarCartasPilasPasoAnterior(pila5An, pila5); pasarCartasPilasPasoAnterior(pila6An, pila6);
    pasarCartasPilasPasoAnterior(pila7An, pila7); pasarCartasPilasPasoAnterior(pila8An, pila8);
    pasarCartasPilasPasoAnterior(pila9An, pila9); pasarCartasPilasPasoAnterior(pila10An, pila10);
    pasarCartasPilasPasoAnterior(pila11An, pila11);

    //tablero.imprimirNodo(primeroCola1An);
}

void EntornoDeJuego::inicializarPrimeraCartaVisible(Nodo* &PilaVar){
    PilaVar->carta.setMostrar(true);
}

void EntornoDeJuego::pasarCartasPilasPasoAnterior(Nodo* &pila, Nodo* &pilaAnt){
    Nodo* tmp=pila;
    while(tmp!=nullptr){
        agregarNodoAPilaDobleEnlace(pilaAnt, tmp->carta);
        tmp=tmp->siguiente;
    }
}

void EntornoDeJuego::pasarcartasAPasoAnterior(Nodo* &primeroDeCola, Nodo* &primeroAnt, Nodo* &ultimoAnt){
    Nodo* tmp=primeroDeCola;
    while (tmp!=nullptr) {
        agregarNodoCola(primeroAnt,ultimoAnt,tmp->carta);
        tmp=tmp->siguiente;
    }
}

void EntornoDeJuego::agregarNodoCola(Nodo* &primero, Nodo* &ultimo, Carta carta){
 Nodo* nuevo = new Nodo(carta);
    if (ultimo == nullptr) {
        primero = ultimo = nuevo;
        ultimo->siguiente=nullptr;
    } else {
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
        ultimo->siguiente = nullptr;  // Asegúrate de asignar nullptr al siguiente del último nodo.
    }
}
void EntornoDeJuego::generarCola1ConCartas(int numCartas){
    for(int i=0;i<numCartas;i++){
        agregarNodoCola(primeroCola1, ultimoCola1, tablero.cartas[i]);
    }
}

void EntornoDeJuego::agregarNodoAPila(Nodo* &pila, Carta carta){
        Nodo* nuevoNodo = new Nodo(carta);
        nuevoNodo->siguiente = pila;
        pila = nuevoNodo;
}
void EntornoDeJuego::agregarNodoAPilaDobleEnlace(Nodo* &pila, Carta carta){
       Nodo* nuevoNodo = new Nodo(carta);
        
        if (pila == nullptr) {
            pila = nuevoNodo;
            pila->anterior=nullptr;
            pila->siguiente=nullptr;
        } else {
            nuevoNodo->siguiente = pila;
            pila->anterior = nuevoNodo;
            pila = nuevoNodo;
        }
}

void EntornoDeJuego::generarPilasConCartas(Nodo* &pilaG, int numInit, int numFinish){
    for(int i=numInit;i<numFinish;i++){
        agregarNodoAPilaDobleEnlace(pilaG, tablero.cartas[i]);
    }
}


void EntornoDeJuego::Menu(){

    int opcion=0;
    while(opcion !=-1){
        if(primeroCola1==nullptr&&primeroCola2==nullptr&&pila5==nullptr&&pila6==nullptr
            &&pila7==nullptr&&pila8==nullptr&&pila9==nullptr&&pila10==nullptr&&pila11==nullptr){
            cout<<"FELICIDADES HAS GANADO!!!!!!!!!!!"<<endl;
            tablero.imprimirCabezal(primeroCola1,ultimoCola2, pila1, pila2,pila3,pila4,cartaMostrando);
            tablero.imprimirPie(pila5, pila6,pila7, pila8, pila9, pila10, pila11);
        
            opcion=-1;
            return;
        }else{
            try {
                tablero.imprimirCabezal(primeroCola1,ultimoCola2, pila1, pila2,pila3,pila4,cartaMostrando);
                tablero.imprimirPie(pila5, pila6,pila7, pila8, pila9, pila10, pila11);
            } catch (const std::exception& e) {
                cout<<"surgio una exepcion"<<endl;
                std::cerr << "Se produjo una excepción: " << e.what() << std::endl;
            } 
        cout<<"Ingrese una opcion:"<<endl;
        cout<<"-1. Salir"<<endl<<"4. Paso anterior      5.Paso siguiente "<<endl<<"1.Sacar carta del MACHO."<<endl<<"2.Hacer movimiento del MACHO"<<endl<<"3.Movimeinto entre Secciones"<<endl;
        cin>>opcion;
        if(opcion==1||opcion==2||opcion==3){
            llenarVariablesAnterior();
            //hacerNullLasvariablesPasoSiguiente();
            haySiguiente=false;
        }
        //llenarVariablesAnterior();
        switch (opcion) {
            case 1:
                if(primeroCola1==nullptr&&primeroCola2==nullptr){
                    cout<<"NO SE PUEDE HACER ESTE MOVIMIENTO"<<endl;
                }else if(primeroCola1==nullptr){
                        //cout<<"la pila 1 esta vacia"<<endl;
                        primeroCola1=primeroCola2;
                        ultimoCola1=ultimoCola2;
                        primeroCola2=nullptr;
                        ultimoCola2=nullptr;
                }else{
                    agregarNodoCola(primeroCola2, ultimoCola2,tablero.pop(primeroCola1));

                    //tablero.imprimirNodo(primeroCola2);
                }
                break;
            case 2:
                if(primeroCola2!=nullptr){
                    int seccion;
                    cout<<"Mover del MACHO a la seccion: ";
                    cin>>seccion;
                    if(seccion==1||seccion==2||seccion==3||seccion==4){//movimiento del macho a cabezales
                        if(movimiento.movimientoDeMachoAPilasCabezales(ultimoCola2, pila1, pila2, pila3, pila4, seccion)){
                            tablero.eliminarUltimoDeCola(primeroCola2, ultimoCola2);
                            //cout<<"se ha eliminado el ultimo elemento del macho"<<endl;
                        }
                        
                    }else if(seccion==5||seccion==6||seccion==7||seccion==8||seccion==9||seccion==10||seccion==11){
                        //metodo de macho a pilas inferiores
                        if(movimiento.movimientoDeMachoAPilasInferiores(ultimoCola2, pila5, pila6, pila7, pila8, pila9, pila10, pila11, seccion)){
                            tablero.eliminarUltimoDeCola(primeroCola2, ultimoCola2);
                            //cout<<"se ha eliminado el ultimo elemento del macho"<<endl;
                        }
                    }
                }
                break;
            case 3:
                int seccionQuitar, seccionPoner;
                cout<<"Ingrese el numero de seccion a quitar ";
                cin>>seccionQuitar;
                cout<<"Ingrese el numero de seccion a poner ";
                cin>>seccionPoner;
                if(seccionQuitar!=seccionPoner && seccionPoner<=11 &&seccionQuitar<=11){
                    if((seccionQuitar==5||seccionQuitar==6||seccionQuitar==7||seccionQuitar==8||seccionQuitar==9
                        ||seccionQuitar==10||seccionQuitar==11)&&(seccionPoner==1||seccionPoner==2||seccionPoner==3
                        ||seccionPoner==4)){
                            //metodode pilas inferiores a pilas cabezales
                        if(movimiento.MovimientoDePilaInferiorAPilasCabezales(pila1, pila2, pila3, pila4, pila5, pila6, pila7, pila8, pila9, pila10, pila11,  seccionPoner, seccionQuitar)){
                            //metodo de eliminacion de primer elemento de la pila doblemente enlazada
                            tablero.eliminarPrimeroPilaDoblementeEnlazada(movimiento.pilaInferior(pila5, pila6, pila7,pila8, pila9, pila10, pila11,  seccionQuitar));

                        }
                    }else if((seccionQuitar==1||seccionQuitar==2||seccionQuitar==3||seccionQuitar==4)&&(seccionPoner==5||seccionPoner==6
                            ||seccionPoner==7||seccionPoner==8||seccionPoner==9||seccionPoner==10||seccionPoner==11)){
                                //metodo de pilas cabezales a pilas inferiores
                        if(movimiento.MovimientoDePilasCabezalesAPilasInferiores(pila1, pila2, pila3, pila4, pila5, pila6, pila7, pila8, pila9, pila10, pila11,  seccionQuitar,  seccionPoner)){
                            tablero.popPilaSimple(movimiento.pilaCabezal(pila1, pila2, pila3, pila4,  seccionQuitar));
                        }
                    }else if((seccionQuitar==1||seccionQuitar==2||seccionQuitar==3||seccionQuitar==4)&&
                            (seccionPoner==1||seccionPoner==2||seccionPoner==3||seccionPoner==4)){
                        //cout si intenta hacer movimientos entre pilas cabezales
                        cout<<"MOVIMIENTO NO VALIDO!!!!!!!!!!!"<<endl;
                    }else{
                        //metodo para hacer movimientos de pilas inferiores a pilas inferiores
                        string carta;
                        cout<<"ingrese el acci de la carta desde donde quiere hacer el movimiento: ";
                        cin>>carta;
                        //tablero.imprimirCartasPasando();
                        if(movimiento.OrdenPilasInferioresPorCarta(movimiento.pilaInferior(pila5, pila6, pila7, pila8, pila9, pila10, pila11,  seccionPoner), tablero.traerCarta(carta))
                        &&movimiento.VerificarColorcartasInferioresPorCarta(movimiento.pilaInferior(pila5, pila6, pila7, pila8, pila9, pila10, pila11,  seccionPoner), tablero.traerCarta(carta))
                        &&tablero.verificarSiSePuedeMostrar(movimiento.pilaInferior(pila5, pila6, pila7, pila8, pila9, pila10, pila11,  seccionQuitar), carta)){
                            tablero.quitarCartas(movimiento.pilaInferior(pila5, pila6, pila7, pila8, pila9, pila10, pila11,  seccionQuitar),  carta);
                            //cout<<"cartas que se han quitado: "<<endl;
                            for (int i=tablero.cartasPasando.size()-1;i>=0;i--) {
                                //tablero.cartasPasando[i].mostrarInfo();
                                agregarNodoAPilaDobleEnlace(movimiento.pilaInferior(pila5, pila6, pila7, pila8, pila9, pila10, pila11,  seccionPoner), tablero.cartasPasando[i]);
                            }
                            tablero.cartasPasando.clear();
                        }

                    }
                }
                break;
            case 4://llena las variables para un paso siguiente
                llenarVariablesSiguientes();
                haySiguiente=true;
                llenarVariablesActualesConAnteriores();
                break;
            case 5:
            if(haySiguiente){                
                llenarVariablesAnterior();
                llenarVariablesActualesConSiguientes();
            }              
                break;
            default:
                break;
        }
        }
    }

}