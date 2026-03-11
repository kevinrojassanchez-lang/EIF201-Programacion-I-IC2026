#include <iostream>
#include "Paquetes.h"

double* crearRegistro(int& cantidad) {
	std::cout << "Ingrese la cantidad de paquetes: ";
	std::cin >> cantidad;
	while (cantidad <= 0) {
		std::cout << "La cantidad debe ser Mayor a 0. Intente nuevamente: ";
		std::cin >> cantidad;
	}
	double* registro = new double[cantidad];
	return registro;
}

void ingresarPesos(double* registro, int cantidad) {
	std::cout << "Ingrese los pesos de los paquetes:\n";
	for (int i = 0; i < cantidad; ++i) {
		std::cout << "Paquete " << (i + 1) << ": ";
		std::cin >> registro[i];
		while (registro[i] < 0) {
			std::cout << "El peso no puede ser 0. Intente nuevamente: ";
			std::cin >> registro[i];
		}
	}
}

double calcularPesoTotalc(const double* pesos, int cantidad) {
	double total = 0.0;
	for (int i = 0; i < cantidad; ++i) {
		total += pesos[i];
	}
	return total;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite) {
	int contador = 0;
	for (int i = 0; i < cantidad; ++i) {
		if (pesos[i] > limite) {
			contador++;
		}
	}
	return contador;
}

const double* buscarMasPesado(const double* pesos, int cantidad) {
	if (cantidad == 0) {
		return nullptr; // No hay paquetes
	}
	const double* masPesado = &pesos[0];
	for (int i = 1; i < cantidad; ++i) {
		if (pesos[i] > *masPesado) {
			masPesado = &pesos[i];
		}
	}
	return masPesado;
}

void mostrarResultados(const double* registro, int cantidad, double limite) {
	std::cout << "Resultados:\n";
	std::cout << "Peso total de los paquetes: " << calcularPesoTotalc(registro, cantidad) << " kg\n";
	std::cout << "Cantidad de paquetes que superan el limite de " << limite << " kg: " << contarSobreLimite(registro, cantidad, limite) << "\n";
	const double* masPesado = buscarMasPesado(registro, cantidad);
	if (masPesado) {
		std::cout << "El paquete mas pesado pesa: " << *masPesado << " kg\n";
	} else {
		std::cout << "No hay paquetes registrados.\n";
	}
}

