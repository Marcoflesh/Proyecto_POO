#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>

#include "Licoreria.h"
#include "Cliente.h"
#include "Cerveza.h"
#include "Ron.h"
#include "Tequila.h"
#include "Vodka.h"
#include "Whiskey.h"
#include "Mezcal.h"
#include "Vino.h"

using namespace std;

bool login();

int main(){
    
    srand(time(NULL));
    int stock = rand() % 15 + 4;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_NUMERIC, "C");

    Licoreria bar("Marco's");

    {// Cervezas
    bar.agregarBebida(new Cerveza(stock, 4.5, 25.0, 0.05, "Corona", "México",
        "Corona Light", "Clara", 12));
    bar.agregarBebida(new Cerveza(stock, 5.0, 30.0, 0.05, "Modelo", "México",
        "Modelo Especial", "Pilsner", 18));
    bar.agregarBebida(new Cerveza(stock, 6.0, 40.0, 0.05, "Heineken", 
        "Holanda", "Heineken", "Lager", 16));
    bar.agregarBebida(new Cerveza(stock, 4.2, 22.0, 0.05, "Budweiser", "USA", 
        "Bud", "Lager", 10));
    bar.agregarBebida(new Cerveza(stock, 7.0, 45.0, 0.05, "Guinness", 
        "Irlanda", "Guinness Draught", "Stout", 45));
    }
    {// Ron
    bar.agregarBebida(new Ron(stock, 38, 200, 0.10, "Bacardí", "Puerto Rico", 
        "Bacardí Blanco", "Blanco", false));
    bar.agregarBebida(new Ron(stock, 40, 250, 0.10, "Havana Club", "Cuba", 
        "Havana 7 años", "Añejo", false));
    bar.agregarBebida(new Ron(stock, 42, 300, 0.10, "Zacapa", "Guatemala", 
        "Zacapa 23", "Gran Reserva", true));
    bar.agregarBebida(new Ron(stock, 37, 180, 0.10, "Brugal", "R. Dominicana", 
        "Brugal XV", "Añejo", false));
    bar.agregarBebida(new Ron(stock, 35, 150, 0.10, "Appleton", "Jamaica", 
        "Appleton Signature", "Dorado", false));
    }
    {// Tequila
    bar.agregarBebida(new Tequila(stock, 38, 250, 0.05, "José Cuervo", 
        "México", "Tradicional", "Jalisco", "Plata", false));
    bar.agregarBebida(new Tequila(stock, 40, 300, 0.05, "Don Julio", 
        "México", "Don Julio Blanco", "Jalisco", "Blanco", true));
    bar.agregarBebida(new Tequila(stock, 38, 200, 0.05, "Cazadores", 
        "México", "Cazadores Reposado", "Arandas", "Reposado", false));
    bar.agregarBebida(new Tequila(stock, 42, 450, 0.05, "Herradura", 
        "México", "Herradura Ultra", "Amatitán", "Añejo", true));
    bar.agregarBebida(new Tequila(stock, 35, 180, 0.05, "Sauza", "México", 
        "Hornitos", "Tequila", "Reposado", false));
    }   
    {// Vodka
    bar.agregarBebida(new Vodka(stock, 40, 150, 0.03, "Absolut", "Suecia", 
        "Absolut Blue", "Natural", 3));
    bar.agregarBebida(new Vodka(stock, 40, 180, 0.03, "Smirnoff", "USA", 
        "Smirnoff Red", "Natural", 5));
    bar.agregarBebida(new Vodka(stock, 37, 160, 0.03, "Skyy", "USA", 
        "Skyy Vodka", "Natural", 4));
    bar.agregarBebida(new Vodka(stock, 40, 220, 0.03, "Belvedere", "Polonia", 
        "Belvedere Pure", "Premium", 6));
    bar.agregarBebida(new Vodka(stock, 40, 300, 0.03, "Grey Goose", "Francia", 
        "Grey Goose", "Ultra Premium", 7));
    }
    {// Whiskey
    bar.agregarBebida(new Whiskey(stock, 40, 350, 0.07, "Jack Daniels", 
        "USA", "Old No.7", 4, "Roble"));
    bar.agregarBebida(new Whiskey(stock, 42, 500, 0.07, "Chivas", 
        "Escocia", "Chivas 12", 12, "Roble Francés"));
    bar.agregarBebida(new Whiskey(stock, 45, 800, 0.07, "Macallan", 
        "Escocia", "Macallan 18", 18, "Sherry Oak"));
    bar.agregarBebida(new Whiskey(stock, 43, 200, 0.07, "Jim Beam", "USA", 
        "Jim Beam White", 4, "Bourbon"));
    bar.agregarBebida(new Whiskey(stock, 46, 1500, 0.07, "Yamazaki", "Japón", 
        "Yamazaki 25", 25, "Mizunara"));
    }
    {// Mezcal
    bar.agregarBebida(new Mezcal(stock, 45, 350, 0.05, "400 Conejos", 
        "México", "400 Conejos", "Espadín", false));
    bar.agregarBebida(new Mezcal(stock, 48, 500, 0.05, "Amores", "México", 
        "Mezcal Amores", "Tobalá", false));
    bar.agregarBebida(new Mezcal(stock, 50, 700, 0.05, "Montelobos", "México", 
        "Montelobos", "Cuishe", true));
    bar.agregarBebida(new Mezcal(stock, 52, 600, 0.05, "Ojo de Tigre", 
        "México", "Tigre", "Jabalí", false));
    bar.agregarBebida(new Mezcal(stock, 40, 300, 0.05, "Brujo", "México", 
        "Brujo", "Cenizo", false));
    }
    {// Vino
    bar.agregarBebida(new Vino(stock, 13, 200, 0.05, "Concha y Toro", "Chile", 
        "Casillero", "Merlot", 2019));
    bar.agregarBebida(new Vino(stock, 14, 250, 0.05, "La Cetto", "México", 
        "Nebiolo", "Nebiolo", 2018));
    bar.agregarBebida(new Vino(stock, 12.5, 300, 0.05, "Marqués", "España", 
        "Rioja", "Tempranillo", 2016));
    bar.agregarBebida(new Vino(stock, 13.2, 180, 0.05, "Gato Negro", "Chile", 
        "Cabernet", "Cabernet Sauvignon", 2020));
    bar.agregarBebida(new Vino(stock, 14.5, 400, 0.05, "Trapiche", 
        "Argentina", "Malbec", "Malbec", 2017));
    }

    int opcion = 0;

    while (true){

        cout << "\nBienvenido a " << bar.getNombre() << endl;
        cout << "Quien eres?" << endl;
        cout << "1. Administrador" << endl;
        cout << "2. Cliente" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch (opcion){

        case 1: {

            if (!login()) break;

            int option = 0;

            do {
                cout << "\n1. Ver inventario" << endl;
                cout << "2. Agregar bebida" << endl;
                cout << "3. Quitar bebida" << endl;
                cout << "4. Reabastacer bebida" << endl;
                cout << "5. Regresar" << endl;
                cin >> option;

                switch (option){

                case 1:
                    bar.mostrarInventario();
                    break;

                case 2: {
                    int tipo, loot, respuesta;
                    string marca, pais, nombre;
                    float porcentaje, precio, descuento;

                    cout << "si quieres agregar una bebida"
                    << " que ya está en stock presiona el no. 0"
                    << " y en el menu de admin teclea el no. 4" 
                    << "para agregar correctamente la bebida," 
                    << "sino, presiona cualquier boton cuando se te indique "
                    << endl;

                    cout << "ingresa solo numeros enteros porfa" << endl;
                    cin >> respuesta;
                    
                    if (respuesta == 0){
                        break;
                    }

                    cout << "\nTipos:\n1.Cerveza \n2.Ron \n3.Tequila" 
                    << "\n4.Vodka \n5.Whiskey \n6.Mezcal \n7.Vino \n";
                    cin >> tipo;

                    cout << "Marca: " << endl; 
                    getline(cin, marca);
                    cout << "País: " << endl;
                    getline(cin, pais);
                    cout << "Nombre: " << endl; 
                    getline(cin, nombre);
                    cout << "Alcohol %: " << endl; 
                    cin >> porcentaje;
                    cout << "Precio: " << endl; 
                    cin >> precio;
                    cout << "Descuento: " << endl; 
                    cin >> descuento;
                    cout << "Cantidad a agregar:" << endl;
                    cin >> loot;

                    switch (tipo){

                    case 1: { // cerveza
                        string tipo_cerveza; 
                        float ibu;
                        cout << "Tipo cerveza: " << endl; 
                        getline(cin, tipo_cerveza);
                        cout << "IBU: " << endl; 
                        cin >> ibu;
                        bar.agregarBebida(new Cerveza(loot, porcentaje, 
                            precio, descuento, marca, pais, nombre, 
                            tipo_cerveza, ibu));
                    } break;

                    case 2: { // ron
                        string estilo; 
                        bool especias;
                        cout << "Estilo: " << endl; 
                        cin >> estilo;
                        cout << "¿Especias? (1 = si 0 = no): " << endl; 
                        cin >> especias;
                        bar.agregarBebida(new Ron(loot, porcentaje, precio, 
                            descuento, marca, pais, nombre, estilo, 
                            especias));
                    } break;

                    case 3: { // Tequila
                        string region, categoria;
                        bool agave;
                        cout << "Region: " << endl; 
                        cin >> region;
                        cout << "Categoria: " << endl; 
                        cin >> categoria;
                        cout << "100'%' agave? (1 = si 0 = no): " << endl; 
                        cin >> agave;
                        bar.agregarBebida(new Tequila(loot, porcentaje, 
                            precio, descuento, marca, pais, nombre, region, 
                            categoria, agave));
                    } break;

                    case 4: { // vodka
                        string sabor; 
                        int dest;
                        cout << "Sabor: " << endl; 
                        getline(cin, sabor);
                        cout << "Destilaciones: " << endl; 
                        cin >> dest;
                        bar.agregarBebida(new Vodka(loot, porcentaje, precio, 
                            descuento, marca, pais, nombre, sabor, dest));
                    } break;

                    case 5: { // whiskey
                        int years; 
                        string barrica;
                        cout << "Años: " << endl; 
                        cin >> years;
                        cout << "Barrica: " << endl; 
                        getline(cin, barrica);
                        bar.agregarBebida(new Whiskey(loot, porcentaje, 
                            precio, descuento, marca, pais, nombre, years, 
                            barrica));
                    } break;

                    case 6: { // mezcal
                        string agave; 
                        bool gusano;
                        cout << "Tipo de agave: " << endl; 
                        cin >> agave;
                        cout << "Gusano? (1 = si 0 = no): " << endl; 
                        cin >> gusano;
                        bar.agregarBebida(new Mezcal(loot, porcentaje, precio, 
                            descuento, marca, pais, nombre, agave, gusano));
                    } break;

                    case 7: { // vino
                        string uva; 
                        int year;
                        cout << "Uva: " << endl; 
                        getline(cin, uva);
                        cout << "Año cosecha: " << endl; 
                        cin >> year;
                        bar.agregarBebida(new Vino(loot, porcentaje, precio, 
                            descuento, marca, pais, nombre, uva, year));
                    } break;

                    }
                } break;

                case 3: {
                    int borrar;
                    bar.mostrarInventario();
                    cout << "Ingresa el numero de la bebida que" 
                    << "quieres quitar" << endl;
                    cin >> borrar;
                    bar.quitarBebida(borrar);
                } break;

                case 4: {
                    int num, qty;
                    bar.mostrarInventario();
                    cout << "Que bebida quieres reestockear? " 
                    << "(escoge el numero)" << endl;
                    cin >> num;
                    cout << "Cuantas botellas agregaras? " << endl;
                    cin >> qty;
                    bar.agregarStock(num, qty);
                } break;

                case 5:
                    break;
                }

            } while (option != 5);

        } break;

        case 2: {

            string nombre;
            int edad;

            cout << "Tu nombre ";
            getline(cin, nombre);

            cout << "\nTu edad: ";
            cin >> edad;

            Cliente client(nombre, edad);

            int client_option = 0;

            do {
                cout << "Que quieres hacer? \n" << endl;
                cout << "1. Tomar bebida" << endl;
                cout << "2. Ver info" << endl;
                cout << "3. Regresar" << endl;
                cin >> client_option;

                switch (client_option){

                case 1: {
                    int beverage, shot_count;
                    cout << "Número de bebida: ";
                    cin >> beverage;
                    cout << "¿Cantidad de tragos?: ";
                    cin >> shot_count;
                    client.pedirBebida(bar, beverage, shot_count);
                } break;

                case 2:
                    client.mostrarInfo();
                    break;

                case 3:
                    break;

                }

            } while (client_option != 3);

        } break;

        case 3:
            cout << "Hasta luego, cuidate" << endl;
            return 0;

        }
    }

    return 0;
}

bool login(){

    string user, password;

    for (int i = 1; i <= 3; i++){

        cout << "Usuario: ";
        cin >> user;

        cout << "Contraseña: ";
        cin >> password;

        if (user == "Marcoflecha" && password == "TabernaMou123"){
            cout << "\nBienvenido " << user << endl;
            return true;
        }
        else {
            cout << "Usuario y/o contraseña incorrectos " 
                << (3 - i) << " intentos restantes" << endl;
        }
    }

    cout << "\nDemasiados intentos" << endl;
    return false;
}
