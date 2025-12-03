#include "Mezcal.h"
#include <iostream>
#include <string>
using namespace std;

Mezcal::Mezcal(float _porcentaje, float _precio, float _descuento, 
    const string& _marca, const string& _pais, const string& _nombre,
    const string& _tipoAgave, bool _gusano) 
    : Bebida(_porcentaje, _precio, _descuento, _marca, _pais, _nombre), 
    tipoAgave(_tipoAgave), gusano(_gusano) {}

void Mezcal::setTipoAgave(string agave){
    tipoAgave = agave;
}
void Mezcal::setGusano(bool worm){
    gusano = worm;
}

void Mezcal::servir(){
    cout << "Aqui tienes una buena copa de: " << nombre << tipoAgave << endl;
    
    if (gusano){
        cout << "Este mezcal tiene gusano de maguey" << endl;
    }
}

string Mezcal::toString(){
    string texto, gusanos;
    
    gusanos = gusano ? "con gusano" : "sin gusano";
    texto = Bebida::toString() + "\nTipo de agave: " + tipoAgave 
        + "\nContiene gusano: " + gusanos;
    return texto;
}

void Mezcal::descontar(int cantidad){
    if (tipoAgave == "Tabala" || tipoAgave == "Tepeztate" 
        || tipoAgave == "Jabali"){
            cout << "el agave de este mezcal es escaso" 
            << "y dificil de conseguir" << endl;
            cout << "No aplican descuentos por ende pagas completo" << endl;
        }
    else{
        if (cantidad > 7){
            float total, checkout;
            cout << "se aplica descuento del 15%" << endl;
            total = precio * cantidad;
            checkout = total - (total * 0.15f);
            cout << "tu cuenta es de: $ " << total << endl;
            cout << "pero con un 15'%' de descuento te queda en $" << pago 
            << endl;
            else{
                Bebida::descontar(cantidad);
            } 
        }
    }
}
