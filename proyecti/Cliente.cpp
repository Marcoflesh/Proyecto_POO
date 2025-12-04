#include <iostream>
#include <vector>
#include <string>
#include "Cliente.h"
#include "Licoreria.h"
using namespace std;

Cliente::Cliente(const string& _nombre, int _edad)
    : nombre(_nombre), edad(_edad), shots(0) {}

void Cliente::setNombre(string name){
    nombre = name;
}
void Cliente::setEdad(int age){
    edad = age;
}

void Cliente::pedirBebida(Licoreria& local, int num_bebida, int cantidad){
    if (edad < 18){
        cout << nombre << " Eres menor de edad, prohibido el alcohol" << endl;
        return;
    }
    if (num_bebida < 0 || num_bebida >= local.getBebidasQty()){
        cout << "escoge otra bebida u otra cantidad" << endl;
        return;
    }
    cout << "Sirviendo...." << endl;
    local.servirBebida(num_bebida);

    cout << "El total de tu cuenta es: $" << endl;
    local.cobrar(num_bebida, cantidad);
    
    shots += cantidad;
    cout << nombre << "brother, ya llevas " << shots << "tomados" << endl;
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
    << shots << endl;
}