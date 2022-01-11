/*
 * Biblioteca3-4.c
 *
 *  Created on: 11 sep. 2021
 *      Author: faust
 */
#include <stdio.h>
#include <stdlib.h>

int PedirEnteroValidarRango(int minimo, int maximo){
	setbuf(stdout, NULL);
int numeroEntero;
int retorno;
	float numeroPosibleFloat;
	printf("Inserte un numero entero dentro del rango:");
	 scanf("%f", &numeroPosibleFloat);
fflush(stdin);
	numeroEntero=numeroPosibleFloat;
	retorno=numeroPosibleFloat;
	 while((numeroEntero-numeroPosibleFloat!=0)||minimo>numeroPosibleFloat||maximo<numeroPosibleFloat){
		 printf("ERROR. Inserte un numero entero dentro del rango: ");
		 fflush(stdin);
		 scanf("%f", &numeroPosibleFloat);
		 numeroEntero=numeroPosibleFloat;
		 retorno=numeroPosibleFloat;

	 }
	return retorno;
}
