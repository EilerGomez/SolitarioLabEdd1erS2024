#include "Carta.h"
#include "EntornoDeJuego.h"
#include "Tablero.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include <stdexcept>

using namespace std;

int main(){
    srand(time(NULL));
    int entrada=1;
    cout<<"Ingrese 1 para empezar el juego"<<endl;
    cout<<"Presione cualquier tecla para salir."<<endl;
    cin>>entrada;
    if(entrada==1){
        EntornoDeJuego ej;
        try {
            ej = *new EntornoDeJuego();
        } catch (const std::exception& e) {
            cout<<"surgio una exepcion"<<endl;
            ej.tablero.cartasPasando.clear();
        } 
        
    }else{
        system("pause");
    }
    
    return 0;
}