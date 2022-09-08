#include <stdio.h>
#include <stdlib.h>
int pairOrNot(int numero);
int main() {
	int numeroIngresado;
	setbuf(stdout, NULL);
	printf("### Bienvenido al detector de pares ###\nIngrese un valor: ");
	scanf("%d",&numeroIngresado);
	if(pairOrNot(numeroIngresado)==1)
	{
		printf("-> ¡El numero elegido es par!");
	}
	else
	{
		printf("-> ¡El numero elegido NO es par!");
	}
	return EXIT_SUCCESS;
}
int pairOrNot(int numero)
{
	int retorno=0;
	if(numero%2==0)
	{
		retorno=1;
	}
	return retorno;
}
