#include "Carta.h"
#include "EntornoDeJuego.h"
#include "Tablero.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(NULL));
    int entrada=1;
    cout<<"Ingrese 1 para empezar el juego"<<endl;
    cout<<"Presione cualquier tecla para salir."<<endl;
    cin>>entrada;
    if(entrada==1){
        EntornoDeJuego ej = *new EntornoDeJuego();
    }else{
        system("pause");
    }
    
    return 0;
}