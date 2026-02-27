#include "inversion.h"

void invertirArreglo(const int original[], int invertido[], int size) {
    for (int i = 0; i < size; i++) {
        // el ultimo del original va al primero del invertido
        invertido[i] = original[size - 1 - i];
    }
}