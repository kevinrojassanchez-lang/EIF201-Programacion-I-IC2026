#include <iostream>
#include "inversion.h" 

using namespace std;

int main() {
    int original[MAX_ELEMENTOS]{};
    int invertido[MAX_ELEMENTOS];
    int size;

    do {
        cout << "Ingrese el tamano del arreglo (maximo" << MAX_ELEMENTOS << "): ";
        cin >> size;
    } while (size < 1 || size > MAX_ELEMENTOS);

    for (int i = 0; i < size; i++) {
        cout << "Valor [" << i << "]: ";
        cin >> original[i];
    }

    invertirArreglo(original, invertido, size);

    cout << "Original:  " << endl;
    for (int i = 0; i < size; i++) 
    cout << original[i] << " ";
    cout << endl;
    cout << "Invertido: " << endl;
    for (int i = 0; i < size; i++) cout << invertido[i] << " ";
    cout << endl;

    return 0;
}


