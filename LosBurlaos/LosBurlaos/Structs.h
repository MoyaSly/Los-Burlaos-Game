#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "Globals.h"

#ifndef __STRUCTS__
#define __STRUCTS__

struct Cosa
{
	char* nombre;
	char* descripcion;

};
struct Jugador
{
	char* nombre;
	char* descripcion;
	Cosa obj1;
};

struct Zone
{
	char* nombre;
	char* descripcion;
	Cosa obj1;
	Cosa obj2;
};

#endif