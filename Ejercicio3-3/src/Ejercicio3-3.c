#include <stdio.h>
#include <stdlib.h>
int returnInt();
int main() {

	setbuf(stdout, NULL);
	printf("El numero ingresado es: %d",returnInt());
	return EXIT_SUCCESS;
}
int returnInt()
{
	int numeroRetornado;
	printf("### Bienvenido ###\nIngrese un valor: ");
	scanf("%d",&numeroRetornado);
	return numeroRetornado;
}
