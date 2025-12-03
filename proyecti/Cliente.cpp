#include <iostream>
#include <vector>
#include <string>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(const string& _nombre, int _edad) : nombre(_nombre), 
edad(_edad), shots(0) {}

void Cliente::setNombre(string name){
    nombre = name;
}
void Cliente::setEdad(int age){
    edad = age;
}

void Cliente::pedirBebida(Licoreria& local, int num_bebida, int cantidad){
//terminar cuando haya tiempo
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
    cout << "nombre: " << nombre << " edad: " << edad << " shots tomados: " 
    << shots << endl;
}