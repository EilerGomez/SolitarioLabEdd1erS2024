#ifndef CARTA_H
#define CARTA_H
#include<string>

using namespace std;
class Carta{
    private:
        string acci;
        string nombre;
        string color;
        string tipo;
        bool mostrar;

    public:
        Carta(const string acci,string nombre, string color, string tipo, bool usada);
        Carta();
        void mostrarInfo();
        string getAcci();
        string getNombre();
        string getColor();
        string getTipo();
        bool getMostrar();
        void setMostrar(bool usadais);


};

#endif