#ifndef MEZCAL_H
#define MEZCAL_H
#include <string>
#include "Bebida.h"
using namespace std;

/**
 * @brief Clase que representa un mezcal.
 *
 * Extiende a Bebida añadiendo su tipo de agave y si contiene gusano.
 * Define reglas especiales de descuento basadas en la rareza del agave.
 */
class Mezcal : public Bebida{

private:
    string tipoAgave;    /**< Tipo de agave del que proviene. */
    bool gusano;         /**< Indica si la botella contiene gusano. */

public:

    /**
     * @brief Constructor de la clase Mezcal.
     */
    Mezcal(int _stock, float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre,
        const string& _tipoAgave, bool _gusano);
    
    virtual ~Mezcal(){}
    
     /** @return Tipo de agave del mezcal. */
    string getTipoAgave(){return tipoAgave; }

     /** @return true si contiene gusano. */
    bool getGusano(){return gusano; }
    
    /** @brief Cambia el tipo de agave. */
    void setTipoAgave(string agave);

    /** @brief Cambia si contiene gusano. */
    void setGusano(bool worm);
    
    /** @brief Comportamiento al servir un mezcal. */
    void servir() override;

    /** @return Información completa del mezcal. */
    string toString() override;

    /**
     * @brief Aplica descuento según la rareza del agave y la cantidad tomada.
     * @param cantidad Número de tragos solicitados.
     * @return Monto final a pagar.
     */
    float descontar(int) override;
};

#endif