#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "Structs.h"
#include "String.h"
#include "Defs.h"
#include "Voids.h"
#include <windows.h>

#define COLOR {system("color 4D"); system("color 2B"); system("color 3C"); system("color 6F"); system("color 1A");}

using namespace std;

void Cojer(String cojer)
{

	if (cojer == mapa[x][y][z].obj1.nombre)
	{
		if (prota.obj1.nombre == "\0")
		{
			prota.obj1.nombre = mapa[x][y][z].obj1.nombre;
			prota.obj1.descripcion = mapa[x][y][z].obj1.descripcion;
			mapa[x][y][z].obj1.nombre = "\0";
			mapa[x][y][z].obj1.descripcion = "\0";
			cout << endl << "has cogido " << prota.obj1.nombre << endl;
		}
		else if (prota.obj2.nombre == "\0")
		{
			prota.obj2.nombre = mapa[x][y][z].obj1.nombre;
			prota.obj2.descripcion = mapa[x][y][z].obj1.descripcion;
			mapa[x][y][z].obj1.nombre = "\0";
			mapa[x][y][z].obj1.descripcion = "\0";
			cout << endl << "has cogido " << prota.obj2.nombre << endl;
		}
		else if (prota.obj3.nombre == "\0")
		{
			prota.obj3.nombre = mapa[x][y][z].obj1.nombre;
			prota.obj3.descripcion = mapa[x][y][z].obj1.descripcion;
			mapa[x][y][z].obj1.nombre = "\0";
			mapa[x][y][z].obj1.descripcion = "\0";
			cout << endl << "has cogido " << prota.obj3.nombre << endl;
		}
		else if (prota.obj4.nombre == "\0")
		{
			prota.obj4.nombre = mapa[x][y][z].obj1.nombre;
			prota.obj4.descripcion = mapa[x][y][z].obj1.descripcion;
			mapa[x][y][z].obj1.nombre = "\0";
			mapa[x][y][z].obj1.descripcion = "\0";
			cout << endl << "has cogido " << prota.obj4.nombre << endl;
		}
		else if (prota.obj5.nombre == "\0")
		{
			prota.obj5.nombre = mapa[x][y][z].obj1.nombre;
			prota.obj5.descripcion = mapa[x][y][z].obj1.descripcion;
			mapa[x][y][z].obj1.nombre = "\0";
			mapa[x][y][z].obj1.descripcion = "\0";
			cout << endl << "has cogido " << prota.obj5.nombre << endl;
		}

		else
		{
			cout << endl << "llevas el bolsiko lleno BURLAO" << endl;
		}
		// ORDENAR OBJETOS 
		if (mapa[x][y][z].obj1.nombre == "\0" && mapa[x][y][z].obj2.nombre != "\0")
		{
			mapa[x][y][z].obj1 = mapa[x][y][z].obj2;
			mapa[x][y][z].obj2.nombre = "\0";
			mapa[x][y][z].obj2.descripcion = "\0";
		}

	}

	else if (cojer == mapa[x][y][z].obj2.nombre)
	{
		if (prota.obj1.nombre == "\0")
		{
			prota.obj1.nombre = mapa[x][y][z].obj2.nombre;
			prota.obj1.descripcion = mapa[x][y][z].obj2.descripcion;
			mapa[x][y][z].obj2.nombre = "\0";
			mapa[x][y][z].obj2.descripcion = "\0";
			cout << endl << "has cogido " << prota.obj1.nombre << endl;
		}
		else if (prota.obj2.nombre == "\0")
		{
			prota.obj2.nombre = mapa[x][y][z].obj2.nombre;
			prota.obj2.descripcion = mapa[x][y][z].obj2.descripcion;
			mapa[x][y][z].obj2.nombre = "\0";
			mapa[x][y][z].obj2.descripcion = "\0";
			cout << endl << "has cogido " << prota.obj2.nombre << endl;
		}
		else if (prota.obj3.nombre == "\0")
		{
			prota.obj3.nombre = mapa[x][y][z].obj2.nombre;
			prota.obj3.descripcion = mapa[x][y][z].obj2.descripcion;
			mapa[x][y][z].obj2.nombre = "\0";
			mapa[x][y][z].obj2.descripcion = "\0";
			cout << endl << "has cogido " << prota.obj3.nombre << endl;
		}
		else if (prota.obj4.nombre == "\0")
		{
			prota.obj4.nombre = mapa[x][y][z].obj2.nombre;
			prota.obj4.descripcion = mapa[x][y][z].obj2.descripcion;
			mapa[x][y][z].obj2.nombre = "\0";
			mapa[x][y][z].obj2.descripcion = "\0";
			cout << endl << "has cogido " << prota.obj4.nombre << endl;
		}
		else if (prota.obj5.nombre == "\0")
		{
			prota.obj5.nombre = mapa[x][y][z].obj2.nombre;
			prota.obj5.descripcion = mapa[x][y][z].obj2.descripcion;
			mapa[x][y][z].obj2.nombre = "\0";
			mapa[x][y][z].obj2.descripcion = "\0";
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

void Dejar(String dejar)
{
	if (dejar == prota.obj1.nombre)
	{
		if (mapa[x][y][z].obj1.nombre == "\0")
		{
			mapa[x][y][z].obj1.nombre = prota.obj1.nombre;
			mapa[x][y][z].obj1.descripcion = prota.obj1.descripcion;
			prota.obj1.nombre = "\0";
			prota.obj1.descripcion = "\0";
			cout << endl << "has dejado " << mapa[x][y][z].obj1.nombre << endl;
		}

		else if (mapa[x][y][z].obj2.nombre == "\0")
		{
			mapa[x][y][z].obj2.nombre = prota.obj1.nombre;
			mapa[x][y][z].obj2.descripcion = prota.obj1.descripcion;
			prota.obj1.nombre = "\0";
			prota.obj1.descripcion = "\0";
			cout << endl << "has dejado " << mapa[x][y][z].obj2.nombre << endl;
		}

		else
		{
			cout << endl << "aqui no puedes dejar nada BURLAO" << endl;
		}
	}
	else if (dejar == prota.obj2.nombre)
	{
		if (mapa[x][y][z].obj1.nombre == "\0")
		{
			mapa[x][y][z].obj1.nombre = prota.obj2.nombre;
			mapa[x][y][z].obj1.descripcion = prota.obj2.descripcion;
			prota.obj2.nombre = "\0";
			prota.obj2.descripcion = "\0";
			cout << endl << "has dejado " << mapa[x][y][z].obj1.nombre << endl;
		}

		else if (mapa[x][y][z].obj2.nombre == "\0")
		{
			mapa[x][y][z].obj2.nombre = prota.obj2.nombre;
			mapa[x][y][z].obj2.descripcion = prota.obj2.descripcion;
			prota.obj2.nombre = "\0";
			prota.obj2.descripcion = "\0";
			cout << endl << "has dejado " << mapa[x][y][z].obj2.nombre << endl;
		}

		else
		{
			cout << endl << "aqui no puedes dejar nada BURLAO" << endl;
		}
	}
	else if (dejar == prota.obj3.nombre)
	{
		if (mapa[x][y][z].obj1.nombre == "\0")
		{
			mapa[x][y][z].obj1.nombre = prota.obj3.nombre;
			mapa[x][y][z].obj1.descripcion = prota.obj3.descripcion;
			prota.obj3.nombre = "\0";
			prota.obj3.descripcion = "\0";
			cout << endl << "has dejado " << mapa[x][y][z].obj1.nombre << endl;
		}

		else if (mapa[x][y][z].obj2.nombre == "\0")
		{
			mapa[x][y][z].obj2.nombre = prota.obj3.nombre;
			mapa[x][y][z].obj2.descripcion = prota.obj3.descripcion;
			prota.obj3.nombre = "\0";
			prota.obj3.descripcion = "\0";
			cout << endl << "has dejado " << mapa[x][y][z].obj2.nombre << endl;
		}

		else
		{
			cout << endl << "aqui no puedes dejar nada BURLAO" << endl;
		}
	}
	else if (dejar == prota.obj4.nombre)
	{
		if (mapa[x][y][z].obj1.nombre == "\0")
		{
			mapa[x][y][z].obj1.nombre = prota.obj4.nombre;
			mapa[x][y][z].obj1.descripcion = prota.obj4.descripcion;
			prota.obj4.nombre = "\0";
			prota.obj4.descripcion = "\0";
			cout << endl << "has dejado " << mapa[x][y][z].obj1.nombre << endl;
		}

		else if (mapa[x][y][z].obj2.nombre == "\0")
		{
			mapa[x][y][z].obj2.nombre = prota.obj4.nombre;
			mapa[x][y][z].obj2.descripcion = prota.obj4.descripcion;
			prota.obj4.nombre = "\0";
			prota.obj4.descripcion = "\0";
			cout << endl << "has dejado " << mapa[x][y][z].obj2.nombre << endl;
		}

		else
		{
			cout << endl << "aqui no puedes dejar nada BURLAO" << endl;
		}
	}
	else if (dejar == prota.obj5.nombre)
	{
		if (mapa[x][y][z].obj1.nombre == "\0")
		{
			mapa[x][y][z].obj1.nombre = prota.obj5.nombre;
			mapa[x][y][z].obj1.descripcion = prota.obj5.descripcion;
			prota.obj5.nombre = "\0";
			prota.obj5.descripcion = "\0";
			cout << endl << "has dejado " << mapa[x][y][z].obj1.nombre << endl;
		}

		else if (mapa[x][y][z].obj2.nombre == "\0")
		{
			mapa[x][y][z].obj2.nombre = prota.obj5.nombre;
			mapa[x][y][z].obj2.descripcion = prota.obj5.descripcion;
			prota.obj5.nombre = "\0";
			prota.obj5.descripcion = "\0";
			cout << endl << "has dejado " << mapa[x][y][z].obj2.nombre << endl;
		}

		else
		{
			cout << endl << "aqui no puedes dejar nada BURLAO" << endl;
		}
	}
	else
		cout << endl << "no llevas nada de esto BURLAO" << endl;

	// ORDENAR OBJETOS SALA
	if (prota.obj4.nombre == "\0" && prota.obj5.nombre != "\0")
	{
		prota.obj4 = prota.obj5;
		prota.obj5.nombre = "\0";
		prota.obj5.descripcion = "\0";
	}
	if (prota.obj3.nombre == "\0" && prota.obj4.nombre != "\0")
	{
		prota.obj3 = prota.obj4;
		prota.obj4.nombre = "\0";
		prota.obj4.descripcion = "\0";
	}
	if (prota.obj2.nombre == "\0" && prota.obj3.nombre != "\0")
	{
		prota.obj2 = prota.obj3;
		prota.obj3.nombre = "\0";
		prota.obj3.descripcion = "\0";
	}
	if (prota.obj1.nombre == "\0" && prota.obj2.nombre != "\0")
	{
		prota.obj1 = prota.obj2;
		prota.obj2.nombre = "\0";
		prota.obj2.descripcion = "\0";
	}
}

int main()
{
	system("MODE 150,50");

	bool end = false;
	x = y = 5;
	z = 1;
	
	Init();
	cout << "                                                       -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl << "                                                       _-_-_-_-_-_-_LOS BURLAOS_-_-_-_-_-_-_" << endl << "                                                       -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl << endl << endl << endl;
	cout << "TE RECIBIMOS CON UN PORRO DE PARTE DE LOS BURLAOS" << endl;

	while (!end)
	{
		Update();
		string orden;
		cout <<endl<<endl<< "     - Estas en " << mapa[x][y][z].nombre << endl;
		cout << "     - " << mapa[x][y][z].descripcion << endl;
		cout << "     - Que quieres hacer?" << endl;
		getline(cin, orden);
		String ord = orden.c_str();

		if (ord == "cojer")																//COJER
		{
			string cojer;
			cout << "     - Que quieres cojer?" << endl;
			getline(cin, cojer);
			String coj = cojer.c_str();
			Cojer(coj);
		}

		else if (orden == "dejar")																//DEJAR
		{
			string dejar;
			cout << "     - Que quieres dejar?" << endl;
			getline(cin, dejar);
			String dej = dejar.c_str();
			Dejar(dej);
		}

		else if (orden == "ver")
		{
			Look();																				//LOOK
		}

		else if (orden == "inventario")														//LOOK INVENTARIO
		{
			if (prota.obj1.nombre != "\0")
				cout << endl << "objeto 1: " << prota.obj1.nombre << ":" << prota.obj1.descripcion;	
			if (prota.obj2.nombre != "\0")
				cout << endl << "objeto 2: " << prota.obj2.nombre << ":" << prota.obj2.descripcion;
			if (prota.obj3.nombre != "\0")
				cout << endl << "objeto 3: " << prota.obj3.nombre << ":" << prota.obj3.descripcion;
			if (prota.obj4.nombre != "\0")
				cout << endl << "objeto 4: " << prota.obj4.nombre << ":" << prota.obj4.descripcion;
			if (prota.obj5.nombre != "\0")
				cout << endl << "objeto 5: " << prota.obj5.nombre << ":" << prota.obj5.descripcion;
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
			cout << endl << endl << "     - Adios macho, nos pegaremos un bailesiko en tu honor por aver jugao a" << endl << endl << endl << "          -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl << "           _-_-_-_-_-_-_LOS BURLAOS_-_-_-_-_-_-_" << endl << "          -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl << endl << endl << endl;
			COLOR
			end = true;
		}

		else
			cout << "     - Que hablas BURLAO?" << endl;
	}
	getchar();
}
