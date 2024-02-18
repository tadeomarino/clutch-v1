#include <iostream>
#include "jugador.h"

void confirmarNombre(Jugador& jugador, const std::string& mensaje) {
    std::string respuesta;
    do {
        std::cout << mensaje;
        std::cin >> jugador.nombre;
        std::cout << "¿Confirmar nombre " << jugador.nombre << "? (S/N) ";
        std::cin >> respuesta;
    } while (respuesta != "S" && respuesta != "s");
}

