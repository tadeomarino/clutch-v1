#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "mazo.h"

// Función para inicializar el mazo de cartas
std::vector<Carta> inicializarMazo() {
    std::vector<Carta> mazo;
    char valores[] = {'T', 'J', 'Q', 'K', 'A'};
    char palos[] = {'C', 'D', 'H', 'S'}; // Corazones, Diamantes, Tréboles, Picas

    for (char valor : valores) {
        for (char palo : palos) {
            mazo.push_back({valor, palo});
        }
    }

    // Mezclar el mazo
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(mazo.begin(), mazo.end(), std::default_random_engine(seed));

    return mazo;
}

// Función para mezclar el mazo de cartas
void mezclarMazo(std::vector<Carta>& mazo) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(mazo.begin(), mazo.end(), std::default_random_engine(seed));
}

// Función para robar una carta del mazo
Carta robarCarta(std::vector<Carta>& mazo) {
    Carta cartaRobada = mazo.back();
    mazo.pop_back();
    return cartaRobada;
}