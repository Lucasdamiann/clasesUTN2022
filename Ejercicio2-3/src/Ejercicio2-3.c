/*
 a) La cantidad de personas con estado  civil"viudo" de más de 60 años.
 b) el número de cliente y edad de la mujer soltera más joven.
 c) cuánto sale el viaje total sin descuento.
 d) si hay más del 50% de los pasajeros que tiene más de 60 años ,
 el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	setbuf(stdout, NULL);

	int cantPersonas;
	int precio = 600;
	int edad;
	char estadoCivil;
	float temperatura;
	char genero;
	int numeroCliente;
	int numeroCteMasJoven;
	int edadMujerJoven = 0;
	int precioTotal = 0;
	int flagMujerJoven = 0;
	int cuentaViudos = 0;
	int cantMayores60 = 0;
	int mitad;
	int precioConDescuento;

	printf("#####################################\n"
			"##    TRANSPORTES NUEVEDELDOCE     ##\n"
			"#####################################\n");

	printf("-= El precio del viaje a Mar del Plata es de $%d =-\n", precio);
	printf("\n¿Cuantos personas van a viajar?");
	do {
		printf("\n-Ingrese un valor entre 1 y 100 por favor");
		scanf("%d", &cantPersonas);
	} while (cantPersonas > 100);
	precioTotal = cantPersonas * precio;
	printf("Numero de cliente: ");
	do {
		printf("\n-Ingrese solo caracteres numericos (1-9999): ");
		scanf("%d", &numeroCliente);
	} while (numeroCliente<1 || numeroCliente>9999);

	printf(
			"\nEstado civil ('S' para soltero/a, 'C' para casado/a, 'V' para viudo/a)");
	do {//problema de validacion de caracter
		printf("\n-Ingrese solo los caracteres indicados: ");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		estadoCivil=toupper(estadoCivil);
	} while ((estadoCivil != 'C') && (estadoCivil != 'S') && (estadoCivil != 'V' ));

	printf("\nEdad: ");
	do {
		printf("\nIngrese una edad valida (Debe ser mayor de edad): ");
		scanf("%d", &edad);
		if ((edad > 60)) {
			cantMayores60++;
			if ((estadoCivil == 'V' || estadoCivil != 'v')) {
				cuentaViudos++;
			}
		}
	} while (edad < 18 || edad>120);
	printf("\nTemperatura corporal: ");
	do {
		printf("\n-Ingrese su temperatura (Ej. 36.7): ");
		scanf("%f", &temperatura);
		if (temperatura > 37.5) {
			printf(
					"\nEsa temperatura es muy elevada, deberia visitar a un doctor\n");
		} else if (temperatura < 36.5) {
			printf(
					"\nEsa temperatura es muy baja, deberia visitar a un doctor\n");
		}

	} while (temperatura > 37.5 || temperatura < 36.5);

	printf("\nGenero: ");
	do {
		printf("\n-Ingrese un genero valido (M,F,O)");
		fflush(stdin);
		scanf("%c", &genero);
		genero=toupper(genero);
	} while (genero != 'M' &&  genero != 'F' && genero != 'O');
	if (((estadoCivil == 'S' || estadoCivil == 's')
			&& (genero == 'F' || genero != 'f') && edadMujerJoven > edad)
			|| flagMujerJoven == 0) {
		edadMujerJoven = edad;
		numeroCteMasJoven = numeroCliente;
		flagMujerJoven = 1;
	}

	printf("\nLa cantidad de personas viudas de mas de 60 anios es: %d",
			cuentaViudos);
	printf(
			"\nEl numero de cliente y edad de la mujer mas joven es: Num.Cte %d, Edad %d",
			numeroCteMasJoven, edadMujerJoven);
	printf("\nEl viaje total tiene un valor de: %d", precioTotal);
	mitad = cantPersonas / 2;
	if (mitad < cantMayores60) {

		precioConDescuento = precioTotal - (precioTotal * 0.25);
		printf("\nEl precio final con descuento es: $ %d", precioConDescuento);
	}
	return EXIT_SUCCESS;
}

