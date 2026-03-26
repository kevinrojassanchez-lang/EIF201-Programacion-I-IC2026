#include "Vehiculo.h"

Vehiculo::Vehiculo(std::string p, std::string m, int a, double k)
    : placa(p), marca(m), anio(a), kilometraje(k), activo(true) {
}

std::string Vehiculo::getPlaca() const { return placa; }
std::string Vehiculo::getMarca() const { return marca; }
int Vehiculo::getAnio() const { return anio; }
double Vehiculo::getKilometraje() const { return kilometraje; }
bool Vehiculo::isActivo() const { return activo; }

void Vehiculo::registrarKilometros(double km) {
    if (activo && km > 0) {
        kilometraje += km;
    }
    else {
        std::cout << "Error: Vehiculo inactivo o kilometraje invalido.\n";
    }
}

void Vehiculo::desactivar() {
    if (!activo) std::cout << "El vehiculo ya esta fuera de servicio.\n";
    else activo = false;
}

void Vehiculo::reactivar() {
    if (activo) std::cout << "El vehiculo ya esta activo.\n";
    else activo = true;
}

void Vehiculo::mostrar() const {
    std::cout << "Placa: " << placa << " | Marca: " << marca
        << " | Año: " << anio << " | KM: " << kilometraje
        << " | Estado: " << (activo ? "ACTIVO" : "FUERA DE SERVICIO") << std::endl;
}