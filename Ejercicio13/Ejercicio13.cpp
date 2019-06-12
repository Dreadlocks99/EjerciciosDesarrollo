/*
Hacer un programa que, en primer lugar: 
	-Le pida al usuario que ingrese un número, y que luego le muestre las siguientes opciones:
		
		a)Aplicar suma: si selecciona esta opción, se le deberá pedir que ingrese otro número y mostrar el resultado.
		Al mostrar el resultado, se le deberá preguntar si quiere seguir sumando: 
		si responde  que sí, se deberá sumar el valor que se especifique; si responde que no, se deberá volver al menú principal.
		
		b)Aplicar resta: si selecciona esta opción, se le deberá pedir que ingrese otro número y mostrar el resultado.

		c)Transformar  a número romano:  si  selecciona  esta  opción,  se  le  deberá  mostrar el número  romano equivalente.
		
		d)Potenciar: si selecciona esta opción, se le deberá pedir que ingrese otro númeroqueserá el exponente al que se debe elevar el número inicial.
		Se deberá tener en cuenta que, en todos los casos, siempre se debe volver al menú principal luego de ejecutar la opción seleccionada.
		Además,  deberá  agregarse  una  opción  de  salir:  cuando  se  seleccione  esta  opción,  se  deberá  mostrar  por pantalla 
		todas las operaciones que realizó el usuario
*/
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include "Ejercicio13.h"
using namespace std;

int unNumero = 0;
int opcion_A_Elegir = 0;
enum opcionesAElegir
{
	a = 1, b = 2, c = 3, d = 4, e = 5
};
string cadenaRomanos = "";

int main()
{
	cout << "Ingrese un numero: "; cin >> unNumero;
	cout << endl;
	queOpcionElige();
	int otroNumero = 0;
	int resultado = unNumero;
	int contadorDeOperacionA = 0;
	int contadorDeOperacionB = 0;
	int contadorDeOperacionC = 0;
	int contadorDeOperacionD = 0;
	string respuestaSeguir = "";
	int cantidadDeNumerosRomanos[] = { 0,0,0,0,0,0,0 };
	int valoresRomanos[] = { 1000,500,100,50,10,5,1 };
	string numerosRomanos[] = { "M","D","C","L","X","V","I" };
	string strNumerosRomanos = "";

	switchOpcion(otroNumero, resultado, respuestaSeguir, contadorDeOperacionA, contadorDeOperacionB, valoresRomanos, cantidadDeNumerosRomanos, strNumerosRomanos, numerosRomanos, contadorDeOperacionD, contadorDeOperacionC);

}

void switchOpcion(int& otroNumero, int& resultado, std::string& respuestaSeguir, int& contadorDeOperacionA, int& contadorDeOperacionB, int  valoresRomanos[7], int  cantidadDeNumerosRomanos[7], std::string& strNumerosRomanos, std::string  numerosRomanos[7], int& contadorDeOperacionD, int contadorDeOperacionC)
{
	switch (opcion_A_Elegir)
	{
	case a:
		cout << "Ha seleccionado la opcion (Aplicar suma)" << endl;
		do
		{
			cout << "Ingrese el numero que quiere sumar: "; cin >> otroNumero;
			cout << endl;
			resultado += otroNumero;
			cout << "El resultado es: " << resultado << endl;
			cout << "Quiere seguir sumando? "; cin >> respuestaSeguir;
			cout << endl;
			contadorDeOperacionA++;
		} while ((respuestaSeguir == "si") || (respuestaSeguir == "SI"));

		if ((respuestaSeguir == "no") || (respuestaSeguir == "NO"))
		{
			queOpcionElige();
			switchOpcion(otroNumero, resultado, respuestaSeguir, contadorDeOperacionA, contadorDeOperacionB, valoresRomanos, cantidadDeNumerosRomanos, strNumerosRomanos, numerosRomanos, contadorDeOperacionD, contadorDeOperacionC);
			break;
		}

	case b:
		cout << "Ha seleccionado la opcion (Aplicar resta)" << endl;

		do
		{
			cout << "Ingrese el numero que quiere restar: "; cin >> otroNumero;
			cout << endl;
			resultado -= otroNumero;
			cout << "El resultado es: " << resultado << endl;
			cout << "Quiere seguir restando? "; cin >> respuestaSeguir;
			cout << endl;
			contadorDeOperacionB++;
		} while ((respuestaSeguir == "si") || (respuestaSeguir == "SI"));

		if ((respuestaSeguir == "no") || (respuestaSeguir == "NO"))
		{
			queOpcionElige();
			switchOpcion(otroNumero, resultado, respuestaSeguir, contadorDeOperacionA, contadorDeOperacionB, valoresRomanos, cantidadDeNumerosRomanos, strNumerosRomanos, numerosRomanos, contadorDeOperacionD, contadorDeOperacionC);
			break;
		}
		break;
	case c:
		
		for (int i = 0; i < 7; i++)
		{
			if (resultado >= valoresRomanos[6])
			{
				if (resultado >= valoresRomanos[i])
				{
					cantidadDeNumerosRomanos[i] = resultado / valoresRomanos[i];
					resultado -= valoresRomanos[i] * cantidadDeNumerosRomanos[i];
				}
				strNumerosRomanos += numerosRomanos[i];
			}
		}
		cout << strNumerosRomanos << endl;
		break;
	case d:
		cout << "Ha seleccionado la opcion (Potencia)" << endl;

		do
		{
			cout << "Ingrese el numero que quiere usar como exponente: "; cin >> otroNumero;
			cout << endl;
			resultado = pow(resultado, otroNumero);
			cout << "El resultado es: " << resultado << endl;
			cout << "Quiere seguir potenciando? "; cin >> respuestaSeguir;
			cout << endl;
			contadorDeOperacionD++;
		} while ((respuestaSeguir == "si") || (respuestaSeguir == "SI"));

		if ((respuestaSeguir == "no") || (respuestaSeguir == "NO"))
		{
			queOpcionElige();
			switchOpcion(otroNumero, resultado, respuestaSeguir, contadorDeOperacionA, contadorDeOperacionB, valoresRomanos, cantidadDeNumerosRomanos, strNumerosRomanos, numerosRomanos, contadorDeOperacionD, contadorDeOperacionC);
			break;
		}
		break;

		break;
	case e:
		cout << "Ha seleccionado la opcion (Salir)" << endl
			<< "La operacion 'Aplicar Suma' se utilizo: " << contadorDeOperacionA << " veces." << endl
			<< "La operacion 'Aplicar Resta' se utilizo: " << contadorDeOperacionB << " veces." << endl
			<< "La operacion 'Numeros Romanos' se utilizo: " << contadorDeOperacionC << " veces." << endl
			<< "La operacion 'Potencia' se utilizo: " << contadorDeOperacionD << " veces." << endl;
		break;
	default:
		cout << "Seleccione una opcion valida, las mismas varian de A-D" << endl;
		break;
	}
}
void queOpcionElige()
{
	cout << "Seleccione una de las cuatro opciones donde: " << endl
		<< "El numero 1 es la opcion A <<SUMA>>" << endl
		<< "El numero 2 es la opcion B <<RESTA>>" << endl
		<< "El numero 3 es la opcion C <<NUMERO ROMANO>>" << endl
		<< "El numero 4 es la opcion D <<POTENCIA>>" << endl
		<< "El numero 5 es la opcion E <<SALIR>>" << endl;
	cout << endl;
	cout << "Esperando... "; cin >> opcion_A_Elegir;
	cout << endl;
}
