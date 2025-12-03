#ifndef VINO_H
#define VINO_H
#include "Bebida.h"
#include <string>

class Vino : public Bebida{

private:
    string uva;
    int yearCosecha;

public:
    Vino(float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre,
        const string& _uva, int _yearCosecha);
    
    virtual ~Vino(){}
    
    string getUva(){return uva; }
    int getYearCosecha(){return yearCosecha; }

    void setUva(string grape);
    void setYearCosecha(int year);

    void servir() override;
    string toString() override;
};

#endif