/* EJERCICIO 1 
	Dados 10 valores numéricos, informar cual es el mayor de ellos por pantalla
*/
#include <iostream>
#include <sstream>
#include "Ejercicio1.h"
using namespace std;
const int cantidadmaxima = 10;

int main()
{
	int diezvalores[cantidadmaxima];
	int menornumero = 0;
	for (int i = 0; i < cantidadmaxima; i++)
	{
		cout << "Ingrese un numero\n";
		cin >> diezvalores[i];
		reemplazaUltimoValorMasGrandePorElProximo(diezvalores, i, menornumero);
	}
	cout << "El mayor numero es: " << menornumero;
}

void reemplazaUltimoValorMasGrandePorElProximo(int  diezvalores[10], int i, int& menornumero)
{
	if (diezvalores[i] > menornumero)
	{
		menornumero = diezvalores[i];
	}
}
