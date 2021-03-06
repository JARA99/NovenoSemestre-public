/* 
 * clase02.cpp: Programa para mostrar el uso de la
 * clase persona.
 * 
 * Ejemplo para la parte III del curso introductorio
 * de ROOT.
 * 
 * Hector Perez, abril 2020
 * 
 */

#include <cstdlib>
#include <iostream>
#include "persona.hpp"

using namespace std;

/* Programa para mostrar el uso de la clase persona. 
 * Se crean instancia y llaman metodos para experimentar
 * que pasa. */
int main()
{
    persona Fulano;

    Fulano.Decir_Nombre();
    Fulano.Decir_origen();
    Fulano.Decir_edad();

    std::cout << Fulano.Obtener_DPI() << std::endl;
    std::cout << Fulano.Obtener_Anio_Nacimiento() << std::endl;
    std::cout << Fulano.Obtener_Mes_Nacimiento() << std::endl;
    std::cout << Fulano.Obtener_Dia_Nacimiento() << std::endl;
    std::cout << Fulano.Obtener_Lugar_Origen() << std::endl;

    persona Juan("Juan Perez", 1980, 7, 2, "Capital");
    
    Juan.Decir_Nombre();
    Juan.Decir_origen();
    Juan.Decir_edad();
    Juan.Asignar_DPI("1980130130101");

    std::cout << Juan.Obtener_DPI() << std::endl;
    std::cout << Juan.Obtener_Anio_Nacimiento() << std::endl;
    std::cout << Juan.Obtener_Mes_Nacimiento() << std::endl;
    std::cout << Juan.Obtener_Dia_Nacimiento() << std::endl;
    std::cout << Juan.Obtener_Lugar_Origen() << std::endl;

    persona* Maria = new persona("Maria Gomez", 1990, 12, 3, "Zacapa");

    persona::LLamar_Todos();

    delete Maria;

    persona::LLamar_Todos();

    return 0;
}