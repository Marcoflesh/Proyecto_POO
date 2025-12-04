#include <iostream>
#include <string>
#include "Vodka.h"
using namespace std;

Vodka::Vodka(int _stock, float _porcentaje, float _precio, float _descuento, 
    const string& _marca, const string& _pais, const string& _nombre,
    const string& _sabor, int _destilaciones) 
    : Bebida(_stock, _porcentaje, _precio, _descuento, _marca, 
        _pais, _nombre), sabor(_sabor), destilaciones(_destilaciones) {}

void Vodka::setSabor(string flavor){
    sabor = flavor;
}
void Vodka::setDestilaciones(int distillations){
    destilaciones = distillations;
}

void Vodka::servir(){
    cout << "Ten un vodka de " << sabor << endl;
}

string Vodka::toString(){
    string texto;
    
    texto = Bebida::toString() + "\nSabor: " + sabor 
        + "\nNúmero de destilaciones: " + to_string(destilaciones);
    return texto;
}

float Vodka::descontar(int cantidad){
    if (cantidad <= 4 || destilaciones >= 5){
        float total;
        cout << "lástima chaval, no te tocó descuento, pagas completo"
        << endl;
        total = precio * cantidad;
        cout << "Total :$" << total << endl;
        return total;
    }
    else if(cantidad >= 5 && destilaciones < 5){
        cout << "Te ganaste un 18'%' de descuento " << endl;
        descuento = 0.18;
        return Bebida::descontar(cantidad);
    }
    else{
        return Bebida::descontar(cantidad);
    }
}

