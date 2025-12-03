#ifndef WHISKEY_H
#define WHISKEY_H
#include "Bebida.h"
#include <string>
using namespace std;

class Whiskey : public Bebida{

private:
    int yearsAged; // esta en ingles por la ñ
    string barrica;

public:
    Whiskey(float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre,
        int _yearsAged, const string& _barrica);
    
    virtual ~Whiskey(){}
    
    int getYearsAged(){return yearsAged; }
    string getBarrica(){return barrica; }

    void setYearsAged(int years);
    void setBarrica(string barrel);

    void servir() override;
    string toString() override;
    void descontar(int) override;
};
#endif
