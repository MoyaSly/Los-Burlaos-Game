#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "Structs.h"
#include "Voids.h"
#define COLOR {system("color 0D"); system("color 0B"); system("color 0C"); system("color 0F"); system("color 0A");}

using namespace std;

void Cojer(string cojer)
{

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
			cout << endl << "llevas el bolsiko lleno BURLAO" << endl;
	}
	else
	{
		cout << endl << "     - No puedes cojer eso" << endl;
	}
}

void Dejar(string dejar)
{
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
	else if (dejar == prota.obj3.nombre)
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
	else if (dejar == prota.obj4.nombre)
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
	else if (dejar == prota.obj5.nombre)
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
		Update();
		string orden;
		cout <<endl<<endl<< "     - Estas en " << mapa[x][y][z].nombre << endl;
		cout << "     - " << mapa[x][y][z].descripcion << endl;
		cout << "     - Que quieres hacer?" << endl;
		getline(cin, orden);

		if (orden == "cojer")																//COJER
		{
			string cojer;
			cout << "     - Que quieres cojer?" << endl;
			getline(cin, cojer);
			Cojer(cojer);
		}

		else if (orden == "dejar")																//DEJAR
		{
			string dejar;
			cout << "     - Que quieres dejar?" << endl;
			getline(cin, dejar);
			Dejar(dejar);
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
