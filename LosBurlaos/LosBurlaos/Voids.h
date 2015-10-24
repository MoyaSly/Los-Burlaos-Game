#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

#ifndef __VOIDS__
#define __VOIDS__
#include "Globals.h"
void Look()
{
	cout << "Norte: " << mapa[x][y-1][z].nombre << ": " << mapa[x][y-1][z].descripcion << endl;
	cout << "Sur: " << mapa[x][y+1][z].nombre << ": " << mapa[x][y+1][z].descripcion << endl;
	cout << "Oeste: " << mapa[x-1][y][z].nombre << ": " << mapa[x-1][y][z].descripcion << endl;
	cout << "Este: " << mapa[x+1][y][z].nombre << ": " << mapa[x+1][y][z].descripcion << endl;
	cout << "Arriba: " << mapa[x][y][z-1].nombre << ": " << mapa[x][y][z-1].descripcion << endl;
	cout << "Abajo: " << mapa[x][y][z+1].nombre << ": " << mapa[x][y][z+1].descripcion << endl;

	if (mapa[x][y][z].obj1.nombre != NULL || mapa[x][y][z].obj2.nombre != NULL)
		cout << "	- Creo que hay algun objeto: " << endl;
	else
		cout << "No hay ningun objeto" << endl;

	if (mapa[x][y][z].obj1.nombre != NULL)
		cout << "Objeto 1: " << mapa[x][y][z].obj1.nombre << ": " << mapa[x][y][z].obj1.descripcion << endl;
	if (mapa[x][y][z].obj2.nombre != NULL)
		cout << "Objeto 2: " << mapa[x][y][z].obj2.nombre << ": " << mapa[x][y][z].obj2.descripcion << endl;
};

void Update()
{
	if (mapa[5][5][1].obj1.nombre != NULL)
		mapa[5][5][1].descripcion = "Esta todo lleno de humo, apenas se ve la luz de la bombilla, estan las llaves puestas en la puerta";
	else
		mapa[5][5][1].descripcion = "Esta todo lleno de humo, apenas se ve la luz de la bombilla.";
	//-----------------------------------------------------------------------------------------------------------------------------------	

	if (mapa[4][5][1].obj1.nombre != NULL)
		mapa[4][5][1].descripcion = "El suelo esta lleno de colillas, hay una chustilla";
	else
		mapa[4][5][1].descripcion = "El suelo esta lleno de colillas.";
	//-----------------------------------------------------------------------------------------------------------------------------------

	if (mapa[4][4][1].obj1.nombre != NULL)
		mapa[4][4][1].descripcion = "Esta la cama desecha y esta la gorra de DUDU";
	else
		mapa[4][4][1].descripcion = "Esta la cama desecha.";
	//-----------------------------------------------------------------------------------------------------------------------------------	

	if (mapa[4][6][1].obj1.nombre != NULL)
		mapa[4][6][1].descripcion = "Esta la television encendida y hay un plato de chicharrones en la mesa";
	else
		mapa[4][6][1].descripcion = "Esta la television encendida.";
	//-----------------------------------------------------------------------------------------------------------------------------------	

	if (mapa[3][5][1].obj1.nombre != NULL)
		mapa[3][5][1].descripcion = "En la encimera quedan sobras de carne salada, donde Guille es el mejor";
	else
		mapa[3][5][1].descripcion = "En la encimera esta sucia.";
	//-----------------------------------------------------------------------------------------------------------------------------------	

	if (mapa[5][5][0].obj1.nombre != NULL)
		mapa[5][5][0].descripcion = "Parece el invernadero, es muy grande hay 10 armarios con 2 plantas dentro cada uno, hay un cogollo en el suelo";
	else
		mapa[5][5][0].descripcion = "Parece el invernadero, es muy grande hay 10 armarios con 2 plantas dentro cada uno.";
	//-----------------------------------------------------------------------------------------------------------------------------------	


}
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
				else if (eje_z == 1)
				{
					mapa[eje_x][eje_y][eje_z].nombre = "CALLE";
					mapa[eje_x][eje_y][eje_z].descripcion = "Es de noche y las farolas dan muy poca luz";
				}
				else if (eje_z == 2)
				{
					mapa[eje_x][eje_y][eje_z].nombre = "CIELO";
					mapa[eje_x][eje_y][eje_z].descripcion = "Todo es verde (O.o)";
				}

			}
		}
	}

	mapa[5][5][1].nombre = "ENTRADA CASA DUDU";
	mapa[5][5][1].obj1.nombre = "llaves";
	mapa[5][5][1].obj1.descripcion = "hay 7 llaves, solo se que una es de la entrada, ya descubrire para que son las demas";
	//-----------------------------------------------------------------------------------------------------------------------------------	

	mapa[4][5][1].nombre = "PASILLO CASA DUDU";
	mapa[4][5][1].obj1.nombre = "chustilla";
	mapa[4][5][1].obj1.descripcion = "Todavia le quedan 2 caladas";
	//-----------------------------------------------------------------------------------------------------------------------------------	

	mapa[4][4][1].nombre = "HABITACION DUDU";
	mapa[4][4][1].obj1.nombre = "gorra DUDU";
	mapa[4][4][1].obj1.descripcion = "Esta un poco sucia, pero mola";
	//-----------------------------------------------------------------------------------------------------------------------------------	

	mapa[4][6][1].nombre = "COMEDOR CASA DUDU";
	mapa[4][6][1].obj1.nombre = "plato de chicharrones";
	mapa[4][6][1].obj1.descripcion = "parece que sirve para monchis";
	//-----------------------------------------------------------------------------------------------------------------------------------	

	mapa[3][5][1].nombre = "COCINA CASA DUDU";
	mapa[3][5][1].obj1.nombre = "carne salada";
	mapa[3][5][1].obj1.descripcion = "esta fria pero comestible";
	//-----------------------------------------------------------------------------------------------------------------------------------	

	mapa[5][5][0].nombre = "ALTILLO CASA DUDU";
	mapa[5][5][0].obj1.nombre = "cogollo";
	mapa[5][5][0].obj1.descripcion = "aqui hay para hacer 4 porros";
	//-----------------------------------------------------------------------------------------------------------------------------------	

	mapa[5][5][2].descripcion = "Hay un billar y una mesa de ping-pong";
	mapa[5][5][2].nombre = "SOTANO CASA DUDU";
	mapa[5][5][2].obj1.nombre = "taco de billar";
	mapa[5][5][2].obj1.descripcion = "mide 1 metro y medio mas o menos";
	mapa[5][5][2].obj2.nombre = "pala de ping-pong";
	mapa[5][5][2].obj2.descripcion = "tiene un lado rugoso y uno liso";
}



#endif