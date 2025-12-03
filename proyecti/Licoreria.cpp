#include <iostream>
#include <vector>
#include <string>
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

void Licoreria::mostrarInventario(){
    cout << "Tienes en inventario:" << endl;

    if (inventario.empty()){
        cout << "no hay bebidas" << endl;
    }

    for (int i = 0; i < inventario.size(); i++){
        cout << i << " botellas de : " << inventario[i]->getNombre()
        << " de marca: " << inventario[i]->getMarca() << endl;
    }
}

void Licoreria::servirBebida(int num_bebida){
    if (num_bebida < 0 || num_bebida >= inventario.size()){
        cout << "error, se petateo esto, escoge otro numero" << endl;
        return;
    }

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