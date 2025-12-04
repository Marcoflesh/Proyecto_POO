#include <iostream>
#include "Whiskey.h"
using namespace std;

Whiskey::Whiskey(int _stock, float _porcentaje, 
    float _precio, float _descuento, const string& _marca, 
    const string& _pais, const string& _nombre, int _yearsAged, 
    const string& _barrica) : Bebida(_stock, _porcentaje, _precio, 
        _descuento, _marca, _pais, _nombre), yearsAged(_yearsAged), 
        barrica(_barrica) {}

void Whiskey::setYearsAged(int years){
    yearsAged = years;
}
void Whiskey::setBarrica(string barrel){
    barrica = barrel;
}

void Whiskey::servir(){
    cout << "Sirviendo un buen whiskey de " << yearsAged 
    << " años de añejamiento de una barrica " << barrica << endl;
}
string Whiskey::toString(){
    string texto;

    texto = Bebida::toString() + "\nAños de añejamiento: " 
        + to_string(yearsAged) + "\nTipo de barrica: " + barrica;
    return texto;
}
float Whiskey::descontar(int cantidad){
    if (yearsAged > 20){
        float total;
        cout << "Este whiskey es especial por ende no hay descuentos" << endl;
        total = precio * cantidad;
        cout << "Total $" << total << endl;
        return total;
    }
    else{
        return Bebida::descontar(cantidad);
    }
}