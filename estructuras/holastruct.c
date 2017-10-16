#include <stdio.h>
#include <string.h>
#include "persona.h"



int main(int argc, char const *argv[])
{
	

	persona p1;
	strcpy(p1.nombre,"juan");
	strcpy(p1.apellido,"lopez");
	fecha fnac={1960 , 10 , 1 };
	p1.fecha_nac = fnac;

	printf("nombre:%s %s\nEdad: %d",p1.apellido,p1.nombre,obtener_edad(&p1) );

	return 0;
}


	
