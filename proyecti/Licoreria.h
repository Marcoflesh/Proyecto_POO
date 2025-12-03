#ifndef LICORERIA_H
#define LICORERIA_H
#include <vector>
#include <string>
#include "Bebida.h"
using namespace std;

class Licoreria {

private:
    vector<Bebida*> inventario;
    string nombre;

public:
Licoreria(string _nombre);

virtual ~Licoreria();

string getNombre(){return nombre; }
int getBebidasQty(){return inventario.size(); }

void setNombre(string name);

void agregarBebida(Bebida* bebida);
void mostrarInventario();
void servirBebida(int num_bebida);
void cobrar(int num_bebida, int cantidad);
void mostrarBebida(int num_bebida);
};

#endif