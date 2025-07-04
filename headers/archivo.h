#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include <vector>
#include <string>

// menos mal estamos haceindo esto
// filesystema funciona para mi, pero parece que para ti no funciona D:
// ignora Archivo.h de momento no lo vamos a usar

void exportar_inventario(const std::vector<std::string>& inventario) {
    std::ofstream archivo("Datos Guardados//inventario.txt");
    if (archivo.is_open()) {
        for (const auto& item : inventario) {
            archivo << item << std::endl;
        }
        archivo.close();
        std::cout << "Inventario exportado a inventario.txt" << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo para exportar el inventario." << std::endl;
    }
}
void leer_inventario(std::vector<std::string>& inventario) {
    std::ifstream archivo("Datos Guardados//inventario.txt");
    if (archivo.is_open()) {
        std::string linea;
        while (std::getline(archivo, linea)) {
            inventario.push_back(linea);
        }
        archivo.close();
        std::cout << "Inventario cargado desde inventario.txt" << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo para leer el inventario." << std::endl;
    }
}
#endif // archivo.h