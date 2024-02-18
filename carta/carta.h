#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <vector>
#include <algorithm>

// Representación de una carta
struct Carta {
    char valor;
    char palo;

    // Constructor que toma un valor y un palo
    Carta(char valor, char palo) : valor(valor), palo(palo) {}
};


// Función para imprimir una carta
void imprimirCarta(const Carta& carta);

// Función para comparar dos cartas
bool compararCartas(const Carta& carta1, const Carta& carta2);

// Función para verificar si una carta es válida
bool esCartaValida(const Carta& carta);

#endif // CARTA_H
