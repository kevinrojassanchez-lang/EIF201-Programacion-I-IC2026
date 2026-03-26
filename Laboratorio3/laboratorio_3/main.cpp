#include <iostream>
#include "Flota.h"

using namespace std;

int main() {
    Flota miFlota;
    int opcion;
    string placa, marca;

    do {
        cout << "\n--- CONTROL DE FLOTA CAMPUS COTO ---\n"
            << "1. Registrar vehiculo\n2. Buscar por placa\n"
            << "3. Mostrar por marca\n4. Registrar kilometros\n"
            << "5. Desactivar vehiculo\n6. Reactivar vehiculo\n"
            << "7. Eliminar vehiculo\n8. Mostrar flota completa\n"
            << "9. Contar activos\n10. Salir\nOpcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: {
            int anio; double km;
            cout << "Placa: "; cin >> placa;
            cout << "Marca: "; cin >> marca;
            cout << "Anio: "; cin >> anio;
            cout << "KM inicial: "; cin >> km;
            miFlota.agregar(new Vehiculo(placa, marca, anio, km));
            break;
        }
        case 2: {
            cout << "Placa a buscar: "; cin >> placa;
            Vehiculo* v = miFlota.buscarPorPlaca(placa);
            if (v) v->mostrar(); else cout << "No encontrado.\n";
            break;
        }
        case 7: {
            cout << "Placa para dar de baja: "; cin >> placa;
            if (miFlota.eliminar(placa)) cout << "Eliminado con exito.\n";
            break;
        }
        case 8: miFlota.mostrarTodos(); break;
        case 9: cout << "Activos: " << miFlota.contarActivos() << endl; break;
        }
    } while (opcion != 10);

    return 0;
}
