#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	char letra;
	int contadorP = 0;
	int contador=0;
	while(contador<5)
	{
		contador++;
		printf("\n-Ingrese una letra:");
		fflush(stdin);
		scanf("%c", &letra);
		if (letra == 'p')
		{
			contadorP++;
		}
	}
	printf("Se ingresaron %d letras 'p'", contadorP);
	return EXIT_SUCCESS;
}
