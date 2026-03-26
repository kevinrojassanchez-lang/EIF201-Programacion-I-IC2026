#include "Flota.h"

Flota::Flota() : cantidad(0), capacidad(3) {
    lista = new Vehiculo * [capacidad];
}

Flota::~Flota() {
    for (int i = 0; i < cantidad; i++) {
        delete lista[i]; // Borra cada objeto Vehiculo
    }
    delete[] lista; // Borra el arreglo de punteros
}

void Flota::redimensionar() {
    capacidad += 3; // O capacidad * 2
    Vehiculo** nuevaLista = new Vehiculo * [capacidad];
    for (int i = 0; i < cantidad; i++) {
        nuevaLista[i] = lista[i];
    }
    delete[] lista;
    lista = nuevaLista;
    std::cout << "(Sistema: Capacidad aumentada a " << capacidad << ")\n";
}

void Flota::agregar(Vehiculo* nuevo) {
    if (cantidad == capacidad) redimensionar();
    lista[cantidad++] = nuevo;
}

Vehiculo* Flota::buscarPorPlaca(std::string placa) {
    for (int i = 0; i < cantidad; i++) {
        if (lista[i]->getPlaca() == placa) return lista[i];
    }
    return nullptr;
}

bool Flota::eliminar(std::string placa) {
    for (int i = 0; i < cantidad; i++) {
        if (lista[i]->getPlaca() == placa) {
            if (lista[i]->isActivo()) {
                std::cout << "Error: El vehiculo debe desactivarse antes de darlo de baja.\n";
                return false;
            }
            delete lista[i]; // Liberamos memoria del objeto
            // Compactar el arreglo
            for (int j = i; j < cantidad - 1; j++) {
                lista[j] = lista[j + 1];
            }
            cantidad--;
            return true;
        }
    }
    return false;
}

int Flota::contarActivos() {
    int activos = 0;
    for (int i = 0; i < cantidad; i++) {
        if (lista[i]->isActivo()) activos++;
    }
    return activos;
}

void Flota::mostrarTodos() {
    if (cantidad == 0) {
        std::cout << "La flota esta vacia.\n";
        return;
    }
    for (int i = 0; i < cantidad; i++) {
        lista[i]->mostrar();
    }
}