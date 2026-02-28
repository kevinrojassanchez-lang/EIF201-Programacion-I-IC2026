#include <iostream>
#include <iomanip>
#include "operaciones_matriz.h"

using namespace std;

void leerMatriz(int matriz[FILAS][COLS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Ingrese el valor [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(const int matriz[FILAS][COLS]) {
    cout << "\nMatriz 3x3:" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << setw(6) << matriz[i][j];
        }
        cout << endl;
    }
}

int calcularSumaFila(const int matriz[FILAS][COLS], int numFila) {
    int suma = 0;
    for (int j = 0; j < COLS; j++) {
        suma += matriz[numFila][j];
    }
    return suma;
}

int calcularSumaColumna(const int matriz[FILAS][COLS], int numCol) {
    int suma = 0;
    for (int i = 0; i < FILAS; i++) {
        suma += matriz[i][numCol];
    }
    return suma;
}

int calcularSumaDiagonal(const int matriz[FILAS][COLS]) {
    int suma = 0;
    for (int i = 0; i < FILAS; i++) {
        suma += matriz[i][i];
    }
    return suma;
}