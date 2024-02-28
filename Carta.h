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
        bool usada;

    public:
        Carta(const string acci,string nombre, string color, string tipo, bool usada);
        Carta();
        void mostrarInfo();
        string getAcci();
        string getNombre();
        string getColor();
        string getTipo();
        bool getUsada();
        void setUsada(bool usadais);


};

#endif