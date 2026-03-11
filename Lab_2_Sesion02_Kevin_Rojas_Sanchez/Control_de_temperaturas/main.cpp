#include <iostream>
#include "temperatura.h"
int main()
{
    int cantidadDias = 0;

    // 1. crear arreglo dinamico
    double* registroTemp = crearRegistro(cantidadDias);

    // 2. Llenar con datos del usuario
    ingresarTemperaturas(registroTemp, cantidadDias);

    //3 . Mostrar resultados
    mostrarResultados(registroTemp, cantidadDias);

    //4. Liberar memoria
    delete[] registroTemp;
    registroTemp = nullptr;

    return 0;

    
}


