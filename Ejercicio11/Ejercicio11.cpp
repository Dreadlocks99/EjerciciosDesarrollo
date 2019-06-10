/*
11.Desarrollar  una función  que  calcule  el  máximo  común  divisor(MCD)entre  dos  números unNumero, otroNumero, teniendo en 
cuenta el siguiente algoritmo:

a.Dividir unNumero  por  otroNumero,  y  calcular  el  resto  sabiendo  que  éste  siempre cumple  con: 0<R<otroNumero.
b.Si R==0 entonces el MCDes otroNumero; sino seguir a paso C.
c.Reemplazar unNumero por otroNumero, otroNumero por R y volver al paso A.
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int mcd(int unNumero, int otroNumero) 
{
	//Utilice la variable valorMasGrande porque antes el ciclo for avanzaba hasta unNumero, entonces si por ejemplo ponia:
	//unNumero = 4 y otroNumero = 120, me daba "x" valor y despues al revez me daba otra cosa, de esta forma utilizando una variable
	//que toma el valor mas grande me aseguro de que el ciclo for recorra hasta donde es debido.

	int valorMasGrande = 0;
	int resultado = 1;
	if (unNumero > otroNumero)
	{
		valorMasGrande = unNumero;
	}

	if (unNumero < otroNumero)
	{
		valorMasGrande = otroNumero;
	}

	else
	{
		valorMasGrande = unNumero;
	}

	for (int i = 1; i < valorMasGrande; i++)
	{

		if ((unNumero % i == 0) && (otroNumero % i == 0))
		{
			resultado = i;
		}

		if (unNumero == otroNumero)
		{
			resultado = unNumero;
			break;
		}
	}

	return resultado;
}

int main()
{
	int unNumero;
	int otroNumero;
	cout << "Introducir el primer numero" << endl;
	cin >> unNumero;
	cout << "Introducir el segundo numero" << endl;
	cin >> otroNumero;
	int resultado = mcd(unNumero, otroNumero);
	cout << "El MCD de: " << unNumero << " y " << otroNumero << " es: " << resultado;
}