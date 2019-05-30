/* EJERCICIO 6
	Dadas dos fechas en formato AAAAMMDD, informar cual es la más reciente.
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int getAnio(int fechaAnio);
void condicionesParaVerificarMayorFecha(int dia, int mes, int dia2, int mes2, int anio, int anio2);
int getMes(int fechaMes, int fechaAnio);
int getDia(int fechaAnio, int fechaMes, int fechaDia);


int main()
{
	int fechaEntera = 0;
	int fechaEntera2 = 0;

	int preguntaUno = 0;

	int anio = 0;
	int mes = 0;
	int dia = 0;
	int anio2 = 0;
	int mes2 = 0;
	int dia2 = 0;

	cout << "Ingrese primer fecha\n";
	cin >> fechaEntera;
	cout << "Ingrese segunda fecha\n";
	cin >> fechaEntera2;
	anio = getAnio(fechaEntera);
	anio2 = getAnio(fechaEntera2);
	mes = getMes(fechaEntera, anio);
	mes2 = getMes(fechaEntera2, anio2);
	dia = getDia(anio, mes, fechaEntera);
	dia2 = getDia(anio2, mes2, fechaEntera2);

	condicionesParaVerificarMayorFecha(dia, mes, dia2, mes2, anio, anio2);
	
}

void condicionesParaVerificarMayorFecha(int dia, int mes, int dia2, int mes2, int anio, int anio2)
{
	if ((dia > 0 && dia < 31) && (mes> 0 && mes<12) && (dia2 > 0 && dia2 < 31) && (mes2 > 0 && mes2 < 12))
	{
		if (anio > anio2)
		{
			cout << "La primer fecha ingresada es mayor";

		}
		if (anio < anio2)
		{
			cout << "La segunda fecha ingresada es mayor";
		}
		else
		{
			if (anio == anio2 && mes > mes2)
			{
				cout << "La primer fecha ingresada es mayor";
			}
			if (anio == anio2 && mes < mes2)
			{
				cout << "La segunda fecha ingresada es mayor";
			}
			else
			{
				if (anio == anio2 && mes == mes2 && dia > dia2)
				{
					cout << "La primer fecha ingresada es mayor";
				}
				if (anio == anio2 && mes == mes2 && dia < dia2)
				{
					cout << "La segunda fecha ingresada es mayor";
				}
				if (anio == anio2 && mes == mes2 && dia == dia2)
				{
					cout << "Las fechas son exactamente iguales";
				}
			}
		}
	}
	else
		cout << "Los meses son del 1 al 12 y los dias del 1 al 30, verifique los datos ingresados";
}

int getAnio(int fechaAnio) {
	fechaAnio /= 10000;
	return fechaAnio;
}

int getMes(int fechaMes, int fechaAnio) {
	fechaAnio *= 10000;
	fechaMes -= fechaAnio;
	fechaMes /= 100;
	return fechaMes;
}

int getDia(int fechaAnio, int fechaMes, int fechaDia) {
	fechaAnio *= 10000;
	fechaMes *= 100;
	fechaDia = (fechaDia - fechaMes) - fechaAnio;
	return fechaDia;
}