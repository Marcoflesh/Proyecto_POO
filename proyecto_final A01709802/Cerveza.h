#ifndef CERVEZA_H
#define CERVEZA_H
#include "Bebida.h"
#include <string>
using namespace std;

/**
 * @brief Clase que representa una cerveza.
 *
 * Extiende la clase Bebida para incluir propiedades específicas como
 * tipo de cerveza (artesanal, comercial, lager, stout, etc.) e IBU.
 * Implementa reglas propias de descuento basadas en la cantidad consumida.
 */
class Cerveza : public Bebida{

private:
    string tipo;   /**< Tipo de cerveza. */
    float ibu;     /**< Índice de amargor. */

public:

    /**
     * @brief Constructor de la clase Cerveza.
     */
    Cerveza(int stock, float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre,
        const string& _tipo, float _ibu);
    
    virtual ~Cerveza(){}
    
    /** @return Tipo de cerveza. */
    string getTipo(){return tipo; }

    /** @return IBU de la cerveza. */
    float getIbu(){return ibu; }
    
    /** @brief Cambia el tipo de cerveza. */
    void setTipo(string type);

    /** @brief Cambia el nivel de amargor IBU. */
    void setIbu(float ibu);
    
    /** @brief Presentación de servicio específica de la cerveza. */
    void servir() override;

    /** @return Información detallada de la cerveza. */
    string toString() override;

    /**
     * @brief Aplica descuento dependiendo de la cantidad consumida.
     * @param cantidad Número de cervezas servidas.
     * @return Monto final a pagar.
     */
    float descontar(int) override;
};

#endif
