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
	cout << "Norte: " << mapa[x][y--][z].nombre << ": " << mapa[x][y--][z].descripcion << endl;
	cout << "Sur: " << mapa[x][y++][z].nombre << ": " << mapa[x][y++][z].descripcion << endl;
	cout << "Oeste: " << mapa[x--][y][z].nombre << ": " << mapa[x--][y][z].descripcion << endl;
	cout << "Este: " << mapa[x++][y][z].nombre << ": " << mapa[x++][y][z].descripcion << endl;
	cout << "Arriba: " << mapa[x][y][z--].nombre << ": " << mapa[x][y][z--].descripcion << endl;
	cout << "Abajo: " << mapa[x][y][z++].nombre << ": " << mapa[x][y][z++].descripcion << endl;

	if (mapa[x][y][z].obj1.nombre != NULL || mapa[x][y][z].obj2.nombre != NULL)
		cout << "	- Creo que hay algun objeto: " << endl;
	else
		cout << "No hay ningun objeto" << endl;

	if (mapa[x][y][z].obj1.nombre != NULL)
		cout << "Objeto 1: " << mapa[x][y][z].obj1.nombre << ": " << mapa[x][y][z].obj1.descripcion << endl;
	if (mapa[x][y][z].obj2.nombre != NULL)
		cout << "Objeto 2: " << mapa[x][y][z].obj2.nombre << ": " << mapa[x][y][z].obj2.descripcion << endl;
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
	mapa[5][5][1].descripcion = "Esta todo lleno de humo, apenas se ve la luz de la bombilla, estan las llaves puestas en la puerta";
	mapa[5][5][1].nombre = "ENTRADA CASA DUDU";
	mapa[5][5][1].obj1.nombre = "llaves";
	mapa[5][5][1].obj1.descripcion = "hay 7 llaves, solo se que una es de la entrada, ya descubrire para que son las demas";


	mapa[4][5][1].descripcion = "El suelo esta lleno de colillas, hay una chustilla";
	mapa[4][5][1].nombre = "PASILLO CASA DUDU";
	mapa[4][5][1].obj1.nombre = "chustilla";
	mapa[4][5][1].obj1.descripcion = "Todavia le quedan 2 caladas";

	mapa[4][4][1].descripcion = "Esta la cama desecha y esta la gorra de DUDU";
	mapa[4][4][1].nombre = "HABITACION DUDU";
	mapa[4][4][1].obj1.nombre = "gorra DUDU";
	mapa[4][4][1].obj1.descripcion = "Esta un poco sucia, pero mola";

	mapa[4][6][1].descripcion = "Esta la television encendida y hay un plato de chicharrones en la mesa";
	mapa[4][6][1].nombre = "COMEDOR CASA DUDU";
	mapa[4][6][1].obj1.nombre = "plato de chicharrones";
	mapa[4][6][1].obj1.descripcion = "parece que sirve para monchis";


	mapa[3][5][1].descripcion = "En la encimera quedan sobras de carne salada, donde Guille es el mejor";
	mapa[3][5][1].nombre = "COCINA CASA DUDU";
	mapa[3][5][1].obj1.nombre = "carne salada";
	mapa[3][5][1].obj1.descripcion = "esta fria pero comestible";


	mapa[5][5][0].descripcion = "Parece el invernadero, es muy grande hay 10 armarios con 2 plantas dentro cada uno, hay un cogollo en el suelo";
	mapa[5][5][0].nombre = "ALTILLO CASA DUDU";
	mapa[5][5][0].obj1.nombre = "cogollo";
	mapa[5][5][0].obj1.descripcion = "aqui hay para hacer 4 porros";

	mapa[5][5][2].descripcion = "Hay un billar y una mesa de ping-pong";
	mapa[5][5][2].nombre = "SOTANO CASA DUDU";
	mapa[5][5][2].obj1.nombre = "taco de billar";
	mapa[5][5][2].obj1.descripcion = "mide 1 metro y medio mas o menos";
	mapa[5][5][2].obj2.nombre = "pala de ping-pong";
	mapa[5][5][2].obj2.descripcion = "tiene un lado rugoso y uno liso";
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
		cout <<endl<<endl<< "     - Estas en " << mapa[x][y][z].nombre << endl;
		cout << "     - " << mapa[x][y][z].descripcion << endl;
		cout << "Que quieres hacer?" << endl;
		getline(cin, orden);

		if (orden == "cojer")																//COJER
		{
			string cojer;
			cout << "     - Que quieres cojer?" << endl;
			getline(cin, cojer);
			if (cojer == mapa[x][y][z].obj1.nombre)
			{
				if (prota.obj1.nombre == NULL)
				{
					prota.obj1.nombre = mapa[x][y][z].obj1.nombre;
					prota.obj1.descripcion = mapa[x][y][z].obj1.descripcion;
					mapa[x][y][z].obj1.nombre = NULL;
					mapa[x][y][z].obj1.descripcion = NULL;
					cout << endl << "has cogido " << prota.obj1.nombre << endl;
				}
				else if (prota.obj2.nombre == NULL)
				{
					prota.obj2.nombre = mapa[x][y][z].obj1.nombre;
					prota.obj2.descripcion = mapa[x][y][z].obj1.descripcion;
					mapa[x][y][z].obj1.nombre = NULL;
					mapa[x][y][z].obj1.descripcion = NULL;
					cout << endl << "has cogido " << prota.obj2.nombre << endl;
				}
				else if (prota.obj3.nombre == NULL)
				{
					prota.obj3.nombre = mapa[x][y][z].obj1.nombre;
					prota.obj3.descripcion = mapa[x][y][z].obj1.descripcion;
					mapa[x][y][z].obj1.nombre = NULL;
					mapa[x][y][z].obj1.descripcion = NULL;
					cout << endl << "has cogido " << prota.obj3.nombre << endl;
				}
				else if (prota.obj4.nombre == NULL)
				{
					prota.obj4.nombre = mapa[x][y][z].obj1.nombre;
					prota.obj4.descripcion = mapa[x][y][z].obj1.descripcion;
					mapa[x][y][z].obj1.nombre = NULL;
					mapa[x][y][z].obj1.descripcion = NULL;
					cout << endl << "has cogido " << prota.obj4.nombre << endl;
				}
				else if (prota.obj5.nombre == NULL)
				{
					prota.obj5.nombre = mapa[x][y][z].obj1.nombre;
					prota.obj5.descripcion = mapa[x][y][z].obj1.descripcion;
					mapa[x][y][z].obj1.nombre = NULL;
					mapa[x][y][z].obj1.descripcion = NULL;
					cout << endl << "has cogido " << prota.obj5.nombre << endl;
				}	

				else
				{
					cout << endl << "llevas el bolsiko lleno BURLAO" << endl;
				}
			
			}

			else if (cojer == mapa[x][y][z].obj2.nombre)
			{
				if (prota.obj1.nombre == NULL)
				{
					prota.obj1.nombre = mapa[x][y][z].obj2.nombre;
					prota.obj1.descripcion = mapa[x][y][z].obj2.descripcion;
					mapa[x][y][z].obj2.nombre = NULL;
					mapa[x][y][z].obj2.descripcion = NULL;
					cout << endl << "has cogido " << prota.obj1.nombre << endl;
				}
				else if (prota.obj2.nombre == NULL)
				{
					prota.obj2.nombre = mapa[x][y][z].obj2.nombre;
					prota.obj2.descripcion = mapa[x][y][z].obj2.descripcion;
					mapa[x][y][z].obj2.nombre = NULL;
					mapa[x][y][z].obj2.descripcion = NULL;
					cout << endl << "has cogido " << prota.obj2.nombre << endl;
				}
				else if (prota.obj3.nombre == NULL)
				{
					prota.obj3.nombre = mapa[x][y][z].obj2.nombre;
					prota.obj3.descripcion = mapa[x][y][z].obj2.descripcion;
					mapa[x][y][z].obj2.nombre = NULL;
					mapa[x][y][z].obj2.descripcion = NULL;
					cout << endl << "has cogido " << prota.obj3.nombre << endl;
				}
				else if (prota.obj4.nombre == NULL)
				{
					prota.obj4.nombre = mapa[x][y][z].obj2.nombre;
					prota.obj4.descripcion = mapa[x][y][z].obj2.descripcion;
					mapa[x][y][z].obj2.nombre = NULL;
					mapa[x][y][z].obj2.descripcion = NULL;
					cout << endl << "has cogido " << prota.obj4.nombre << endl;
				}
				else if (prota.obj5.nombre == NULL)
				{
					prota.obj5.nombre = mapa[x][y][z].obj2.nombre;
					prota.obj5.descripcion = mapa[x][y][z].obj2.descripcion;
					mapa[x][y][z].obj2.nombre = NULL;
					mapa[x][y][z].obj2.descripcion = NULL;
					cout << endl << "has cogido " << prota.obj5.nombre << endl;
				}
				
				else
				{
					cout << endl << "llevas el bolsiko lleno BURLAO" << endl;
				}
			}
		}

		else if (orden == "dejar")																//DEJAR
		{
			string dejar;
			cout << "     - Que quieres dejar?" << endl;
			getline(cin, dejar);
			if (dejar == prota.obj1.nombre)
			{
				if (mapa[x][y][z].obj1.nombre == NULL)
				{
					mapa[x][y][z].obj1.nombre = prota.obj1.nombre;
					mapa[x][y][z].obj1.descripcion = prota.obj1.descripcion;
					prota.obj1.nombre = NULL;
					prota.obj1.descripcion = NULL;
					cout << endl << "has dejado " << mapa[x][y][z].obj1.nombre << endl;
				}

				else if (mapa[x][y][z].obj2.nombre == NULL)
				{
					mapa[x][y][z].obj2.nombre = prota.obj1.nombre;
					mapa[x][y][z].obj2.descripcion = prota.obj1.descripcion;
					prota.obj1.nombre = NULL;
					prota.obj1.descripcion = NULL;
					cout << endl << "has dejado " << mapa[x][y][z].obj2.nombre << endl;
				}

				else
				{
					cout << endl << "aqui no puedes dejar nada BURLAO" << endl;
				}
			}
			else if (dejar == prota.obj2.nombre)
			{
				if (mapa[x][y][z].obj1.nombre == NULL)
				{
					mapa[x][y][z].obj1.nombre = prota.obj2.nombre;
					mapa[x][y][z].obj1.descripcion = prota.obj2.descripcion;
					prota.obj2.nombre = NULL;
					prota.obj2.descripcion = NULL;
					cout << endl << "has dejado " << mapa[x][y][z].obj1.nombre << endl;
				}

				else if (mapa[x][y][z].obj2.nombre == NULL)
				{
					mapa[x][y][z].obj2.nombre = prota.obj2.nombre;
					mapa[x][y][z].obj2.descripcion = prota.obj2.descripcion;
					prota.obj2.nombre = NULL;
					prota.obj2.descripcion = NULL;
					cout << endl << "has dejado " << mapa[x][y][z].obj2.nombre << endl;
				}

				else
				{
					cout << endl << "aqui no puedes dejar nada BURLAO" << endl;
				}
			}
			else if(dejar == prota.obj3.nombre)
			{
				if (mapa[x][y][z].obj1.nombre == NULL)
				{
					mapa[x][y][z].obj1.nombre = prota.obj3.nombre;
					mapa[x][y][z].obj1.descripcion = prota.obj3.descripcion;
					prota.obj3.nombre = NULL;
					prota.obj3.descripcion = NULL;
					cout << endl << "has dejado " << mapa[x][y][z].obj1.nombre << endl;
				}

				else if (mapa[x][y][z].obj2.nombre == NULL)
				{
					mapa[x][y][z].obj2.nombre = prota.obj3.nombre;
					mapa[x][y][z].obj2.descripcion = prota.obj3.descripcion;
					prota.obj3.nombre = NULL;
					prota.obj3.descripcion = NULL;
					cout << endl << "has dejado " << mapa[x][y][z].obj2.nombre << endl;
				}

				else
				{
					cout << endl << "aqui no puedes dejar nada BURLAO" << endl;
				}
			}
			else if(dejar == prota.obj4.nombre)
			{
				if (mapa[x][y][z].obj1.nombre == NULL)
				{
					mapa[x][y][z].obj1.nombre = prota.obj4.nombre;
					mapa[x][y][z].obj1.descripcion = prota.obj4.descripcion;
					prota.obj4.nombre = NULL;
					prota.obj4.descripcion = NULL;
					cout << endl << "has dejado " << mapa[x][y][z].obj1.nombre << endl;
				}

				else if (mapa[x][y][z].obj2.nombre == NULL)
				{
					mapa[x][y][z].obj2.nombre = prota.obj4.nombre;
					mapa[x][y][z].obj2.descripcion = prota.obj4.descripcion;
					prota.obj4.nombre = NULL;
					prota.obj4.descripcion = NULL;
					cout << endl << "has dejado " << mapa[x][y][z].obj2.nombre << endl;
				}

				else
				{
					cout << endl << "aqui no puedes dejar nada BURLAO" << endl;
				}
			}
			else if(dejar == prota.obj5.nombre)
			{
				if (mapa[x][y][z].obj1.nombre == NULL)
				{
					mapa[x][y][z].obj1.nombre = prota.obj5.nombre;
					mapa[x][y][z].obj1.descripcion = prota.obj5.descripcion;
					prota.obj5.nombre = NULL;
					prota.obj5.descripcion = NULL;
					cout << endl << "has dejado " << mapa[x][y][z].obj1.nombre << endl;
				}

				else if (mapa[x][y][z].obj2.nombre == NULL)
				{
					mapa[x][y][z].obj2.nombre = prota.obj5.nombre;
					mapa[x][y][z].obj2.descripcion = prota.obj5.descripcion;
					prota.obj5.nombre = NULL;
					prota.obj5.descripcion = NULL;
					cout << endl << "has dejado " << mapa[x][y][z].obj2.nombre << endl;
				}

				else
				{
					cout << endl << "aqui no puedes dejar nada BURLAO" << endl;
				}
			}
			else
				cout << endl << "no llevas nada de esto BURLAO" << endl;
		}

		else if (orden == "ver")
		{
			Look();																				//LOOK
		}

		else if (orden == "inventario")														//LOOK INVENTARIO
		{
			if (prota.obj1.nombre)
				cout << endl << "objeto 1: " << prota.obj1.nombre;	
			if (prota.obj2.nombre)
				cout << endl << "objeto 2: " << prota.obj2.nombre;
			if (prota.obj3.nombre)
				cout << endl << "objeto 3: " << prota.obj3.nombre;
			if (prota.obj4.nombre)
				cout << endl << "objeto 4: " << prota.obj4.nombre;
			if (prota.obj5.nombre)
				cout << endl << "objeto 5: " << prota.obj5.nombre;
			if (!prota.obj1.nombre && !prota.obj2.nombre && !prota.obj3.nombre && !prota.obj4.nombre && !prota.obj5.nombre)
				cout << endl << "no llevas nada en tu bolsiko";
		}

		else if (orden == "norte" || orden == "ir al norte" || orden == "ir norte")
			--y;

		else if (orden == "sur" || orden == "ir al sur" || orden == "ir sur")
			++y;

		else if (orden == "este" || orden == "ir al este" || orden == "ir este")
			++x;

		else if (orden == "oeste" || orden == "ir al oeste" || orden == "ir oeste")
			--x;

		else if (orden == "subir" || orden == "ir arriba")
			--z;

		else if (orden == "bajar" || orden == "ir abajo")
			++z;

		else if (orden == "adios burlaos" || orden == "adios" || orden == "Adios")
		{
			cout << endl << endl << "     - Adios macho, nos pegaremos un bailesiko en tu honor por aver jugao a LOS BURLAOS" << endl;
			COLOR
			end = true;
		}

		else
			cout << "     - Que hablas BURLAO?" << endl;
	}
	system("pause");
}
