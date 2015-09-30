#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define COLOR {system("color 0D"); system("color 0B"); system("color 0C"); system("color 0F"); system("color 0A");}

using namespace std;


enum direccion
{
	NORTE,
	SUR,
	ESTE,
	OESTE,
	SUBIR,
	BAJAR
};

struct Zone
{
	string nombre;
	string descripcion;
	string descripcion_norte;
	string descripcion_sur;
	string descripcion_este;
	string descripcion_oeste;
	string descripcion_arriba;
	string descripcion_abajo;
};



void Init()
{
	Zone mapa[10][10][3];

	mapa[5][5][1].descripcion = "Esta todo lleno de humo, apenas se ve la luz de la bombilla";
	mapa[5][5][1].nombre = "ENTRADA CASA DUDU";

	mapa[4][5][1].descripcion = "";
	mapa[4][5][1].nombre = "PASILLO CASA DUDU";

	mapa[4][4][1].descripcion = "Esta todo lleno de humo, apenas se ve la luz que entra por la ventana del fondo del pasillo";
	mapa[4][4][1].nombre = "HABITACION DUDU";

	mapa[4][6][1].descripcion = "Esta todo lleno de humo, apenas se ve la luz que entra por la ventana del fondo del pasillo";
	mapa[4][6][1].nombre = "COMEDOR CASA DUDU";

	mapa[3][5][1].descripcion = "Esta todo lleno de humo, apenas se ve la luz que entra por la ventana del fondo del pasillo";
	mapa[3][5][1].nombre = "COCINA CASA DUDU";
}


int main()
{
	bool end = false;
	int x = 2;
	int y = 2;

	cout << "TE RECIBIMOS CON UN PORRO DE PARTE DE LOS BURLAOS" << endl;
	cout << "PARA SALIR DESPIDETE DILES ADIOS BURLAOS" << endl;

	while (!end)
	{
		COLOR
		string orden;
		cout << "Estas en " << map[x][y] << endl;
		cout << "¿En que direccion quieres ir?" << endl;
		getline(cin, orden);

		if (orden == "adios burlaos")
		{
			cout << "Adios macho, nos pegaremos un bailesiko en tu honor por aver jugao a LOS BURLAOS" << endl;
			COLOR
			end = true;
		}

		else
			cout << "Estas demasiao BURLAO como para moverte" << endl;
	}
	system("pause");
}