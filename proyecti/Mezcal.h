#ifndef MEZCAL_H
#define MEZCAL_H
#include <string>
#include "Bebida.h"
using namespace std;

class Mezcal : public Bebida{

private:
    string tipoAgave;
    bool gusano;

public:
    Mezcal(float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre,
        const string& _tipoAgave, bool _gusano);
    
    virtual ~Mezcal(){}

    string getTipoAgave(){return tipoAgave; }
    bool getGusano(){return gusano; }

    void setTipoAgave(string agave);
    void setGusano(bool worm);

    void servir() override;
    string toString() override;
    void descontar(int cantidad) override;
};

#endif