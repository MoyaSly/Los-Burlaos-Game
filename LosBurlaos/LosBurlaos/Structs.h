#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#ifndef __STRUCTS__
#define __STRUCTS__

struct Cosa
{
	char* nombre = "\0";
	char* descripcion = "\0";

};
struct Jugador : Cosa
{
	Cosa obj1;
	Cosa obj2;
	Cosa obj3;
	Cosa obj4;
	Cosa obj5;
};

struct Zone : Cosa
{
	Cosa obj1;
	Cosa obj2;
};

#endif