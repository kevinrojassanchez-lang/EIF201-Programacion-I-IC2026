#ifndef OPERACIONES_MATRIZ_H
#define OPERACIONES_MATRIZ_H

const int FILAS = 3;
const int COLS = 3;

// Funciones
void leerMatriz(int matriz[FILAS][COLS]);
void imprimirMatriz(const int matriz[FILAS][COLS]);
int calcularSumaFila(const int matriz[FILAS][COLS], int numFila);
int calcularSumaColumna(const int matriz[FILAS][COLS], int numCol);
int calcularSumaDiagonal(const int matriz[FILAS][COLS]);

#endif
