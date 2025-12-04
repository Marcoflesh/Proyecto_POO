#ifndef VODKA_H
#define VODKA_H
#include <string>
#include "Bebida.h"
using namespace std;

/**
 * @brief Clase que representa un vodka.
 *
 * Define atributos como sabor y número de destilaciones. 
 * Las reglas de descuento se basan en la pureza y cantidad 
 * de tragos tomados por el cliente.
 */
class Vodka : public Bebida{

private:
    string sabor;       /**< Sabor del vodka. */
    int destilaciones;  /**< Número de destilaciones. */

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
    /**
     * @brief Aplica descuentos según pureza y cantidad tomada.
     * @param cantidad Número de tragos solicitados.
     * @return Monto final a pagar.
     */
    float descontar(int) override;
};

#endif