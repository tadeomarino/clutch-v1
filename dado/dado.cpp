#include "dado.h"
#include <cstdlib>  // Para std::rand y std::srand
#include <ctime>    // Para std::time

int tirarDado() {
    // Inicializamos la semilla del generador de números aleatorios
    std::srand(std::time(0));

    // Generamos un número aleatorio entre 1 y 6
    int resultado = std::rand() % 6 + 1;

    return resultado;
}
