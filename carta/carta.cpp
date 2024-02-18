#include <iostream>
#include <vector>
#include <algorithm>
#include "carta.h"

// Función para imprimir una carta
void imprimirCarta(const Carta& carta) {
    std::cout << carta.valor << " de " << carta.palo << " ";
}

// Función para comparar dos cartas
bool compararCartas(const Carta& carta1, const Carta& carta2) {
    return carta1.valor == carta2.valor && carta1.palo == carta2.palo;
}

// Función para verificar si una carta es válida
bool esCartaValida(const Carta& carta) {
    char valores[] = {'T', 'J', 'Q', 'K', 'A'};
    char palos[] = {'C', 'D', 'H', 'S'}; // Corazones, Diamantes, Tréboles, Picas

    bool valorValido = std::find(std::begin(valores), std::end(valores), carta.valor) != std::end(valores);
    bool paloValido = std::find(std::begin(palos), std::end(palos), carta.palo) != std::end(palos);

    return valorValido && paloValido;
}
