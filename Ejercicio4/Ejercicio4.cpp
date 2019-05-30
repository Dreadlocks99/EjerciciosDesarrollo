/* EJERCICIO 4 
Dado un valor numérico entero m, determinar e imprimir un listado con los m primeros múltiplos de 3 que no sean múltiplos de 5.
*/
#include <iostream>
#include <sstream>
#include "Ejercicio4.h"
using namespace std;
int in = 3;


int main()
{
	int cantidadDeMultiplos;
	cout << "Elija un numero: ";
	cin >> cantidadDeMultiplos;
	funcionVerificadoraDeMultiplosDeTresYNoDeCinco(cantidadDeMultiplos);
}

void funcionVerificadoraDeMultiplosDeTresYNoDeCinco(int cantidadDeMultiplos)
{
	for (int i = 0; i < cantidadDeMultiplos; i++)
	{

		if (in % 5 != 0) {
			cout << "Los numeros son: " << in << endl;
		}
		else {
			i--;
		}
		in += 3;
	}
}
