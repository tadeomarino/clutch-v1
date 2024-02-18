#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include <vector>
#include "../carta/carta.h" // Incluye el archivo de cabecera de Carta

// Representación de un jugador
struct Jugador {
    std::string nombre;
    std::vector<Carta> corral; // Este es el corral del jugador
};

// Función para confirmar el nombre de un jugador
void confirmarNombre(Jugador& jugador, const std::string& mensaje);

#endif // JUGADOR_H
