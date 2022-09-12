/*
 * Valicacion.c
 *
 *  Created on: 7 sep. 2022
 *      Author: Lucasdamiann
 */
#include <stdio.h>
#include "Validacion.h"
int validarTemperaturaCelsius(int temperatura) {
	int ret = 0;
	if (temperatura < 0 || temperatura > 100) {
		ret = 1;
	}

	return ret;
}

int validarTemperaturaFahrenheit(int temperatura) {
	int ret = 0;
	if (temperatura < 32 || temperatura > 212) {
		ret = 1;
	}

	return ret;
}

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError,
		int minimo, int maximo, int reintentos) {
	int ret;
	int num;
	while (reintentos > 0) {
		printf(mensaje);
		if (getInt(&num) == 1) {
			if (num <= maximo && num >= minimo)
				break;
		}
		fflush(stdin); //EN LINUX UTILIZAR __fpurge(stdin)
		reintentos--;
		printf(mensajeError);
	}
	if (reintentos == 0) {
		ret = -1;
	} else {
		ret = 0;
		*pResultado = num;
	}
	return ret;
}
