#include <iostream>
#include "operaciones_matriz.h"

using namespace std;

int main() {
    int matriz[FILAS][COLS];

    leerMatriz(matriz);
    imprimirMatriz(matriz);

    cout << "\nRESULTADOS:" << endl;

    // suma de cada fila
    for (int i = 0; i < FILAS; i++) {
        cout << "Suma Fila " << i << ": " << calcularSumaFila(matriz, i) << endl;
    }

    // suma de cada columna
    for (int j = 0; j < COLS; j++) {
        cout << "Suma Columna " << j << ": " << calcularSumaColumna(matriz, j) << endl;
    }

    // suma diagonal
    cout << "Suma Diagonal Principal: " << calcularSumaDiagonal(matriz) << endl;

    return 0;
}

