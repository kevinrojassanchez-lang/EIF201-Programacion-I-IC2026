#include <iostream>
#include <string>
#include <cctype> 
#include "procesamiento.h"

using namespace std;

string extraerNombre(string completo) {
    // find devuelve size_t 
    size_t posicion = completo.find(' ');

    // si no encuentra espacio, npos es el valor de error de size_t
    if (posicion == string::npos) return completo;

    return completo.substr(0, posicion);
}

string extraerApellido(string completo) {
    size_t posicion1 = completo.find(' ');
    if (posicion1 == string::npos) return ""; // seguridad por si no hay espacios

    size_t posicion2 = completo.find(' ', posicion1 + 1);
    if (posicion2 == string::npos) return completo.substr(posicion1 + 1);

    size_t largo = posicion2 - posicion1 - 1;
    return completo.substr(posicion1 + 1, largo);
}

int contarVocales(string completo) {
    int vocales = 0;
    // size_t i para que coincida con .length()
    for (size_t i = 0; i < completo.length(); i++) {
        char letra = toupper(completo.at(i));
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            vocales++;
        }
    }
    return vocales;
}

string aMayusculas(string completo) {
    string resultado = completo;
    for (size_t i = 0; i < resultado.length(); i++) {
        resultado.at(i) = (char)toupper(resultado.at(i));
    }
    return resultado;
}