#include <iostream>
#include "Ron.h"
using namespace std;

Ron::Ron(float _porcentaje, float _precio, float _descuento, 
    const string& _marca, const string& _pais, const string& _nombre,
    const string& _estilo, bool _especias) : Bebida(_porcentaje, _precio, 
        _descuento, _marca, _pais, _nombre), 
        estilo(_estilo), especias(_especias) {}

void Ron::setEstilo(string style){
    estilo = style;
}
void Ron::setEspecias(bool spices){
    especias = spices;
}

void Ron::servir(){
    cout << "Aqui tienes un buen " << nombre << estilo << endl;
    
    if (especias){
        cout << "Te recomiendo tomartelo en cubas" << endl;
    }
    else{
        if (estilo == "Blanco"){
            cout << "Te recomiendo tomartelo en mojitos" << endl;
        }
        else if (estilo == "Añejado" || estilo == "Gran Reserva"){
            cout << "Te recomiendo tomartelo con hielo y ya" << endl;
        }
        else {
            cout << "Te recomiendo tomartelo combinado con un juguito" 
            << endl;
        }
    }
}

string Ron::toString() {
    string texto, especiado;

    especiado = especias ? "especiado" : "puro";
    texto = Bebida::toString() + "\nEstilo de ron: " + estilo 
        + "\nTipo: " + especiado;
    return texto;
}

void Ron::descontar(int cantidad){
    
    if (estilo == "Añejo" || estilo == "Gran Reserva"){
        cout << "Este ron " << categoria << "Al ser premium no"
        << "aplica descuentos" << endl;
        cout << "Tienes que pagar " << (precio * cantidad) << endl;
    }
    else {
        Bebida::descontar(cantidad);
    }
}