// File: headers/menu.h
#ifndef MENU_H
#define MENU_H
using namespace std;
#include <iostream>

 
inline void menu_principal (){                                          //MENU PRINCIPAL
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<                MENU PRINCIPAL                |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<                                              |\n";
    cout << "| 1 >-< Cuenta Cliente                               |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 2 >-< Facturar                                     |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 3 >-< Inventario (Requiere clave)                  |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 4 >-< Configuracion (Requiere Clave)               |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "| 0 >-< Salir                                        |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|--->-< Por favor, ingrese una opcion: ";
}
void menu_inventario (){                                                //MENU INVENTARIO   
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<               MENU INVENTARIO                |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<                                              |\n";
    cout << "| 1 >-< Agregar                                      |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 2 >-< Eliminar                                     |\n";
    cout << "|   >-<                                              |\n";                            
    cout << "| 3 >-< Modificar Inventario                         |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 4 >-< Mostrar Inventario                           |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "| 0 >-< Salir y guardar                              |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|--->-< Por favor, ingrese una opcion: ";
}
void menu_factura (){
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<                 MENU FACTURA                 |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<                                              |\n";
    cout << "| 1 >-< Agregar a cuenta                             |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 2 >-< Eliminar de cuenta                           |\n";
    cout << "|   >-<                                              |\n";                            
    cout << "| 3 >-< Mostrar factura                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "| 0 >-< Facturar y exportar                          |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|--->-< Por favor, ingrese una opcion: ";
}
void menu_configuracion (){                                      //MENU CONFIGURACION

    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<            MENU CONFIGURACION                |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|   >-<                                              |\n";
    cout << "| 1 >-< Cambiar clave                                |\n";
    cout << "|   >-<                                              |\n";
    cout << "| 2 >-< Manual de usuario                            |\n";
    cout << "|   >-<                                              |\n";                            
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|   >-<                                              |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "| 0 >-< Salir                                        |\n";
    cout << "|--->-<----------------------------------------------|\n";
    cout << "|--->-< Por favor, ingrese una opcion: ";
}
void manual_usuario (){                                      //MENU MANUAL DE USUARIO
// ejemplo, aqui van los easter eggs :D    
// super innecesario pero ya que estamos 
    cout << "|--->-<----------------------------------------------|\n";
}
#endif // MENU_H

