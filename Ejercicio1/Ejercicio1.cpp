/* EJERCICIO 1 */
#include <iostream>
#include <sstream>
using namespace std;
const int cantidadmaxima = 10;

int main()
{
	int diezvalores[cantidadmaxima];
	int menornumero = 0;

	for (int i = 0; i < cantidadmaxima; i++)
	{
		cout << "Ingrese un numero\n";
		cin >> diezvalores[i];
		if (diezvalores[i] > menornumero)
		{
			menornumero = diezvalores[i];
		}
	}
	cout << "el numero mayor es: " << menornumero;
}