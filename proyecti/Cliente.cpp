#include <iostream>
#include <vector>
#include <string>
#include "Cliente.h"
#include "Licoreria.h"
using namespace std;

Cliente::Cliente(const string& _nombre, int _edad)
    : nombre(_nombre), edad(_edad), shots(0), cuenta(0.0) {}

void Cliente::setNombre(string name){
    nombre = name;
}
void Cliente::setEdad(int age){
    edad = age;
}

void Cliente::pedirBebida(Licoreria& local, int num_bebida, int cantidad){
    float bill;
    if (edad < 18){
        cout << nombre << " Eres menor de edad, prohibido el alcohol" << endl;
        return;
    }
    
    bill = local.cobrar(num_bebida, cantidad);

    shots += cantidad;
    cuenta += bill;

    cout << nombre << " brother, ya llevas " << shots << " tomados " 
    "Tu cuenta total hasta ahora es de: " << cuenta << endl;
}

void Cliente::beberShot(int cantidad){
    if (cantidad <=0){
        cout << "mi loco, tomate algo, no llevas nada" << endl;
        return;
    }
    shots += cantidad;
    cout << nombre << "ya llevas " << cantidad << " tragos " << endl;
}

void Cliente::mostrarInfo(){
    cout << "info del cliente" << endl;
    cout << "nombre: " << nombre << "\nedad: " << edad << "\nshots tomados: " 
    << shots << " Cuenta hasta ahora: $" << cuenta << endl;
}