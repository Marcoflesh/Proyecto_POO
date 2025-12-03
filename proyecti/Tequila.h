#ifndef TEQUILA_H
#define TEQUILA_H
#include "Bebida.h"
#include <string>
using namespace std;

class Tequila : public Bebida{
private:
    string region;
    string categoria;
    bool agave;

public:
    Tequila(float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre,
        const string& _region, const string& _categoria, bool _agave);
    
    virtual ~Tequila(){}
    
    string getRegion(){return region; }
    string getCategoria(){return categoria; }
    bool isAgave(){return agave; }

    void setRegion(string region);
    void setCategoria(string category);
    void setAgave(bool a);

    void servir() override;
    string toString() override;
    void descontar(int) override;
};

#endif