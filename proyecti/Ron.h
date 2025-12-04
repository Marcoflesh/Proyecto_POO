#ifndef RON_H
#define RON_H
#include "Bebida.h"
#include <string>
using namespace std;

class Ron : public Bebida{

private:
    string estilo;
    bool especias;

public:
    Ron(int _stock, float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre,
        const string& _estilo, bool _especias);

    virtual ~Ron(){}

    string getEstilo(){return estilo; }
    bool getEspecias(){return especias; }

    void setEstilo(string style);
    void setEspecias(bool spices);

    void servir() override;
    string toString() override;
    void descontar(int) override;
};

#endif