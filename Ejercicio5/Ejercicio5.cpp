/* EJERCICIO 5
Se ingresa un número con el formato YYYYMMDD. A partir de ese número mostrar el año (YYYY), el mes (MM) y el día (DD).

*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int getAnio(int fechaAnio);
int getMes(int fechaMes, int fechaAnio);
int getDia(int fechaAnio, int fechaMes, int fechaDia);

int main()
{
	int fechaEntera = 0;
	int anio = 0;
	int mes = 0;
	int dia = 0;

	cout << "Ingrese una fecha\n";
	cin >> fechaEntera;
	anio = getAnio(fechaEntera);
	mes = getMes(fechaEntera, anio);
	dia = getDia(anio, mes, fechaEntera);

	if ((mes > 0 && mes < 13) && (dia > 0 && dia <= 30))
	{
		cout << "El año es: " << anio << endl;
		cout << "El mes es: " << mes << endl;
		cout << "El dia es: " << dia << endl;
	}
	else
		cout << "El mes debe ser del 1 al 12 y el dia del 1 al 30, verifique los datos ingresados";
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