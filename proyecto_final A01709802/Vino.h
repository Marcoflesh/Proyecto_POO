#ifndef VINO_H
#define VINO_H
#include "Bebida.h"
#include <string>


/**
 * @brief Clase que representa un vino.
 *
 * Incluye tipo de uva y año de cosecha. Al no sobrescribir descontar(int),
 * utiliza directamente la lógica de la clase base Bebida.
 */
class Vino : public Bebida{

private:
    string uva;         /**< Tipo de uva utilizada. */
    int yearCosecha;    /**< Año de la cosecha. */

public:
    Vino(int _stock, float _porcentaje, float _precio, float _descuento, 
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