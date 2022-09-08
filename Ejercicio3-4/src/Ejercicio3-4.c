#include <stdio.h>
#include <stdlib.h>
int returnInt();
int main() {
	setbuf(stdout, NULL);
	int retornado;
	retornado=returnInt();
	if(retornado==-1)
	{
		printf("Algo malio sal");
	}
	else
	{
	printf("El numero ingresado es: %d",retornado);
	}
	return EXIT_SUCCESS;
}

int returnInt()
{	int retorno=-1;
	int numeroRetornado;
	printf("### Bienvenido ###\nIngrese un valor entre 0 y 1000: ");
	scanf("%d",&numeroRetornado);
	if(numeroRetornado>0 && numeroRetornado<1000)
	{
		retorno=numeroRetornado;
	}
	else
	{
		printf("¡Entre 0 y 1000! \n");
	}
	return retorno;
}
