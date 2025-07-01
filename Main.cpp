#include <iostream>
#include <thread>
#include <chrono>
#include "headers/utils.h" //utilities header
#include "headers/oper.h"  //operations header
#include "headers/menus.h" //menus header

using namespace std;
//  TODO: Menus.h :D
//  TODO: Gestion de inventario, agregar y quitar items, porder modificar libremente.
//  TODO: modificar inventario a traver de contraseña (investigar), comtraseña de administrador.
//  TODO: hacer un sistema de facturacion con iva, el iva se calcula por cada producto individualy luego se suma (16%) 
//  TODO: "imprimir" la factura en un txt.
//  Faltan algunas cosas pero esta es la base principal del programa, muy probablemente necesitemos arrays.
//  Podemos agregar mas cosas, pero esto es lo mas basico de momento, son libres de sugerir :)
//  ATT: Angelo Satalino
//  De momento no he hecho nada, pero aqui estamos jajaja
//  por favor, documenten el codigo, es importante para que todos podamos entenderlo.
//  Tambien coloque el projecto en github, por si quieren ver el codigo desde ahi.
//  https://github.com/WildSingingCats/Sumativa-4
//  escribanme por WS, dandome su usario de github, para agregarlos al proyecto. :D

//  Chuleta:    pause(); // pause desde utils.h
//              cls();   // Limpia cmd desde utils.h

// estos son placeholders nada completo todavia, pero es un buen comienzo
int main (){
    int opcion_principal = 0;
    do{ 
        cin >> opcion_principal;
        cls();
        std::cout << "cargando..." << std::endl; // Print loading message
        std::this_thread::sleep_for(std::chrono::seconds(3));
        menu_inicio():
        menu1();
        menu_final();
        
        switch(opcion_principal()) { // Call the main menu function
            case 1: // If the user chooses option 1
                operacion(); // Call the operation function
                break; // Exit the switch statement
            case 2: // If the user chooses option 2
                inventario(); // Call the inventory function
                break; // Exit the switch statement
            case 3: // If the user chooses option 3
                factura(); // Call the invoice function
                break; // Exit the switch statement
            case 0: // If the user chooses to exit
                cout << "Saliendo del programa..." << endl; // Print exit message
                break; // Exit the switch statement
            default: // If the user enters an invalid option
                cout << "Opcion invalida, por favor intente de nuevo." << endl; // Print error message
        }
    }while(opcion_principal() != 0); // Call the main menu function until the user chooses to exit
}