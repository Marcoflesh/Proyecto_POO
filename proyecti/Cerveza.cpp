#include <iostream>
#include "Cerveza.h"
using namespace std;
Cerveza::Cerveza(float _porcentaje, float _precio, float _descuento, 
    const string& _marca, const string& _pais, const string& _nombre,
    string& _tipo, float _ibu) : Bebida(_porcentaje, _precio, _descuento, _marca, 
        _pais, _nombre), tipo(_tipo), ibu(_ibu) {}

void Cerveza::setTipo(string type){
    tipo = type;
}
void Cerveza::setIbu(float ibu){
    this->ibu = ibu;
}

void Cerveza::servir(){
    cout << "Sirviendo una buena " << nombre << " " << tipo << endl;
}
string Cerveza::toString(){
    string texto;
    
    texto = Bebida::toString() + "\nTipo de cerveza: " + tipo 
        + "\nIBU (amargor): " + to_string(ibu);
    return texto;
}
void Cerveza::descontar(int cantidad){
    descuento = 0.0;
    if (cantidad < 5){
        cout << "chin!, no llegaste al descuento chaval..." << endl;
        Bebida::descontar(descuento);
    }
    else{
        float total, descuento_nuevo, descontado, pago_total;
        cout << "Venga chavaaaaaaal tomaste " << cantidad 
        << "te ganaste un 20'%' de descuento " << endl;
        descuento_nuevo = descuento + 0.20;
        total = precio * cantidad;
        descontado = total * descuento_nuevo;
        pago_total = total - descontado;
        cout << "el precio por cerveza es: $" << precio << endl;
        cout << "el total por las " << cantidad << " cervezas es: $" 
        << total << endl;
        cout << "con el " << (descuento_nuevo * 100) 
        << "'%' \nTOTAL A PAGAR: $" << pago_total << endl;
    }
}
