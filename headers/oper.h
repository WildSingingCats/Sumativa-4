// File: headers/oper.h
#ifndef 
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
void mostrarInventario(const std::vector<Item>& inventario) {
    std::string nombre; // Variable para almacenar el nombre del item a buscar
    std::cout << "Ingrese el nombre del item a buscar: ";
    std::cin >> nombre;

    for (const auto& item : inventario) { // Iteramos sobre cada item en el vector
        if (item.nombre == nombre) {
            std::cout << "Item encontrado: "
                      << "Nombre: " << item.nombre
                      << ", Cantidad: " << item.cantidad
                      << ", Precio: " << item.precio << std::endl;
            return;
        }
    }
    std::cout << "Item no encontrado en el inventario." << std::endl;
}
// Función para pausar la ejecución del programa
void pause() { 
    std::cout << "Presione Enter para continuar...";
    std::cin.ignore(); //funcion 
    std::cin.get();
}   

// Funcion para facturar con el 16% de IVA
// Esta funcion recibe un vector de items y calcula el total de la factura, mostrando cada item
void facturar(const std::vector<Item>& inventario){
    double total = 0.0;
    std::cout << "Factura:" << std::endl; 
    for (const auto& item : inventario) {
        double subtotal = item.precio * item.cantidad;
        std::cout << "Item: " << item.nombre << ", Cantidad: " << item.cantidad << ", Precio: " << item.precio << ", Subtotal: " << subtotal << std::endl;
        total += subtotal; // Acumulamos el subtotal al total
    }
    std::cout << "Total: " << total << std::endl;
    double iva = total * 0.16; // Calculamos el IVA al 16%
    std::cout << "IVA (16%): " << iva << std::endl;
    std::cout << "Total con IVA: " << total + iva << std::endl;
}


#endif // OPER_H