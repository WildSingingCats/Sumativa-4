// File: headers/menu.h
#ifndef MENU_H
#define MENU_H
using namespace std;
#include <iostream>

 
void menu_principal (){
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<               MENU PRINCIPAL                 |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<                                              |\n";
    cout << "| 1 >-< Ingresar-O-Quitar-items-para-facturar        |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 2 >-< Facturar                                     |\n";
    cout << "|   >-<                                              |\n";                            
    cout << "| 3 >-< Inventario (Requiere clave de Gerente)       |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 0 >-< Cerrar el Programa                           |\n";
    cout << "|   >-<                                              |\n";
    cout << "|--->-<----------------------------------------------|\n";
}
void menu_inventario (){
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<               MENU INVENTARIO                |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<                                              |\n";
    cout << "| 1 >-< Agregar item al inventario                   |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 2 >-< Eliminar item del inventario                 |\n";
    cout << "|   >-<                                              |\n";                         
    cout << "| 3 >-< Mostrar Inventario                           |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 0 >-< Volver al menu principal                     |\n";
    cout << "|   >-<                                              |\n";
    cout << "|--->-<----------------------------------------------|\n";
}
void menu_items (){
    cout << "b \n";
    cout << "b \n";
    cout << "b \n";
}


#endif // MENU_H