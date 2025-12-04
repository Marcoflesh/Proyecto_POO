#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include "Licoreria.h"

using namespace std;

class Cliente{

private:
    string nombre;
    int edad;
    int shots;
    double cuenta;

public:
    Cliente(const string& _nombre, int _edad);
    
    virtual ~Cliente(){}

    string getNombre(){return nombre; }
    int getEdad(){return edad; }
    int getShots(){return shots; }
    double getCuenta(){return cuenta; }

    void setNombre(string name);
    void setEdad(int age);

    void pedirBebida(Licoreria& local, int num_bebida, int cantidad);
    void beberShot(int cantidad);
    void mostrarInfo();
    void payCheck();
};

#endif