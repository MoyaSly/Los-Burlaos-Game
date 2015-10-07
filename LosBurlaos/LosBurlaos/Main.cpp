#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "Structs.h"
#define COLOR {system("color 0D"); system("color 0B"); system("color 0C"); system("color 0F"); system("color 0A");}

using namespace std;

Zone mapa[10][10][3];
Jugador prota;
int x;
int y;
int z;

enum direccion
{
	NORTE,
	SUR,
	ESTE,
	OESTE,
	SUBIR,
	BAJAR
};

void Look()
{
	cout << "Norte: " << mapa[x][--y][z].nombre << ": " << mapa[x][--y][z].descripcion << endl;;
	cout << "Sur: " << mapa[x][++y][z].nombre << ": " << mapa[x][++y][z].descripcion << endl;;
	cout << "Oeste: " << mapa[++x][y][z].nombre << ": " << mapa[++x][y][z].descripcion << endl;;
	cout << "Este: " << mapa[--x][y][z].nombre << ": " << mapa[--x][y][z].descripcion << endl;;
	cout << "Arriba: " << mapa[x][y][++z].nombre << ": " << mapa[x][y][++z].descripcion << endl;;
	cout << "Abajo: " << mapa[x][y][--z].nombre << ": " << mapa[x][y][--z].descripcion << endl;;
};

void Init()
{

	for (int eje_z = 0; eje_z < 3; ++eje_z)
	{
		for (int eje_x = 0; eje_x < 10; ++eje_x)
		{
			for (int eje_y = 0; eje_y < 10; ++eje_y)
			{
				if (eje_z == 0)
				{
				mapa[eje_x][eje_y][eje_z].nombre = "CLOACA";
				mapa[eje_x][eje_y][eje_z].descripcion = "Esta todo mojado y lleno ratas";
				}
				if (eje_z == 1)
				{
					mapa[eje_x][eje_y][eje_z].nombre = "CALLE";
					mapa[eje_x][eje_y][eje_z].descripcion = "Es de noche y las farolas dan muy poca luz";
				}
				if (eje_z == 2)
				{
					mapa[eje_x][eje_y][eje_z].nombre = "CIELO";
					mapa[eje_x][eje_y][eje_z].descripcion = "Todo es verde (O.o)";
				}

			}
		}
	}
	mapa[5][5][1].descripcion = "Esta todo lleno de humo, apenas se ve la luz de la bombilla";
	mapa[5][5][1].nombre = "ENTRADA CASA DUDU";

	mapa[4][5][1].descripcion = "El suelo esta lleno de colillas, hay una chustilla";
	mapa[4][5][1].nombre = "PASILLO CASA DUDU";
	mapa[4][5][1].obj1.nombre = "chustilla";
	mapa[4][5][1].obj1.descripcion = "Todavia le quedan 2 caladas";

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
	x = y = 5;
	z = 1;
	
	Init();
	cout << "TE RECIBIMOS CON UN PORRO DE PARTE DE LOS BURLAOS" << endl;
	cout << "PARA SALIR DESPIDETE DILES ADIOS BURLAOS" << endl;

	while (!end)
	{
		string orden;
		cout << "     - Estas en " << mapa[x][y][z].nombre << endl;
		cout << "     - " << mapa[x][y][z].descripcion << endl;
		cout << "¿En que direccion quieres ir?" << endl;
		getline(cin, orden);

		if (orden == "cojer")
		{
			string cojer;
			cout << "     - ¿Que quieres cojer?" << endl;
			getline(cin, cojer);
			if (cojer == mapa[x][y][z].obj1.nombre)
			{
				prota.obj1.nombre = mapa[x][y][z].obj1.nombre;
				prota.obj1.descripcion = mapa[x][y][z].obj1.descripcion;
				mapa[x][y][z].obj1.nombre = NULL;
				mapa[x][y][z].obj1.descripcion = NULL;
			}
		}

		if (orden == "ver")
		{
			Look(); //PETA
		}

		if (orden == "norte")
			--y;

		else if (orden == "sur")
			++y;

		else if (orden == "este")
			++x;

		else if (orden == "oeste")
			--x;

		else if (orden == "arriba")
			++z;

		else if (orden == "abajo")
			--z;

		else if (orden == "adios burlaos")
		{
			cout << endl << endl << "     - Adios macho, nos pegaremos un bailesiko en tu honor por aver jugao a            LOS BURLAOS" << endl;
			COLOR
			end = true;
		}

		else
			cout << "     - ¿Que hablas BURLAO?" << endl;
	}
	system("pause");
}
