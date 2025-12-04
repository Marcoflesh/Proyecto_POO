#ifndef TEQUILA_H
#define TEQUILA_H
#include "Bebida.h"
#include <string>
using namespace std;


/**
 * @brief Clase que representa un tequila dentro del sistema.
 *
 * Esta clase extiende a Bebida agregando atributos específicos como la región
 * de origen, la categoría del tequila (blanco, reposado, añejo, etc.) y si es
 * 100% agave. El método descontar() aplica reglas particulares para calcular
 * el costo final basado tanto en la pureza del tequila como en la cantidad
 * solicitada por el cliente.
 */
class Tequila : public Bebida{
private:
    string region;      /**< Región de origen del tequila. */
    string categoria;   /**< Categoría del tequila (blanco, añejo, etc.). */
    bool agave;         /**< true si el tequila es 100% agave. */

public:

    /**
     * @brief Constructor de la clase Tequila.
     * 
     * @param _region Región donde fue producido.
     * @param _categoria Categoría del tequila.
     * @param _agave true si es 100% agave.
     */
    Tequila(int _stock, float _porcentaje, float _precio, float _descuento, 
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
    /**
     * @brief Calcula el total a pagar según reglas de descuento del tequila.
     *
     * Si el tequila es 100% agave, no aplica descuentos.  
     * Si no lo es, puede aplicar descuento cuando la cantidad supera
     * determinado límite. Además, la función ajusta el stock correspondiente.
     *
     * @param cantidad Cantidad de tragos solicitados.
     * @return Monto total a pagar luego de aplicar las reglas de descuento.
     */
    float descontar(int) override;
};

#endif