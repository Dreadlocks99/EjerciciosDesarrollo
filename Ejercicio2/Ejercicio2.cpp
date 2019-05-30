/* EJERCICIO 2
	Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de los menores que –10 por pantalla.
*/
#include <iostream>
#include <sstream>
#include "Ejercicio2.h"
using namespace std;
const int cantidadmaxima = 50;

int main()
{
	int valoresDelArray[cantidadmaxima];
	int contadorParaPromedio = 0;
	int promedio= 0;
	int numerosParaSumar = 0;

	for (int i = 0; i < cantidadmaxima; i++)
	{
		cout << "Ingrese un numero\n";
		cin >> valoresDelArray[i];
		chequeaMayoresACien(valoresDelArray, i, promedio, contadorParaPromedio);
		chequeaMenoresAMenosDiez(valoresDelArray, i, numerosParaSumar);
	}
	verificaQueElCalculoSeaRealizableYDevuelveResultados(contadorParaPromedio, promedio, numerosParaSumar);
	
}

void verificaQueElCalculoSeaRealizableYDevuelveResultados(int contadorParaPromedio, int promedio, int numerosParaSumar)
{
	if (contadorParaPromedio == 0)
	{
		cout << "La cantidad de veces que el numero ingresado sobrepaso los 100 fue: 0" << endl << endl << "Por esta razon no se puede realizar el calculo\n";
	}
	else
	{
		cout << "El Promedio es:" << promedio / contadorParaPromedio << "\n";
		cout << "La suma de los menores a '-10' es: " << numerosParaSumar << "\n";
	}
}

void chequeaMenoresAMenosDiez(int  valoresDelArray[3], int i, int& numerosParaSumar)
{
	if (valoresDelArray[i] < -10) {
		numerosParaSumar += valoresDelArray[i];
	}
}

void chequeaMayoresACien(int  valoresDelArray[3], int i, int& promedio, int& contadorParaPromedio)
{
	if (valoresDelArray[i] > 100)
	{
		promedio += valoresDelArray[i];
		contadorParaPromedio++;
	}
}
