#include <iostream>
#include "./jugador/jugador.h"
#include "./menu/menu.h"
#include "./juego/juego.h"
#include "./carta/carta.h"
#include "./dado/dado.h"
#include "./mazo/mazo.h"

// Definimos la función principal del programa
int main()
{
        // Creamos dos instancias de la estructura Jugador
        Jugador jugador1, jugador2;
    
    // Declaramos una variable para almacenar la opción seleccionada por el usuario
    int opcion;
    // Iniciamos un bucle que se ejecuta mientras la opción seleccionada no sea 0 (SALIR)
    do
    {
        // Mostramos el menú
        mostrarMenu();
        // Solicitamos al usuario que elija una opción
        std::cout << "Elige una opción: ";
        // Almacenamos la opción seleccionada en la variable opcion
        std::cin >> opcion;

        // Ejecutamos diferentes acciones dependiendo de la opción seleccionada
        switch (opcion)
        {
        case 1: // Si la opción es 1 (JUGAR)
            {
            
            // Solicitamos a los jugadores que ingresen y confirmen sus nombres
            confirmarNombre(jugador1, "\nNombre Jugador 1: ");
            confirmarNombre(jugador2, "\nNombre Jugador 2: ");
            
            // Inicializar el mazo de cartas
            std::vector<Carta> mazo = inicializarMazo();

            // Crear los corrales para cada jugador
            std::vector<Carta> corralJugador1;
            std::vector<Carta> corralJugador2;

            // Repartir las cartas a cada jugador
            for (int i = 0; i < 5; ++i) {
            corralJugador1.push_back(robarCarta(mazo));
            corralJugador2.push_back(robarCarta(mazo));
    }
            // Por ejemplo, podrías hacer algo como esto:
            int ronda = 1; // Supongamos que estamos en la ronda 1
            int tirada = tirarDado();
            imprimirInformacion(ronda, jugador1, jugador2, tirada);
            break;
            }
        case 2: // Si la opción es 2 (ESTADÍSTICAS)
            // Imprimimos un mensaje indicando que la opción ESTADÍSTICAS aún no está implementada
            std::cout << "Has seleccionado ESTADÍSTICAS. Esta opción aún no está implementada.\n";
            break;
        case 3: // Si la opción es 3 (CRÉDITOS)
            // Imprimimos un mensaje indicando que la opción CRÉDITOS aún no está implementada
            std::cout << "Has seleccionado CRÉDITOS. Esta opción aún no está implementada.\n";
            break;
        case 0: // Si la opción es 0 (SALIR)
            // Imprimimos un mensaje de despedida
            std::cout << "¡Hasta luego!\n";
            break;
        default: // Si la opción no es ninguna de las anteriores
            // Imprimimos un mensaje indicando que la opción no es válida
            std::cout << "Opción no válida. Por favor, elige una opción del menú.\n";
            break;
        }
        // El bucle se repite mientras la opción seleccionada no sea 0 (SALIR)
    } while (opcion != 0);

    // La función principal devuelve 0 para indicar que el programa se ha ejecutado correctamente
    return 0;
}