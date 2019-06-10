#include <iostream>
#include <sstream>
#include <string>
#include "Ejercicio10.h"
using namespace std;

int main()
{
	int numeroPedido = 0;
	int divisibleDosVeces = 0;
	bool esPrimo = false;
	cout << "Ingrese el numero para verificar si es primo: " << endl;
	cin >> numeroPedido;
	verificacionPorUnoYPorElMismoNumero(numeroPedido, divisibleDosVeces);
	if (divisibleDosVeces == 2)
	{
		esPrimo = true;
		cout << "El numero: " << numeroPedido << " es primo" << endl;
	}
	else
	{
		cout << "El numero: " << numeroPedido << " NO es primo" << endl;
	}
}

void verificacionPorUnoYPorElMismoNumero(int numeroPedido, int& divisibleDosVeces)
{
	if (numeroPedido % 1 == 0)
	{
		divisibleDosVeces++;
	}
	for (int i = 2; i <= numeroPedido; i++)
	{
		if (numeroPedido % i == 0)
		{
			divisibleDosVeces++;
		}
	}
}

