#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x = 2;
	int y = 2;
	/*enum dir
	{
	NORTE,
	SUR,
	ESTE,
	OESTE,
	SUBIR,
	BAJAR,
	ADIOS
	};*/
	char* map[5][5] =
	{ "LA CALLE", "LA CALLE", "LA CALLE", "LA CALLE", "LA CALLE",
	"LA CALLE", "LA CALLE", "LA CALLE", "LA CALLE", "LA CALLE",
	"LA CALLE", "LA CALLE", "CASA DE DUDU", "LA CALLE", "LA CALLE",
	"LA CALLE", "LA CALLE", "LA CALLE", "LA CALLE", "LA CALLE",
	"LA CALLE", "LA CALLE", "LA CALLE", "LA CALLE", "LA CALLE"
	};

	bool end = false;
	cout << "TE RECIBIMOS CON UN PORRO DE PARTE DE LOS BURLAOS" << endl;
	cout << "PARA SALIR DESPIDETE DILES ADIOS BURLAOS" << endl;

	while (!end)
	{
		string orden;
		cout << "Estas en " << map[x][y] << endl;
		cout << "¿En que direccion quieres ir?" << endl;
		getline(cin, orden);

		if (orden == "adios burlaos")
		{
			cout << "Adios macho, nos pegaremos un bailesiko en tu honor por aver jugao a LOS BURLAOS" << endl;
			end = true;
		}

		else
			cout << "Estas demasiao BURLAO como para moverte" << endl;
	}

	system("pause");
}