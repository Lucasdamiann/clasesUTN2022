
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


int main() {
	setbuf(stdout, NULL);
	int numeroRecibido;
	int i;
	int arrayNumeros[5];
	int suma;
	for(i=0;i<5;i++)
	{
	utn_getNumero(&numeroRecibido, "Ingrese un numero entre 0 y 1000: ", "Error: Solo numeros", 0, 1000, 3);

	arrayNumeros[i]=numeroRecibido;
	suma+=arrayNumeros[i];
	}
	printf("La sumatoria es %d",suma);
	return EXIT_SUCCESS;
}
