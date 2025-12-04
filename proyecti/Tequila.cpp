#include <iostream>
#include "Tequila.h"
using namespace std;

Tequila::Tequila(int _stock, float _porcentaje, float _precio, 
    float _descuento, const string& _marca, const string& _pais, 
    const string& _nombre, const string& _region, const string& _categoria, 
    bool _agave) : Bebida(_stock, _porcentaje, _precio, _descuento, _marca, 
        _pais, _nombre), 
    region(_region), categoria(_categoria), agave(_agave) {}

void Tequila::setRegion(string region){
    this->region = region;
}
void Tequila::setCategoria(string category){
    categoria = category;
}
void Tequila::setAgave(bool a){
    agave = a;
}

void Tequila::servir(){
    cout << "Estas tomando un caballito de tequila " << categoria 
    <<  " de " << region << endl;
    if (categoria == "Blanco"){
        cout << "Te recomiendo tomartelo asi en seco" << endl;
    }
    else{
        cout << "Te recomiendo tomartelo con calma para que disfrutes mas" 
        << endl;
    }
}
string Tequila::toString(){
    string texto, pureza;

    pureza = agave ? "100'%' agave" : "mixto"; 
    texto = Bebida::toString() + "\nRegion: " + region 
        + "\nCategoria: " + categoria + "\nHecho 100'%' de agave: " 
        + pureza;
    return texto;
}

void Tequila::descontar(int cantidad){
    float total;
    total = precio * cantidad;
    if (agave){
        cout << "no habrá descuento porque es 100'%' de agave" << endl;
        cout << "Total: $" << total << endl;
    }
    else{
        if (cantidad > 7){
            Bebida::descontar(cantidad);
        }
        else{
            cout << "Debes tomar más de 7 caballitos para que se te haga"
            << " un descuento" << endl;
            cout << "Total: $" << total << endl;
        }
    }
}
