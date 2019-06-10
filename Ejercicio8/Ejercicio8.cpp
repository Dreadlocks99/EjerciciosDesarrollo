#include <iostream>
#include <sstream>
#include <string>
#include "Ejercicio8.h"
using namespace std;

int main()
{
	int numero1, numero2;
	cout << "Ingrese un numero: ";
	cin >> numero1;
	cout << "Ingrese otro numero: ";
	cin >> numero2;
	verificarMultiplicidad(numero1, numero2);
}

void verificarMultiplicidad(int numero1, int numero2)
{
	if (numero1 > numero2)
	{
		if (numero1 % numero2 == 0)
		{
			cout << "El numero: " << numero1 << " es multiplo de: " << numero2;
			cout << endl;
		}
		else
		{
			cout << "El numero: " << numero1 << " >>NO<< es multiplo de: " << numero2;
			cout << endl;
		}
	}
	else
	{
		if (numero2 % numero1)
		{
			cout << "El numero: " << numero2 << " es multiplo de: " << numero1;
			cout << endl;
		}
		else
		{
			cout << "El numero: " << numero2 << " >>NO<< es multiplo de: " << numero1;
			cout << endl;
		}
	}
}
