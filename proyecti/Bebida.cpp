#include <iostream>
#include "Bebida.h"
#include <string>

using namespace std;

Bebida::Bebida(float _porcentaje, float _precio, float _descuento, 
    const string& _marca, const string& _pais, const string& _nombre) 
    : porcentaje(_porcentaje), precio(_precio), descuento(_descuento), 
    marca(_marca), pais(_pais), nombre(_nombre) {}

void Bebida::setGrados(float percentage){
    porcentaje = percentage;
}
void Bebida::setPrecio(float price){
    precio = price;
}
void Bebida::setDescuento(float discount){
    descuento = discount;
}
void Bebida::setNombre(string name){
    nombre = name;
}
void Bebida::setMarca(string brand){
    marca = brand;
}
void Bebida::setPais(string country){
    pais = country;
}

void Bebida::descontar(){
    float restante;
    descontado = precio * descuento;
    precio -= descontado;
    cout << "se aplicó un descuento a " << nombre << "del " 
    << (descuento * 100) << "%, el nuevo precio es: $" << precio << endl;
}

void Bebida::descontar(float condicional){
    descuento = condicional;
    descontar();
}

void Bebida::descontar(int cantidad){
    if (cantidad > 0){
        precio = precio * cantidad;
        descontar();
    }
    else{
        cout << "mmmmm toma no?" << endl;
    }
}

string Bebida::toString(){
    string texto;

    texto = "Bebida: " + nombre + "\nMarca: " + marca + "\nPais: " + pais
        + "\nPorcentaje de alcohol: " + porcentaje + "\nPrecio: $" 
        + to_string(precio) + "\nCon descuento queda: " 
        + to_string(descuento);
    return texto;
}
