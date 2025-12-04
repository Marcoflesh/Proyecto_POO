#ifndef RON_H
#define RON_H
#include "Bebida.h"
#include <string>
using namespace std;

/**
 * @brief Clase que representa un ron.
 *
 * Incluye estilo del ron (blanco, añejo, dorado, etc.) y si contiene notas
 * especiadas. Define un comportamiento diferente para aplicar descuentos
 * dependiendo del tipo de ron.
 */
class Ron : public Bebida{

private:
    string estilo;     /**< Estilo del ron. */
    bool especias;     /**< true si contiene notas especiadas. */

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

    /**
     * @brief Aplica o no descuento dependiendo del estilo del ron.
     * @param cantidad Cantidad tomada por el cliente.
     * @return Monto final a pagar.
     */
    float descontar(int) override;
};

#endif