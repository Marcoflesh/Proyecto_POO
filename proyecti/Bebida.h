#define BEBIDA_H
#ifndef BEBIDA_H
#include <string>
using namespace std;

class Bebida {

protected:
    float porcentaje;
    float precio;
    float descuento;
    string nombre;
    string marca;
    string pais;

public:
    Bebida(float _porcentaje, float _precio, float _descuento, 
        const string& marca, const string& pais, const string& _nombre);

    virtual ~Bebida(){}

    int getGrados(){return porcentaje;}
    float getPrecio(){return precio; }
    float getDescuento(){return descuento; }
    string getNombre(){return nombre; }
    string getMarca(){return marca; }
    string getPais(){return pais; }

    void setGrados(float percentage);
    void setPrecio(float price);
    void setDescuento(float discount);
    void setNombre(string name);
    void setMarca(string brand);
    void setPais(string country);

    virtual void descontar();
    virtual void descontar(float condicional);
    virtual void descontar(int cantidad);

    virtual void servir() = 0;

    virtual string toString();
};
#endif 