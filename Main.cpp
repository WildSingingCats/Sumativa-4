#include <iostream> // for input/output operations
#include <string> // for string operations
#include <thread> // for sleep functionality
#include <chrono>  // for sleep functionality
#include <limits> // for std::numeric_limits
#include "headers/utils.h" //utilities header
#include "headers/oper.h"  //operations header
#include "headers/menu.h" //menu's header

//  TODO: Gestion de inventario, agregar y quitar items, poder modificar libremente.
//  TODO: hacer un sistema de facturacion con iva, el iva se calcula por cada producto individualy luego se suma (16%) 
//  TODO: "imprimir" la factura en un txt.
//  Faltan algunas cosas pero esta es la base principal del programa, muy probablemente necesitemos arrays.
//  Podemos agregar mas cosas, pero esto es lo mas basico de momento, son libres de sugerir :)

//  por favor, documenten el codigo, es importante para que todos podamos entenderlo.

//  Chuleta:    pause(); // pause desde utils.h
//              cls();   // Limpia cmd desde utils.h

// estos son placeholders nada completo todavia

int main (){
    const std::string clave_gerente = "rasputin1234"; 
    std::string clave;
    int opcionP = 0; // variable selector principal del menu
    int opcionI = 0; // variable selector del menu de inventario

    do{ 

        menu_inicio();
        menu_principal();
        menu_final();
        cin >> opcionP;
        cls();
        std::cout << "Cargando...\n\nPor Favor espere..." << std::endl;
        sleep(1);   // carga falsa de 1 segundo, es solo para mantener el flow del programa :D
        cls();      // clear the console screen                   
        switch(opcionP) {
            case 1: // ingresar o quitar(clave) items para facturar

                std::cout << "facturar" << std::endl; // placeholder, aqui iria la funcion de facturar
                break; 

            case 2: // facturar (calcular iva y suma final)

                std::cout << "inventario" << std::endl;
                break; 

            case 3: // inventario (clave de administrador)
                cls();
                validar_clave(clave_gerente, clave); // funcion que valida la clave de gerente
                cls();
                std::cout << "Validando...\n\nPor Favor espere..." << std::endl;    // falsa carga de 1 segundo
                sleep(1);                                                           // carga falsa de 1 segundo, es solo para mantener el flow del programa :D     
                cls();
                if (clave == clave_gerente) {                                       // Se accede al inventario
                    std::cout << "Clave correcta. Acceso concedido." << std::endl;
                    // funcion de inventario, que se encargara de mostrar el inventario y permitir agregar o quitar items

                } else {
                    std::cout << "Clave incorrecta. Acceso denegado." << std::endl;
                    std::cout << "Comuniquese con el Gerente..." << std::endl;
                    pause(); 
                    cls();  
                }

                break;

            case 0: // salida
                std::cout << "Saliendo del programa..." << std::endl;
                break; 

            default: // error

                std::cout << "Opcion invalida, por favor intente de nuevo." << std::endl;
        }
        }while(opcionP != 0); // Call the main menu function until the user chooses to exit

    return 0; // exit the program
}