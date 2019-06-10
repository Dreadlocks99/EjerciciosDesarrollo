#include <iostream>
#include <sstream>
#include <string>
#include "Ejercicio7.h"
using namespace std;

int main()
{
	int anio = 0;
	int mes = 0;
	int dia = 0;
	string resultado= "";

	cout << "Ingrese el anio\n";
	cin >> anio;
	cout << "Ingrese el mes\n";
	cin >> mes;
	cout << "Ingrese el dia\n";
	cin >> dia;
	unificarFecha(mes, resultado, anio, dia);
	cout << resultado;
}

void unificarFecha(int mes, std::string& resultado, int anio, int dia)
{
	if ((anio > 0) && (mes > 10) && (mes <= 12) && (dia > 10) && (dia <= 30))
	{
		resultado = to_string(anio) + to_string(mes) + to_string(dia);
	}
	if ((dia < 10) && (mes < 10))
	{
		resultado = to_string(anio) + "0" + to_string(mes) + "0" + to_string(dia);
	}
	if (mes < 10)
	{
		resultado = to_string(anio) + "0" + to_string(mes) + to_string(dia);
	}
	if (dia < 10)
	{
		resultado = to_string(anio) + to_string(mes) + "0" + to_string(dia);
	}
	/*

	Queria utilizar este else para cuando se ingresen datos que no sean numeros, numeros negativos y cualquier cosa que no 
	entrara en las condiciones de la funcion, pero cuando le pongo por ejemplo:
	anio: 2019
	mes: 03
	dia: 20

	Por alguna razon que no comprendo se mete en el else, y reemplaza el: "20190320" por el texto del else.

	else
	{
		resultado = "Los datos ingresados son incorrectos, verifiquelos.";
	}
	*/
}

