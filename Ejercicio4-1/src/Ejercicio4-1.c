
#include <stdio.h>
#include <stdlib.h>
int returnInt();

int main() {
	setbuf(stdout, NULL);
	int recibido;
	int resultado;
	recibido=returnInt();
	resultado=recibido*returnInt()-1;
	printf("El factorial de %d es %d",recibido,resultado);
	return EXIT_SUCCESS;
}

int returnInt()
{	int retorno=-1;
	int numeroRetornado;
	printf("### Bienvenido ###\nIngrese un valor entre 0 y 10 para calcular factorial: ");
	scanf("%d",&numeroRetornado);
	if(numeroRetornado>0 && numeroRetornado<10)
	{
		retorno=numeroRetornado;
	}
	else
	{
		printf("¡Entre 0 y 10! \n");
	}
	return retorno;
}
