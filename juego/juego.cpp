#include <iostream>
#include "juego.h"
#include "../carta/carta.h"

void imprimirCorral(const Jugador& jugador) {
    std::cout << "Corral: ";
    for (const Carta& carta : jugador.corral) {
        imprimirCarta(carta);
    }
    std::cout << std::endl;
}

void imprimirInformacion(int ronda, Jugador& jugador1, Jugador& jugador2, int tirada) {
    std::cout << "-----------------------\n";
    std::cout << " CLUTCH                " << std::endl;
    std::cout << "-----------------------\n";
    std::cout << "RONDA #" << ronda << std::endl;
    std::cout << jugador1.nombre << " vs " << jugador2.nombre << std::endl << std::endl;
    std::cout << "TURNO DE " << jugador1.nombre << std::endl;
    std::cout << "+-----------------------+\n";
    std::cout << "|" << jugador1.nombre << "|" << std::endl;
    imprimirCorral(jugador1);
    std::cout << jugador2.nombre << std::endl;
    imprimirCorral(jugador2);
    std::cout << "| Tirada de dado: " << tirada << std::endl;
    std::cout << "+-----------------------+\n";
}

