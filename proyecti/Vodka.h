#ifndef VODKA_H
#define VODKA_H
#include <string>
#include "Bebida.h"
using namespace std;

class Vodka : public Bebida{

private:
    string sabor;
    int destilaciones;

public:
    Vodka(int _stock, float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre,
        const string& _sabor, int _destilaciones);
    
    virtual ~Vodka(){}

    string getSabor(){return sabor; }
    int getDestilaciones(){return destilaciones; }

    void setSabor(string flavor);
    void setDestilaciones(int distillations);

    void servir() override;
    string toString() override;
    void descontar(int) override;
};

#endif