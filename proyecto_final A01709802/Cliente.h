#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include "Licoreria.h"

using namespace std;

/**
 * @brief Clase que representa a un cliente de la taberna.
 *
 * Administra la información del consumidor, incluyendo su nombre, edad,
 * el total de tragos consumidos y la cuenta acumulada. Proporciona métodos
 * para solicitar bebidas, pagar la cuenta y visualizar información personal.
 */
class Cliente{

private:
    string nombre;      /**< Nombre del cliente. */
    int edad;           /**< Edad del cliente. */
    int shots;          /**< Total de tragos consumidos. */
    double cuenta;      /**< Cuenta acumulada por el cliente. */

public:

    /**
     * @brief Constructor de la clase Cliente.
     * @param _nombre Nombre del cliente.
     * @param _edad Edad del cliente.
     */
    Cliente(const string& _nombre, int _edad);
    
    virtual ~Cliente(){}

    string getNombre(){return nombre; }
    int getEdad(){return edad; }
    int getShots(){return shots; }
    double getCuenta(){return cuenta; }

    void setNombre(string name);
    void setEdad(int age);

    /**
     * @brief Solicita una bebida de la licorería.
     *
     * Llama a Licoreria::cobrarBebida() para procesar la compra,
     * acumula la cuenta y suma los tragos consumidos.
     *
     * @param local Referencia a la licorería.
     * @param num_bebida Índice de la bebida en inventario.
     * @param cantidad Cantidad de tragos solicitados.
     */
    void pedirBebida(Licoreria& local, int num_bebida, int cantidad);
    
    /**
     * @brief Suma tragos manualmente al cliente.
     * @param cantidad Número de tragos.
     */
    void beberShot(int cantidad);

    /**
     * @brief Muestra la información general del cliente.
     */
    void mostrarInfo();

    /**
     * @brief Maneja el pago de la cuenta total del cliente.
     *
     * Obliga al cliente a cubrir su deuda antes de abandonar
     * su sesión. Si paga, la cuenta se restablece a cero.
     */
    void payCheck();
};

#endif