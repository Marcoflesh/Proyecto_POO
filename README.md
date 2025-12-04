# TC1033.302 — Proyecto  
# La Taberna Marco's

### Marco Antonio Hernández Roque

---

## Descripción del proyecto

La Taberna del Chaval es un programa de consola desarrollado en C++ que simula el funcionamiento de una licorería. El sistema permite gestionar un inventario de bebidas alcohólicas, atender clientes, aplicar descuentos especiales dependiendo del tipo de bebida y la cantidad consumida, controlar existencias y administrar cuentas de consumo.

El proyecto utiliza programación orientada a objetos (POO) con herencia y polimorfismo. Cada tipo de bebida (cerveza, tequila, mezcal, ron, whisky, vodka y vino) es representado mediante una clase derivada con características y reglas de descuento particulares.

El sistema cuenta con dos modos principales:

- Administrador: puede ver el inventario completo, agregar nuevas bebidas, eliminar bebidas, reabastecer stock y consultar información detallada de cada bebida. Para acceder a este modo es necesaria una autenticación.

- Cliente: puede revisar el inventario, seleccionar bebidas, tomar tragos, acumular cuenta y pagar su consumo antes de retirarse. El sistema valida la edad del cliente y descuenta el stock según la cantidad tomada, aplicando los descuentos correspondientes.

Este proyecto fue realizado como parte del curso TC1033.302 para practicar estructuras avanzadas de clases, gestión dinámica de memoria, validaciones y lógica de simulación.

---

## Instrucciones de compilación

Dentro de la carpeta "proyecto_final A01709802":
- Abrir su terminal de preferencia y ejecutar este comando
#### g++ *.cpp -o taberna
Esto compila todos los archivos .cpp y genera el ejecutable taberna.exe.
- Una vez compilado, ejecutar en la terminal con
#### .\taberna.exe
## Instrucciones de uso del programa

Al iniciar, se presenta un menú principal con las siguientes opciones:

1. Administrador  
   Permite ver el inventario, agregar bebidas nuevas, eliminar bebidas existentes, reabastecer el stock de una bebida previamente registrada y consultar la información detallada de una bebida en específico. Para acceder a este modo es necesaria una autenticación.  

2. Cliente  
   Permite visualizar el inventario actual, elegir una bebida y consultar su información antes de decidir cuántos tragos tomar. El sistema valida la edad del cliente. Cada consumo descuenta stock según la cantidad tomada y se aplica un descuento dependiendo del tipo de bebida. El consumo se acumula en una cuenta que deberá ser pagada antes de salir del modo cliente.

3. Salir  
   Termina la ejecución del programa.
   

## Estado del repositorio

Todos los commits generados durante el desarrollo del proyecto se encuentran en la rama de prueba. Esta rama fue actualizada consistentemente hasta antes de la entrega final del proyecto.


