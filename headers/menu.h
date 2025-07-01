// File: headers/menu.h
#ifndef MENU_H
#define MENU_H
using namespace std;
#include <iostream>

void menu_inicio (){
    cout << "<-----------------------Menu----------------------->\n";
}
void menu_final (){
    cout << "<-------------------------------------------------->\n";
} 
void menu_principal (){
    cout << "1.- < Ingresar-O-Quitar-items-para-facturar        >\n";
    cout << "2.- < Facturar                                     >\n";                            
    cout << "3.- < Inventario-(requiere-clave-de-supervisor)    >\n";
    cout << "0.- < Cerrar el Programa                           >\n";
}
void menu_inventario (){
    cout << "a \n";
    cout << "a \n";
    cout << "a \n";
}
void menu_items (){
    cout << "b \n";
    cout << "b \n";
    cout << "b \n";
}
#endif // MENU_H