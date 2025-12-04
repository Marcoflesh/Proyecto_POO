#ifndef LICORERIA_H
#define LICORERIA_H
#include <vector>
#include <string>
#include "Bebida.h"
using namespace std;


/**
 * @brief Clase que representa la administración de la taberna.
 *
 * Gestiona el inventario de bebidas, incluyendo sus existencias,
 * registro, eliminación, reabastecimiento y presentación al usuario.
 * También procesa consumos y genera los montos a pagar por los clientes.
 */
class Licoreria {

private:
    vector<Bebida*> inventario;   /**< Bebidas disponibles. */
    string nombre;                /**< Nombre de la taberna. */

public:

    /**
     * @brief Constructor de la clase Licoreria.
     * @param _nombre Nombre del establecimiento.
     */
    Licoreria(string _nombre);

    virtual ~Licoreria();

    string getNombre(){return nombre; }
    int getBebidasQty(){return inventario.size(); }

    void setNombre(string name);

    /**
     * @brief Agrega una nueva bebida al inventario.
     * @param bebida Puntero al objeto de bebida por registrar.
     */
    void agregarBebida(Bebida* bebida);

    /**
     * @brief Aumenta el stock de una bebida existente.
     * @param num_bebida Índice de la bebida a reabastecer.
     * @param cantidad Cantidad a sumar.
     */
    void agregarStock(int num_bebida, int cantidad);

    /**
     * @brief Elimina una bebida completa del inventario.
     * @param num_bebida Índice de la bebida a eliminar.
     */
    void quitarBebida(int num_bebida);

    /**
     * @brief Muestra el inventario general de la taberna.
     */
    void mostrarInventario();

    /**
     * @brief Sirve una bebida sin cobrar ni descontar stock.
     * @param num_bebida Índice dentro del inventario.
     */
    void servirBebida(int num_bebida);


    /**
     * @brief Cobra un consumo de bebida y retorna el monto final.
     * @param num_bebida Índice de la bebida dentro del inventario.
     * @param cantidad Número de tragos solicitados.
     * @return Monto final a pagar.
     */
    float cobrar(int num_bebida, int cantidad);


    /**
     * @brief Realiza la presentación visual de una bebida específica.
     * @param num_bebida Índice de la bebida a mostrar.
     */
    void mostrarBebida(int num_bebida);
};

#endif