/* EJERCICIO 2*/
#include <iostream>
#include <sstream>
using namespace std;
const int cantidadmaxima = 3;

int main()
{
	int diezvalores[cantidadmaxima];
	int contadorParaPromedio = 0;
	int promedio= 0;
	int numerosParaSumar = 0;

	for (int i = 0; i < cantidadmaxima; i++)
	{
		cout << "Ingrese un numero\n";
		cin >> diezvalores[i];
		if (diezvalores[i] > 100)
		{
			promedio += diezvalores[i];
			contadorParaPromedio++;
		}
		if (diezvalores[i] < -10) {
			numerosParaSumar += diezvalores[i];
		}
	}
	cout << "El Promedio es:" << promedio / contadorParaPromedio << "\n";
	cout << "La suma de los menores a '-10' es: " << numerosParaSumar << "\n";
}
