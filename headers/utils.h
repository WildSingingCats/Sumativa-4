#include <iostream>
#ifndef UTILS_H
#define UTILS_H
// Utilidades para el programa
// Aqui se pueden definir funciones utilitarias que se utilizaran en el programa, como por ejemplo:
// una funcion para pausar la ejecucion del programa y esperar a que el usuario presione Enter.
// Por ejemplo:

inline void pause() {
    // Esta funcion pausa la ejecucion del programa y espera a que el usuario presione Enter.
    std::cout << "Presiona Enter para continuar..." << std::endl;
    std::cin.ignore();
    std::cin.get();
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
#endif // UTILS_H