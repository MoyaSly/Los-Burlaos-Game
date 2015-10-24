#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#ifndef __STRUCTS__
#define __STRUCTS__

struct Cosa
{
	char* nombre = NULL;
	char* descripcion = NULL;

};
struct Jugador
{
	char* nombre;
	char* descripcion;
	Cosa obj1;
	Cosa obj2;
	Cosa obj3;
	Cosa obj4;
	Cosa obj5;
};

struct Zone
{
	char* nombre;
	char* descripcion;
	Cosa obj1;
	Cosa obj2;
};

#endif