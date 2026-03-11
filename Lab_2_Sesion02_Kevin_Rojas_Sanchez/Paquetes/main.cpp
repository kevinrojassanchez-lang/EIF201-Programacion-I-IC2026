
#include <iostream>
#include "Paquetes.h"
int main() {
    int cantidad;
    double* registro = crearRegistro(cantidad);

    ingresarPesos(registro, cantidad);

    // 1. Definir el limite
    double limite = 10.0;

    // 2. LLAMAR 
    mostrarResultados(registro, cantidad, limite);

    // 3. Liberar memoria
    delete[] registro;
    registro = nullptr;

    return 0;
}