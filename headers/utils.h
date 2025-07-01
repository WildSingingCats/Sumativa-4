//file: headers/utils.h
#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
// Utilidades para el programa
// Aqui se pueden definir funciones utilitarias que se utilizaran en el programa:

inline void pause() {
    // Esta funcion pausa la ejecucion del programa y espera a que el usuario presione Enter.
    std::cout << "Presiona Enter para continuar..." << std::endl;
    std::cin.ignore();
}
inline void cls() {
    // Esta funcion limpia la pantalla de la consola.
    // En sistemas Unix/Linux, se puede usar "clear", en Windows "cls".
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
inline void sleep(int seconds) {
    // Esta funcion pausa la ejecucion del programa por un numero de segundos especificado.
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}
inline void ingresar_clave (std::string clave) {
                // Esta funcion valida la clave de gerente ingresada por el usuario.
                std::cout << "Ingrese la clave de Gerente: ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpiar el buffer antes de getline, si no, explota
                std::getline(std::cin, clave );
}
#endif // UTILS_H