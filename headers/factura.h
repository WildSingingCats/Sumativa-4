// file: headers/factura.h
#ifndef FACTURA_H
#define FACTURA_H

#include <iostream>     // Para entrada/salida estándar
#include <string>       // Para manejar cadenas de texto
#include <vector>       // Para manejar colecciones de items
#include <fstream>      // Para manejar archivos
#include <iomanip>      // Para formatear la salida (por ejemplo, para mostrar precios con dos decimales)
#include <algorithm>    // Para usar funciones como std::remove_if
#include "inventario.h" 
// factura.h esta dentro de header, por lo que no es necesario incluir el folder de headers
// Aseguramos que el inventario.h este incluido para usar los items

using namespace std;

// todas las operaciones de factura
// Calculo de cuenta, Agregar productos, eliminar productos, generar factura, etc. 

// (16% IVA incluido), El iva se calcula por cada producto individualy luego se suma

// Eliminar solicita confirmacion de usuario
// Generar factura, imprime la factura en pantalla y solicita confirmacion de usuario para eliminar productos
// La factura es exportada a un archivo de texto con el nombre "factura.txt"

//                  :IMPORTANTE:
// *
// codigo temporalmente generado por copilot necesita ajustes 

double calcular_iva(double precio) {
    const double IVA = 0.16; // 16% IVA
    return precio * IVA;
}

void agegar_producto(vector<Item>& items, const Item& nuevo_item) {
    items.push_back(nuevo_item);
    cout << "Producto agregado correctamente.\n";
}

void eliminar_producto(vector<Item>& items, const string& nombre_producto) {
    auto it = std::remove_if(items.begin(), items.end(), [&](const Item& item) {
        return item.nombre == nombre_producto;
    });

    if (it != items.end()) {
        items.erase(it, items.end());
        cout << "Producto eliminado correctamente.\n";
    } else {
        cout << "Producto no encontrado.\n";
    }
}

void generar_factura(const vector<Item>& items) {
    ofstream factura("Datos Guardados//factura.txt");
    if (!factura.is_open()) {
        cout << "Error al abrir el archivo de factura.\n";
        return;
    }

    factura << "Factura\n";
    factura << "---------------------------------\n";
    double total = 0.0;

    for (const auto& item : items) {
        double iva = calcular_iva(item.precio);
        double precio_final = item.precio + iva;
        total += precio_final;

        factura << fixed << setprecision(2);
        factura << item.nombre << " - Precio: $" << item.precio
                << " - IVA: $" << iva
                << " - Precio Final: $" << precio_final << "\n";
    }

    factura << "---------------------------------\n";
    factura << "Total a pagar: $" << total << "\n";
    factura.close();

    cout << "Factura generada correctamente en 'factura.txt'.\n";
}

void ejemplo (int a){
    cout << "Factura generada correctamente.\n";
}

#endif // FACTURA_H