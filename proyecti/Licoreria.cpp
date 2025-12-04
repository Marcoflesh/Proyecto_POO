#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#include "Licoreria.h"
using namespace std;

Licoreria::Licoreria(string _nombre) : nombre(_nombre) {}

void Licoreria::setNombre(string name){
    nombre = name;
}

Licoreria::~Licoreria(){
    for (auto bebida : inventario){
        delete bebida;
    }
    inventario.clear();
}

void Licoreria::agregarBebida(Bebida* bebida){
    inventario.push_back(bebida);
    cout << "Se agregó " << bebida->getNombre() << endl;
}

void Licoreria::agregarStock(int num_bebida, int cantidad){
    if (num_bebida < 0){
        cout << "mmm como que ingresaste un numero que no" << endl;
        return;
    }

    if (cantidad <= 0){
        cout << "como vas a agregar algo negativo o nada? estas loco?" 
        << endl;
        return;
    }

    inventario[num_bebida]->sumarStock(cantidad);

    cout << "se han agregado " << cantidad << " tragos a " 
    << inventario[num_bebida]->getNombre() << endl;
    cout << "Ahora hay: " << inventario[num_bebida]->getStock() << endl;
}

void Licoreria::quitarBebida(int num_bebida){
    if (num_bebida < 0){
        cout << "que estas intentando quitar? " << endl;
        return;
    }
    cout << "Quitando " << inventario[num_bebida]->getNombre() << endl;
    
    delete inventario[num_bebida];
    inventario.erase(inventario.begin() + num_bebida);

    cout << "Bebida eliminada correctamente " << endl;
}

void Licoreria::mostrarInventario(){
    cout << "Tienes en inventario:" << endl;

    if (inventario.empty()){
        cout << "no hay bebidas" << endl;
    }

    for (int i = 0; i < inventario.size(); i++){
        cout << i << ": "<< inventario[i]->getStock() 
        << " tragos o botellas de : " 
        << inventario[i]->getNombre() << " de la marca: " 
        << inventario[i]->getMarca() << endl;
    }
}

void Licoreria::servirBebida(int num_bebida){
    if (num_bebida < 0 || num_bebida >= inventario.size()){
        cout << "error, se petateo esto, escoge otro numero" << endl;
        return;
    }

    if (inventario[num_bebida]->getStock() <= 0){
        cout << "Srry pero ya no queda en stock esta bebida" << endl;
        return;
    }

    inventario[num_bebida]->restarStock(1);
    inventario[num_bebida]->servir();

}

void Licoreria::cobrar(int num_bebida, int cantidad){
    if (num_bebida < 0 || num_bebida >= inventario.size()){
        cout << "error, se petateo esto, escoge otro numero" << endl;
        return;
    }

    inventario[num_bebida]->descontar(cantidad);
}

void Licoreria::mostrarBebida(int num_bebida){
    if (num_bebida < 0 || num_bebida >= inventario.size()){
        cout << "error, se petateo esto, escoge otro numero" << endl;
        return;
    }
    cout << "Info de la bebida:" << endl;
    cout << inventario[num_bebida]->toString() << endl;
}