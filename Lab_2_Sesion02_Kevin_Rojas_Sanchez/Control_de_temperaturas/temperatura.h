#pragma once

//se solicita cantidad de dias y reserva memoria dinamica
//retorna puntero al arreglo creado con new.
double* crearRegistro(int& cantidadDias);

//llena el arreglo con temperaturas ingresadas por el usuario.
void ingresarTemperaturas(double* registro, int cantidad);

//calcula y retorna el promedio del arreglo
double calcularPromedio(const double* registro, int cantidad);

//Retorna la temperatura maxima
double calcularMaximo(const double* registro, int cantidad);

//Retorna la temperatura minima
double calcularMinimo(const double* registro, int cantidad);

//Muestra resumen de resultados en pantalla.
void mostrarResultados(const double* resgistro, int cantidad);

