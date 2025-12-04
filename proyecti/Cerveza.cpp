#include <iostream>
#include "Cerveza.h"
using namespace std;
Cerveza::Cerveza(int _stock, float _porcentaje, float _precio, 
    float _descuento, const string& _marca, const string& _pais, 
    const string& _nombre, const string& _tipo, float _ibu) 
    : Bebida(_stock, _porcentaje, _precio, _descuento, _marca, 
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
    if (cantidad < 5){
        cout << "chin!, no llegaste al descuento chaval..." << endl;
        float descuento = 0.0;
        Bebida::descontar(cantidad);
    }
    else{
        cout << "Venga chavaaaaaaal tomaste " << cantidad 
            << " te ganaste un 20'%' de descuento " << endl;

        descuento = 0.20;
        Bebida::descontar(cantidad);    
    }
}
