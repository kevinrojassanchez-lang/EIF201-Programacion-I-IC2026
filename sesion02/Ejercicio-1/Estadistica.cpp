#include "Estadistica.h"
#include <cmath>
#include <iostream>

void llenarArreglo(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "Ingrese un numero: ";
		std::cin >> arr[i];
	}
}
int encontrarMayor(int arr[], int size)
{
	int mayor = arr[0];
	// Encontrar mayor
	for (int i = 1; i < size; ++i)
	{
		if (arr[i] > mayor)
		{
			mayor = arr[i];
		}
	}
	return mayor;
	
}
int encontrarMenor(int arr[],int size)
{
	int menor = arr[0];
	// Encontrar el menor
	for (int i = 1; i < size; ++i)
	{
		if (arr[i] < menor)
		{
			menor = arr[i];
		}
	}
	return menor;
}
int calcularSuma(int arr[], int size)
{
	int suma = 0;
	// Calcular la suma
	for (int i = 0; i < size; ++i)
	{
		suma += arr[i];
	}
	return suma;
}
	double calcularPromedio(int arr[], int size)
{
	double suma = 0;
	// Calcular la suma
	for (int i = 0; i < size; ++i)
	{
		suma += arr[i];
	}
	double promedio = suma / size;
	return promedio;
}

