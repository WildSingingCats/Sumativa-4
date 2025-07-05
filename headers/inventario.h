// File: headers/oper.h
#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>

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

void agregarItem(std::vector<Item>& inventario) { // unificacion de agregar item y exportar a txt
    Item nuevoItem;

    std::cout << "Ingrese el codigo del item: ";
    std::cin >> nuevoItem.codigo;

    std::cout << "Ingrese el nombre del item: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, nuevoItem.nombre); // mejor usar getline, lee la linea completa, includi espacios

    std::cout << "Ingrese la cantidad: ";
    std::cin >> nuevoItem.cantidad;

    std::cout << "Ingrese el precio: ";
    std::cin >> nuevoItem.precio;

    inventario.push_back(nuevoItem);
    std::cout << "Item agregado al inventario." << std::endl;

    // Abrimos el archivo en modo append para agregar al final sin borrar
    std::ofstream archivo("Datos Guardados/inventario.txt", std::ios::app);
    if (archivo.is_open()) {
        archivo << "Código: " << nuevoItem.codigo << ", "
                << "Nombre: " << nuevoItem.nombre << ", "
                << "Cantidad: " << nuevoItem.cantidad << ", "
                << "Precio: " << nuevoItem.precio << std::endl;
        archivo.close();
        std::cout << "Item exportado a inventario.txt" << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo para guardar el item." << std::endl;
    }
}
void leerInventario() {
    std::ifstream archivo("Datos Guardados/inventario.txt");

    if (archivo.is_open()) {
        std::string linea;
        bool hayContenido = false;

        std::cout << "\nInventario cargado desde inventario.txt:\n";
        std::cout << "-------------------------------------------\n";
        while (std::getline(archivo, linea)) {
            std::cout << linea << std::endl;
            hayContenido = true;
        }
        archivo.close();
        if (!hayContenido) {
            std::cout << "El archivo está vacío.\n";
        }

    } else {
        std::cerr << "Error al abrir el archivo. Verifica que existe la carpeta 'Datos Guardados' y el archivo 'inventario.txt'.\n";
    }
}
// Función para quitar un item del inventario
void quitarItem(std::vector<Item>& inventario) {
    int codigo;
    std::cout << "Ingrese el codigo del item a quitar: ";
    std::cin >> codigo;

    for (auto it = inventario.begin(); it != inventario.end(); ++it) {
        if (it->codigo == codigo) {
            inventario.erase(it);
            std::cout << "Item quitado del inventario." << std::endl;

            // Actualizar el archivo eliminando el item
            std::ifstream archivo_in("Datos Guardados/inventario.txt");
            std::ofstream archivo_out("Datos Guardados/inventario_tmp.txt");
            std::string linea;
            std::string codigo_str = "Código: " + std::to_string(codigo) + ", ";

            if (archivo_in.is_open() && archivo_out.is_open()) {
                while (std::getline(archivo_in, linea)) {
                    if (linea.find(codigo_str) != 0) { // Si la línea no empieza con el código, la copiamos
                        archivo_out << linea << std::endl;
                    }
                }
                archivo_in.close();
                archivo_out.close();
                std::remove("Datos Guardados/inventario.txt");
                std::rename("Datos Guardados/inventario_tmp.txt", "Datos Guardados/inventario.txt");
            } else {
                std::cerr << "Error al actualizar el archivo de inventario." << std::endl;
            }
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
void modificarItem(std::vector<Item>& inventario) {
    int codigo;
    std::cout << "Ingrese el codigo del item a modificar: ";
    std::cin >> codigo;

    for (auto& item : inventario) {
        if (item.codigo == codigo) {
            std::cout << "Ingrese la nueva cantidad: ";
            std::cin >> item.cantidad;
            std::cout << "Ingrese el nuevo precio: ";
            std::cin >> item.precio;
            std::cout << "Item modificado." << std::endl;

            // Actualizar el archivo inventario.txt
            std::ifstream archivo_in("Datos Guardados/inventario.txt");
            std::ofstream archivo_out("Datos Guardados/inventario_tmp.txt");
            std::string linea;
            std::string codigo_str = "Código: " + std::to_string(codigo) + ", ";

            if (archivo_in.is_open() && archivo_out.is_open()) {
                while (std::getline(archivo_in, linea)) {
                    if (linea.find(codigo_str) == 0) {
                        // Escribimos la línea modificada
                        archivo_out << "Código: " << item.codigo << ", "
                                    << "Nombre: " << item.nombre << ", "
                                    << "Cantidad: " << item.cantidad << ", "
                                    << "Precio: " << item.precio << std::endl;
                    } else {
                        archivo_out << linea << std::endl;
                    }
                }
                archivo_in.close();
                archivo_out.close();
                std::remove("Datos Guardados/inventario.txt");
                std::rename("Datos Guardados/inventario_tmp.txt", "Datos Guardados/inventario.txt");
            } else {
                std::cerr << "Error al actualizar el archivo de inventario." << std::endl;
            }
            return;
        }
    }
    std::cout << "Item no encontrado en el inventario." << std::endl;
}
// listo :D
#endif // INVENTARIO_H