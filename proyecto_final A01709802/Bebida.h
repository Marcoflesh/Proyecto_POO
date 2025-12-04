#ifndef BEBIDA_H
#define BEBIDA_H
#include <string>
using namespace std;

/**
 * @brief Clase base abstracta que representa una bebida genérica.
 *
 * Proporciona los atributos y comportamientos comunes entre todas las bebidas,
 * incluyendo información general del producto, 
 * su precio, porcentaje de alcohol, descuento aplicable y gestión de stock. 
 * La clase define métodos virtuales para servir y aplicar descuentos, 
 * permitiendo que las clases derivadas implementen 
 * comportamientos específicos.
 */
class Bebida {

protected:
    int stock;                      /**< Cantidad disponible en inventario. */
    float porcentaje;               /**< Porcentaje de alcohol de la bebida. */
    float precio;                   /**< Precio unitario de la bebida. */
    float descuento;                /**< Porcentaje de descuento aplicado. */
    string nombre;                  /**< Nombre comercial de la bebida. */
    string marca;                   /**< Marca del producto. */
    string pais;                     /**< País de origen. */

public:

    /**
     * @brief Constructor de la clase Bebida.
     * @param _stock Stock inicial del producto.
     * @param _porcentaje Porcentaje de alcohol.
     * @param _precio Precio unitario.
     * @param _descuento Descuento inicial aplicado.
     * @param _marca Marca comercial.
     * @param _pais País de origen.
     * @param _nombre Nombre de la bebida.
     */
    Bebida(int _stock, float _porcentaje, float _precio, float _descuento, 
        const string& _marca, const string& _pais, const string& _nombre);

    virtual ~Bebida(){}
    
    /** @return Stock disponible. */
    int getStock(){return stock; }
    /** @return Porcentaje de alcohol. */
    float getGrados(){return porcentaje; }
    /** @return Precio unitario de la bebida. */
    float getPrecio(){return precio; }
    /** @return Descuento aplicado. */
    float getDescuento(){return descuento; }
    /** @return Nombre comercial. */
    string getNombre(){return nombre; }
    /** @return Marca comercial. */
    string getMarca(){return marca; }
    /** @return País de origen. */
    string getPais(){return pais; }

    /** @brief Establece un nuevo stock. */
    void setStock(int inventario);
    /** @brief Establece un nuevo grado alcohólico. */
    void setGrados(float percentage);
    /** @brief Establece un nuevo precio. */
    void setPrecio(float price);
     /** @brief Establece un nuevo descuento. */
    void setDescuento(float discount);
    /** @brief Cambia el nombre de la bebida. */
    void setNombre(string name);
    /** @brief Cambia la marca. */
    void setMarca(string brand);
    /** @brief Cambia el país de origen. */
    void setPais(string country);

    /**
     * @brief Aumenta el stock disponible.
     * @param cantidad Cantidad a agregar.
     */
    void sumarStock(int cantidad);

    /**
     * @brief Reduce el stock disponible.
     * @param loot Cantidad a disminuir.
     */
    void restarStock(int loot);

    /**
     * @brief Aplica descuento sobre un precio total.
     * @return Monto final luego del descuento.
     */
    virtual float descontar();

    /**
     * @brief Aplica descuento sobre un precio total.
     * @param total Monto base antes del descuento.
     * @return Monto final luego del descuento.
     */
    virtual float descontar(float total);

    /**
     * @brief Aplica descuento con base en cantidad de productos solicitados.
     * @param cantidad Número de unidades solicitadas.
     * @return Monto a pagar luego de aplicar descuentos y modificar stock.
     */
    virtual float descontar(int cantidad);
    
    /**
     * @brief Sirve la bebida al cliente.
     *
     * Método puramente virtual para que las clases derivadas definan
     * su propio comportamiento al momento de servir.
     */
    virtual void servir() = 0;
    
    /**
     * @brief Genera una cadena con información detallada del producto.
     * @return Información completa en formato de texto.
     */
    virtual string toString();
};

#endif