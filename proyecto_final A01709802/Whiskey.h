#ifndef WHISKEY_H
#define WHISKEY_H
#include "Bebida.h"
#include <string>
using namespace std;

/**
 * @brief Clase que representa un whiskey.
 *
 * Extiende Bebida agregando información sobre su tiempo de añejamiento
 * y la barrica donde fue almacenado. Su descuento depende del nivel de
 * añejamiento.
 */
class Whiskey : public Bebida{

private:
    int yearsAged;    /**< Años de añejamiento. */
    string barrica;    /**< Tipo de barrica utilizada. */

public:
    Whiskey(int _stock, float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre,
        int _yearsAged, const string& _barrica);
    
    virtual ~Whiskey(){}
    
    int getYearsAged(){return yearsAged; }
    string getBarrica(){return barrica; }

    void setYearsAged(int years);
    void setBarrica(string barrel);

    void servir() override;
    string toString() override;

    /**
     * @brief Aplica descuentos dependiendo de si el whiskey es de alto añejamiento.
     * @param cantidad Cantidad tomada por el cliente.
     * @return Monto final a pagar.
     */
    float descontar(int) override;
};
#endif
