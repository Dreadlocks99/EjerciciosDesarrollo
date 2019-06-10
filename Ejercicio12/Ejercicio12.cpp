/*
12.Dado  un número  entero  que  representa una  suma  de  dinero,  
Desarrollar  un  programa que  indique  qué cantidades de billetes de $1000, $500, $200, $100, $50, $20, $10 y 
monedas de $5, $2, $1 se deben utilizar para alcanzar dicho monto, dando prioridad a los billetes de mayor valor.
*/

#include <iostream>
#include <sstream>
#include <string>
#include "Ejercicio12.h"
using namespace std;

//BILLETES                0   1   2   3  4  5  6
int arrayBilletesYMonedas[] = { 1000,500,200,100,50,20,10,5,2,1 };

//CANTIDAD_BILLETES
int arrayCantidadUnidades[] = { 0,0,0,0,0,0,0,0,0,0 };

//MENORES QUE:
//bool arrayMenoresQue[] = { false ,false , false , false , false , false , false , false , false , false };

int buscadorDeCantidad(int sumaDeDinero)
{
	for (int i = 0; i < 10; i++)
	{
		if (sumaDeDinero >= arrayBilletesYMonedas[9])
		{
			if (sumaDeDinero >= arrayBilletesYMonedas[i])
			{
				arrayCantidadUnidades[i] = sumaDeDinero / arrayBilletesYMonedas[i];
				sumaDeDinero -= arrayBilletesYMonedas[i] * arrayCantidadUnidades[i];
			}

		}

	//for (int i = 0; i < sumaDeDinero; i++)
	//{
	//	//1000
	//	if (sumaDeDinero >= 1000)
	//	{
	//		arrayCantidadUnidades[0] = sumaDeDinero / arrayBilletes[0];
	//		sumaDeDinero -= arrayBilletes[0] * arrayCantidadUnidades[0];
	//	}

	//	arrayMenoresQue[0] = true;
	//	
	//	//500
	//	if ((sumaDeDinero >= 500) && (arrayMenoresQue[0]))
	//	{
	//		arrayCantidadUnidades[1] = sumaDeDinero / arrayBilletes[1];
	//		sumaDeDinero -= arrayBilletes[1] * arrayCantidadUnidades[1];
	//	}

	//	arrayMenoresQue[1] = true;

	//	//200
	//	if ((sumaDeDinero >= 200) && (arrayMenoresQue[1]))
	//	{
	//		arrayCantidadUnidades[2] = sumaDeDinero / arrayBilletes[2];
	//		sumaDeDinero -= arrayBilletes[2] * arrayCantidadUnidades[2];
	//	}

	//	arrayMenoresQue[2] = true;

	//	//100
	//	if ((sumaDeDinero >= 100) && (arrayMenoresQue[2]))
	//	{
	//		arrayCantidadUnidades[3] = sumaDeDinero / arrayBilletes[3];
	//		sumaDeDinero -= arrayBilletes[3] * arrayCantidadUnidades[3];
	//	}

	//	arrayMenoresQue[3] = true;

	//	//50
	//	if ((sumaDeDinero >= 50) && (arrayMenoresQue[3]))
	//	{
	//		arrayCantidadUnidades[4] = sumaDeDinero / arrayBilletes[4];
	//		sumaDeDinero -= arrayBilletes[4] * arrayCantidadUnidades[4];
	//	}

	//	arrayMenoresQue[4] = true;

	//	//20
	//	if ((sumaDeDinero >= 20) && (arrayMenoresQue[4]))
	//	{
	//		arrayCantidadUnidades[5] = sumaDeDinero / arrayBilletes[5];
	//		sumaDeDinero -= arrayBilletes[5] * arrayCantidadUnidades[5];
	//	}

	//	arrayMenoresQue[5] = true;

	//	//10
	//	if ((sumaDeDinero >= 10) && (arrayMenoresQue[5]))
	//	{
	//		arrayCantidadUnidades[6] = sumaDeDinero / arrayBilletes[6];
	//		sumaDeDinero -= arrayBilletes[6] * arrayCantidadUnidades[6];
	//	}

	//	arrayMenoresQue[6] = true;

	//	//5
	//	if ((sumaDeDinero >= 5) && (arrayMenoresQue[6]))
	//	{
	//		arrayCantidadUnidades[7] = sumaDeDinero / arrayMonedas[0];
	//		sumaDeDinero -= arrayMonedas[0] * arrayCantidadUnidades[7];
	//	}

	//	arrayMenoresQue[7] = true;

	//	//2
	//	if ((sumaDeDinero >= 2) && (arrayMenoresQue[7]))
	//	{
	//		arrayCantidadUnidades[8] = sumaDeDinero / arrayMonedas[1];
	//		sumaDeDinero -= arrayMonedas[1] * arrayCantidadUnidades[8];
	//	}

	//	arrayMenoresQue[8] = true;

	//	//1
	//	if ((sumaDeDinero >= 1) && (arrayMenoresQue[8]))
	//	{
	//		arrayCantidadUnidades[9] = sumaDeDinero / arrayMonedas[2];
	//		sumaDeDinero -= arrayMonedas[2] * arrayCantidadUnidades[9];
	//	}

	//	arrayMenoresQue[9] = true;

	//	resto = sumaDeDinero;
	//	return sumaDeDinero;
	//}

	
	
		/*else
		{
			break;
		}*/
		
	}
	/*
	
	while (sumaDeDinero > arrayMonedas[2])
	{
		if (sumaDeDinero > arrayBilletes[j])

		{
			sumaDeDinero -= arrayBilletes[j];
 			arrayCantidadUnidades[j]++;
			
		}
		if ((sumaDeDinero < arrayBilletes[6])&&(sumaDeDinero > arrayMonedas[i]))
		{
			sumaDeDinero -= arrayMonedas[i];
			arrayCantidadUnidades[i]++;
			
		}
		
	}
	*/

	
	return sumaDeDinero;
}
int main()
{
	int sumaDeDinero = 0;
	cout << "Ingrese la suma de dinero: " << endl;
	cin >> sumaDeDinero;
	buscadorDeCantidad(sumaDeDinero);
	mostrarCantidadBilletesYMonedas();
}

void mostrarCantidadBilletesYMonedas()
{
	coutsDeCantidades();
}

void coutsDeCantidades()
{
	cout << "La cantidad de billetes de 1000 fue: " << arrayCantidadUnidades[0] << endl;
	cout << "La cantidad de billetes de 500 fue: " << arrayCantidadUnidades[1] << endl;
	cout << "La cantidad de billetes de 200 fue: " << arrayCantidadUnidades[2] << endl;
	cout << "La cantidad de billetes de 100 fue: " << arrayCantidadUnidades[3] << endl;
	cout << "La cantidad de billetes de 50 fue: " << arrayCantidadUnidades[4] << endl;
	cout << "La cantidad de billetes de 20 fue: " << arrayCantidadUnidades[5] << endl;
	cout << "La cantidad de billetes de 10 fue: " << arrayCantidadUnidades[6] << endl;
	cout << "La cantidad de monedas de 5 fue: " << arrayCantidadUnidades[7] << endl;
	cout << "La cantidad de monedas de 2 fue: " << arrayCantidadUnidades[8] << endl;
	cout << "La cantidad de monedas de 1 fue: " << arrayCantidadUnidades[9] << endl;
}
