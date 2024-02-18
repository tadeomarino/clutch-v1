#ifndef JUEGO_H
#define JUEGO_H

#include "../jugador/jugador.h" // Incluye el archivo de cabecera de Jugador
#include "../carta/carta.h" // Incluye el archivo de cabecera de Carta

void imprimirCorral(const Jugador& jugador);
// Función para imprimir la información del juego
void imprimirInformacion(int ronda, Jugador& jugador1, Jugador& jugador2, int tirada);

#endif // JUEGO_H
