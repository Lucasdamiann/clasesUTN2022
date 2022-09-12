#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Validacion.h"
#include "Conversion.h"
int main() {
	setbuf(stdout, NULL);
	int boton;
	float celsius;
	float fahrenheit;
	float tempCValida;
	float tempFValida;
	float tempConvertida;
	char salida;
	while(salida != 's')
	{
		printf("1-Convertir de Celsius a Fahrenheit\n"
						"2-Convertir de Fahrenheit a Celsius\n# ");
				scanf("%d", &boton);
				if (boton == 1) {
					printf("## Ingrese temperatura en celsius: ");
					scanf("%f", &celsius);
					tempCValida = validarTemperaturaCelsius(celsius);
					if (tempCValida == 0) {
						tempConvertida = convertirCelsiusAFahrenheit(celsius);
						printf("La temperatura es %.1f° Fahrenheit\n", tempConvertida);
					} else {
						printf("La temperatura esta fuera del rango Celsius!");
					}
				} else if (boton == 2) {
					printf("## Ingrese temperatura en fahrenheit: ");
					scanf("%f", &fahrenheit);
					tempFValida = validarTemperaturaFahrenheit(fahrenheit);
					if (tempFValida == 0) {
						tempConvertida = convertirFahrenheitACelsius(fahrenheit);
						printf("La temperatura es %.1f° Celsius\n", tempConvertida);
					} else {
						printf("La temperatura esta fuera del rango Fahrenheit!");
					}
				}
				printf("\n'C' para continuar, 'S' para salir\n# ");
				fflush(stdin);
				scanf("%c", &salida);
	}
	return EXIT_SUCCESS;
}

