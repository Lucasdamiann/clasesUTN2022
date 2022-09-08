
#include <stdio.h>
#include <stdlib.h>

int mostrarFlotante(float numero);
int main() {
	setbuf(stdout, NULL);
	int numero;
	printf("Ingrese un numero con decimales(EJ.37.8): ");
	scanf("%d",&numero);
	mostrarFlotante(numero);
	return EXIT_SUCCESS;
}
int mostrarFlotante(float numeroFlotante)
{
	printf("El numero recibido es %.2f",numeroFlotante);
	return 0;
}
