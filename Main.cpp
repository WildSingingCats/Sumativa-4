// Main.cpp
#include <iostream>                 // input/output (cout)
#include <string>                   // Variables de texto
#include <limits>                   // Para std::numeric_limits
#include <vector>                   // Vectores
#include <fstream>                  // Operaciones con archivos
#include "headers/utils.h"          // Utilidades
#include "headers/inventario.h"     // Inventario
#include "headers/menu.h"           // Todos los menus
#include "headers/factura.h"        // Facturacion
#include "headers/cliente.h"        // Informacion del cliente

//  TODO: Embellecimiento del codigo, agregar comentarios y documentacion.

//  TODO: hacer un sistema de facturacion con iva, el iva se calcula por cada producto individualy luego se suma (16%) 
//  TODO: "imprimir" la factura en un txt

//  por favor, documenten el codigo, es importante para que todos podamos entenderlo.
//  No vamos a usar Float, usamos Double ej: double Arepa 4.55 $ ;

//  Chuleta:    pause(); // pause desde utils.h
//              cls();   // Limpia cmd desde utils.h
//              ingresar_clave(clave); // funcion que solicita la clave de gerente
//              sleep(n); // pausa de "n" segundos para simular carga

int main (){
    std::string clave;
    std::string clave_gerente = "rasputin1234"; 
    int opcion_principal; // variable selector principal del menu
    int opcion_inventario; // variable selector del menu de inventario
    int opcion_configuraion; // variable selector del menu de items
    int opcion_factura; // variable selector del menu de facturacion

    std::vector<Item> inventario; // Declarar el inventario como un vector de Item


    do{ 
        cls();
        menu_principal();
        std::cin >> opcion_principal;
        cls();
        std::cout << "Cargando...\n\nPor Favor espere..." << std::endl;
        sleep(1);   // carga falsa de 1 segundo, es solo para mantener el flow del programa :D
        cls();                 
        switch(opcion_principal) {
            case 1:{ //ingresar o quitar items para facturar
                std::cout << "facturar" << std::endl; // placeholder, aqui iria la funcion de facturar
                break; 
            }
            case 2:{
                do{
                  cls();
                    menu_factura();
                   std::cin >> opcion_factura;
                    cls();
                    sleep(1);
                }while(opcion_factura != 0);
                break;    
            }
            case 3:{ // inventario ( solicita clave de administrador)
                cls();
                std::cout << "Ingrese la clave de administrador: ";
                ingresar_clave(clave); // funcion que valida la clave de gerente (solo para la clave esperada)
                cls();
                std::cout << "Validando...\n\nPor Favor espere..." << std::endl;    // falsa carga de 1 segundo
                sleep(1);   
                cls(); 
                if (clave == clave_gerente) {                                       // Se accede al inventario
                    std::cout << "Clave correcta. Acceso concedido." << std::endl;

                    do {
                        cls();
                        menu_inventario(); // muestra el menu de inventario
                        std::cin >> opcion_inventario;
                        cls();
                        switch(opcion_inventario) {

                            case 1: // agregar item al inventario
                                std::cout << "Agregando item al inventario..." << std::endl;
                                agregarItem(inventario); // funcion que agrega un item al inventario
                                sleep(1); // pausa para que el usuario pueda ver el mensaje
                                break; 

                            case 2: // quitar item del inventario

                                std::cout << "Quitando item del inventario..." << std::endl;
                                quitarItem(inventario); // funcion que quita un item del inventario
                                sleep(1); // pausa para que el usuario pueda ver el mensaje
                                break; 

                            case 3: // modificar item del inventario

                                std::cout << "Modificando item del inventario..." << std::endl;
                                modificarItem(inventario); // funcion que modifica un item del inventario
                                sleep(1); // pausa para que el usuario pueda ver el mensaje
                                break;

                            case 4: // mostrar inventario
                            
                                std::cout << "Mostrando inventario..." << std::endl;
                                leerInventario(); // funcion que muestra el inventario
                                sleep(1); // pausa para que el usuario pueda ver el mensaje
                                break;
                                
                            case 0: // Salir y guardar inventario
                                std::cout << "Guardando inventario y saliendo..." << std::endl;
                                sleep(1); // pausa para que el usuario pueda ver el mensaje
                                std::cout << "" << std::endl;
                                cls(); // limpia la pantalla
                                // TODO: agregar esportar a un inventario.txt
                                break; 
                            
                            default: // error
                                std::cout << "Opcion invalida, por favor intente de nuevo." << std::endl;
                                pause(); // pausa para que el usuario pueda ver el mensaje
                                break;
                        }
                    } while(opcion_inventario != 0); // cierra el do while del menu de inventario

                } else {
                    std::cout << "Clave incorrecta. Acceso denegado." << std::endl; 
                    std::cout << "Comuniquese con el Gerente..." << std::endl;
                    pause(); 
                    cls();  
                }
            }
            case 4:{ // condiguracion del programa, 
                     // de esto me encargo yo, es para cambiar contraseña y eos, pero si no nos da tempo no importa
                cls();
                std::cout << "Configuracion del programa" << std::endl;
                std::cout << "Esta opcion aun no esta implementada." << std::endl; // placeholder, aun no implementado
                pause(); // pausa para que el usuario pueda ver el mensaje
                cls(); // limpia la pantalla
            }
                break;
            case 0: // salida
                std::cout << "Saliendo del programa..." << std::endl;
                break; 

            default: // error

                std::cout << "Opcion invalida, por favor intente de nuevo." << std::endl;
                break;
        }
    }while(opcion_principal != 0); //cierra do while y los switch case

    return 0; // exit the program
}