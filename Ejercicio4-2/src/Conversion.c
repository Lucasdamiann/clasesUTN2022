/*
 * Conversion.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Lucasdamiann
 */
#include "Conversion.h"

int convertirFahrenheitACelsius(int temperatura)
{
	int ret=0;
	ret=((temperatura-32)*5)/9;

	return ret;
}

int convertirCelsiusAFahrenheit(int temperatura)
{
	int ret=0;
	ret=((temperatura*9)/5)+32;

	return ret;
}
