#include <iostream>
#include "Bebida.h"
#include <string>

using namespace std;

Bebida::Bebida(int _stock, float _porcentaje, float _precio, float _descuento, 
    const string& _marca, const string& _pais, const string& _nombre) 
    : stock(_stock), porcentaje(_porcentaje), precio(_precio), 
    descuento(_descuento), marca(_marca), pais(_pais), nombre(_nombre) {}

void Bebida::setStock(int inventario){
    stock = inventario;
}

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

void Bebida::sumarStock(int cantidad){
    stock += cantidad;
}

void Bebida::restarStock(int loot) {
    stock -= loot;
    if (stock < 0){
        stock = 0;
    }
}

float Bebida::descontar(){
    float descontado, nuevo;
    descontado = precio * descuento;
    nuevo = precio - descontado;

    cout << "se aplicó un descuento a " << nombre << " del " 
    << (descuento * 100) << "%, el nuevo precio es: $" << nuevo << endl;

    return nuevo;
}

float Bebida::descontar(float total){
    float descontado, pago;
    descontado = total * descuento;
    pago = total - descontado;

    cout << "total sin descuento: $" << total << endl;
    cout << "Total a pagar con descuento: $" << pago << endl;

    return pago;
}

float Bebida::descontar(int cantidad){
    if (cantidad <= 0){
        cout << "Que vas a tomar? aire?" << endl;
        return 0.0;
    }
    float total, final;
    total = precio * cantidad;
    cout << "tomaste: " << cantidad << " de " << nombre << endl;

    final = descontar(total);
    restarStock(cantidad);

    return final;
}

string Bebida::toString(){
    string texto;

    texto = "Bebida: " + nombre + "\nMarca: " + marca + "\nPais: " + pais
        + "\nPorcentaje de alcohol: " + to_string(porcentaje) + "\nPrecio: $" 
        + to_string(precio) + "\nCon descuento de : " 
        + to_string(descuento);
    return texto;
}
