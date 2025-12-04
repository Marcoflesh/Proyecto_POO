#ifndef CERVEZA_H
#define CERVEZA_H
#include "Bebida.h"
#include <string>
using namespace std;

class Cerveza : public Bebida{

private:
    string tipo;
    float ibu; // International Bitterness Units (mide el amargor)

public:
    Cerveza(int stock, float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre,
        const string& _tipo, float _ibu);
    
    virtual ~Cerveza(){}
    
    string getTipo(){return tipo; }
    float getIbu(){return ibu; }

    void setTipo(string type);
    void setIbu(float ibu);

    void servir() override;
    string toString() override;
    float descontar(int) override;
};
#endif
