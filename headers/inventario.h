// File: headers/oper.h
#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <iostream>
#include <string>
#include <vector>

// Este archivo contiene la definición de las funciones para manejar un inventario "simple"

// Estructura para un item del inventario
struct Item {
    std::string nombre;
    int codigo;
    int cantidad;
    double precio;
};

// Vector para almacenar los items del inventario
std::vector<Item> inventario;
// Función para agregar un item al inventario
// vector
void agregarItem(std::vector<Item>& inventario){ // Declaramos la funcion que recibe un vector de items
    Item nuevoItem;                              // Creamos un nuevo item
    std::cout << "Ingrese el codigo del item: ";
    std::cin >> nuevoItem.codigo; 
    std::cout << "Ingrese el nombre del item: "; 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpiamos el buffer de entrada para evitar problemas con getline
    std::cin >> nuevoItem.nombre;                                       // Yo logre hacer un inventario, pero sin limpiar buffer
    std::cout << "Ingrese la cantidad: ";                               // explota
    std::cin >> nuevoItem.cantidad;
    std::cout << "Ingrese el precio: ";
    std::cin >> nuevoItem.precio;

    inventario.push_back(nuevoItem);                                    // Usamos push_back para agregar el item al final del vector
    std::cout << "Item agregado al inventario." << std::endl;
}

// Función para quitar un item del inventario
void quitarItem(std::vector<Item>& inventario) { // Declaramos la funcion que recibe un vector de items
    int codigo;                                  // Variable para almacenar el nombre del item a quitar
    std::cout << "Ingrese el codigo del item a quitar: ";
    std::cin >> codigo;

    for (auto it = inventario.begin(); it != inventario.end(); ++it) {
        if (it->codigo == codigo) {
            inventario.erase(it);
            std::cout << "Item quitado del inventario." << std::endl;
            return;
        }
    }
    std::cout << "Item no encontrado en el inventario." << std::endl;
}
// Función para mostrar el inventario
void mostrarInventario(const std::vector<Item>& inventario) { // Declaramos la funcion que recibe un vector de items
    std::cout << "Inventario:" << std::endl;  
    for (const auto& item : inventario) {                     // Iteramos sobre cada item en el vector
        std::cout << "Codigo: " << item.codigo
                  << ", Nombre: " << item.nombre
                  << ", Cantidad: " << item.cantidad
                  << ", Precio: " << item.precio << std::endl;
    }
}
// Función para modificar un item del inventario
void modificarItem(std::vector<Item>& inventario) { // Declaramos la funcion que recibe un vector de items
    int codigo;                                     // Variable para almacenar el nombre del item a modificar
    std::cout << "Ingrese el codigo del item a modificar: ";
    std::cin >> codigo;

    for (auto& item : inventario) {  // Iteramos sobre cada item en el vector
        if (item.codigo == codigo) { // innecesario cambiar nomvre a item, por eso elimine
            std::cout << "Ingrese la nueva cantidad: ";
            std::cin >> item.cantidad;
            std::cout << "Ingrese el nuevo precio: ";
            std::cin >> item.precio;
            std::cout << "Item modificado." << std::endl;
            return;
        }
    }
    std::cout << "Item no encontrado en el inventario." << std::endl;   
} 
// listo :D
#endif // INVENTARIO_H