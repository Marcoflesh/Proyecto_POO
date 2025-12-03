#include <iostream>
#include <string>
#include "Vino.h"
using namespace std;

Vino::Vino(float _porcentaje, float _precio, float _descuento, 
    const string& _marca, const string& _pais, const string& _nombre,
    const string& _uva, int _yearCosecha) 
    : Bebida(_porcentaje, _precio, _descuento, _marca, _pais, _nombre), 
    uva(_uva), yearCosecha(_yearCosecha) {}

void Vino::setUva(string grape){
    uva = grape;
}
void Vino::setYearCosecha(int year){
    yearCosecha = year;
}

void Vino::servir(){
    cout << "Ten una copa del vino " << nombre 
    << " del año " << yearCosecha << endl;
}

string Vino::toString(){
    string texto;
    
    texto = Bebida::toString() + "\nTipo de uva: " + uva 
        + "\nAño de cosecha: " + to_string(yearCosecha);
    return texto;
}