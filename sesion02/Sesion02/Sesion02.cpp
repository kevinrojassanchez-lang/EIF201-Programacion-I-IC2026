#include <iostream>
#include "Estadistica.h"

int main()
{
    int numeros[MAX];
    int cantidad;

        std::cout << "Cuantos numeros desea ingresar? (maximo" << MAX << "): ";
        std::cin >> cantidad;

        while (cantidad <= 0 || cantidad > MAX)
        {
            std::cout << "Cantidad invalida. Ingrese nuevamente: ";
            std::cin >> cantidad;
        }
     
    llenarArreglo(numeros, cantidad);
    encontrarMayor(numeros, cantidad);
    encontrarMenor(numeros, cantidad);
    calcularSuma(numeros, cantidad);
    calcularPromedio(numeros, cantidad);

    std::cout << "Mayor: " << encontrarMayor(numeros, cantidad) << std::endl;
    std::cout << "Menor: " << encontrarMenor(numeros, cantidad) << std::endl;
    std::cout << "Suma: " << calcularSuma(numeros, cantidad) << std::endl;
    std::cout << "Promedio: " << calcularPromedio(numeros, cantidad) << std::endl;
   
    return 0;
}


