#ifndef MAZO_H
#define MAZO_H

#include <vector>
#include "../carta/carta.h"

// Función para inicializar el mazo de cartas
std::vector<Carta> inicializarMazo();

// Función para mezclar el mazo de cartas
void mezclarMazo(std::vector<Carta>& mazo);

// Función para robar una carta del mazo
Carta robarCarta(std::vector<Carta>& mazo);

#endif // MAZO_H
