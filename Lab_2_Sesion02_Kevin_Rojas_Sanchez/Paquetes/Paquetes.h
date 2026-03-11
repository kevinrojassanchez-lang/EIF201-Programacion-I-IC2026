#pragma once

double* crearRegistro(int& cantidad);

void ingresarPesos(double* registro, int cantidad);

double calcularPesoTotalc(const double* pesos, int cantidad);

int contarSobreLimite(const double* pesos, int cantidad, double limite);

const double* buscarMasPesado(const double* pesos, int cantidad);

void mostrarResultados(const double* registro, int cantidad, double limite);
