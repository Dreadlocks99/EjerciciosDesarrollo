/* EJERCICIO 3
	Se ingresa un conjunto de valores positivos terminado con un valor negativo. Se pide desarrollar el programa 
	que imprima el valor máximo del conjunto y su posición relativa dentro del mismo (el número de orden en el que fue ingresado).
*/

#include <iostream>
#include <sstream>
using namespace std;
const int cantidadmaxima = 100;
void seRequisanNumerosMientrasSeanPositivos(int arrayGrande[100], int& i) {
	do
	{
		cout << "Ingrese un numero:\n";
		cin >> arrayGrande[i];
		i++;
	} while (arrayGrande[i - 1] > 0);
}
void valorMasGrandeYPosicionDeLaMisma(int arrayGrande[100], int& mayorNmero, int& posicionNumerosMasGrande) {
	for (int i = 0; i < cantidadmaxima; i++)
	{
		if (arrayGrande[i] > mayorNmero)
		{
			mayorNmero = arrayGrande[i];
			posicionNumerosMasGrande = i + 1;
		}

	}
}

int main()
{
	int mayorNmero = 0;
	int posicionNumerosMasGrande = 0;
	int i = 0;
	int arrayGrande[cantidadmaxima];
	
	seRequisanNumerosMientrasSeanPositivos(arrayGrande, i);
	valorMasGrandeYPosicionDeLaMisma(arrayGrande, mayorNmero, posicionNumerosMasGrande);
	cout << "El mayor numero es: " << mayorNmero << " Y su posicion es: " << posicionNumerosMasGrande;

}



