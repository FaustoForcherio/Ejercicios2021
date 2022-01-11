/*
 * temp.c
 *
 *  Created on: 12 sep. 2021
 *      Author: faust
 */


//farenheit = (celcius*1,8)+32
//celcius=(farenheit-32)/1,8
#include <stdio.h>
#include <stdlib.h>

float ToFarenheit(float celsius){
	float farenheit;

	farenheit=(celsius*1.8)+32;
	return farenheit;
}

float ToCelsius(float farenheit){
	float celsius;

	celsius=(farenheit-32)/1.8;

	return celsius;
}

float PedirValidarTemperaturaFarenheit(void){
	float farenheit;
	printf("Ingrese la temperatura:\n");
	scanf("%f", &farenheit);

	while(farenheit>212||farenheit<32){
		printf("ERROR. Ingrese la temperatura:\n");
			scanf("%f", &farenheit);
	}
	return farenheit;
}

float PedirValidarTemperaturaCelsius(void){
	float celsius;
	printf("Ingrese la temperatura:\n");
	scanf("%f", &celsius);
while(celsius>100||celsius<0){
	printf("ERROR. Ingrese la temperatura:\n");
	scanf("%f", &celsius);
}

	return celsius;
}
