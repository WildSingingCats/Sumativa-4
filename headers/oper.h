// File: headers/oper.h
#ifndef OPER_H
#define OPER_H
#include <iostream>
#include <string>
#include <vector>

// Operaciones para el programa
// Aqui se pueden definir las operaciones que se realizaran en el programa, como agregar, quitar, modificar items del inventario, etc.
// Por ejemplo:

// Estructura para un item del inventario
struct Item {
    std::string nombre;
    int cantidad;
    double precio;
};

// Vector para almacenar los items del inventario
std::vector<Item> inventario;
// Función para agregar un item al inventario
// vector
void agregarItem(std::vector<Item>& inventario){ //declaramos la funcion que recibe un vector de items
    Item nuevoItem; // Creamos un nuevo item
    std::cout << "Ingrese el nombre del item: "; 
    std::cin >> nuevoItem.nombre; 
    std::cout << "Ingrese la cantidad: ";
    std::cin >> nuevoItem.cantidad;
    std::cout << "Ingrese el precio: ";
    std::cin >> nuevoItem.precio;

    inventario.push_back(nuevoItem); // Usamos push_back para agregar el item al final del vector
    std::cout << "Item agregado al inventario." << std::endl;
}

// Función para quitar un item del inventario
void quitarItem(std::vector<Item>& inventario) { // Declaramos la funcion que recibe un vector de items
    std::string nombre;                          // Variable para almacenar el nombre del item a quitar
    std::cout << "Ingrese el nombre del item a quitar: ";
    std::cin >> nombre;

    for (auto it = inventario.begin(); it != inventario.end(); ++it) {
        if (it->nombre == nombre) {
            inventario.erase(it);
            std::cout << "Item quitado del inventario." << std::endl;
            return;
        }
    }
    std::cout << "Item no encontrado en el inventario." << std::endl;
}
// Función para mostrar el inventario
   
#endif // OPER_H