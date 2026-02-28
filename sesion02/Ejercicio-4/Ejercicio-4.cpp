#include <iostream>
#include <string>
#include "procesamiento.h"

using namespace std;

int main() {
    string nombreCompleto;

    cout << "Ingrese su nombre (Nombre, Apellido 1, Apellido 2): ";
    // getline para capturar los espacios
    getline(cin, nombreCompleto);

    cout << "\n--- ANALISIS DEL NOMBRE ---" << endl;
    cout << "Primer Nombre:    " << extraerNombre(nombreCompleto) << endl;
    cout << "Primer Apellido:  " << extraerApellido(nombreCompleto) << endl;
    cout << "Total Vocales:    " << contarVocales(nombreCompleto) << endl;
    cout << "En Mayusculas:    " << aMayusculas(nombreCompleto) << endl;
    cout << "Longitud Total:   " << nombreCompleto.length() << " letras" << endl;

    return 0;
}


