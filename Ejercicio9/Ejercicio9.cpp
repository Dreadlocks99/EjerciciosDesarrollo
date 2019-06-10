#include <iostream>
#include <sstream>
#include <string>
#include "Ejercicio9.h"

using namespace std;
int base = 0;
int exponente = 0;
int potencia = 1;

int main()
{
	cout << "Ingrese la base" << endl;
	cin >> base;
	cout << "Ingrese el exponente" << endl;
	cin >> exponente;
	pow();
	cout << "La base: "<< base << endl <<"Con el exponente: " << exponente << endl <<"Tiene como resultado la potencia: " << potencia << endl;
	
}

void pow()
{
	for (int i = 0; i < exponente; i++)
	{
		potencia *= base;
	}
}
