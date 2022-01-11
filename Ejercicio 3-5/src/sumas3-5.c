/*
 * sumas3-5.c
 *
 *  Created on: 12 sep. 2021
 *      Author: faust
 */
#include <stdio.h>
#include <stdlib.h>

int Sumar1(int unNumero, int otroNumero){
	int resultado;

	resultado=unNumero+otroNumero;

	return resultado;
}
int Sumar2(void){
	int resultado;
	int unNumero;
	int otroNumero;
	printf("Ingrese un numero:");
		scanf("%f", &unNumero);
		printf("Ingrese otro numero:");
		scanf("%f", &otroNumero);
	resultado=unNumero+otroNumero;

	return resultado;

}
void Sumar3(int unNumero, int otroNumero){
		int resultado;

		resultado=unNumero+otroNumero;
		printf("El resultado es %d", resultado);

}
void Sumar4(void){
		int resultado;
		int unNumero;
		int otroNumero;
		printf("Ingrese un numero:");
			scanf("%f", &unNumero);
			printf("Ingrese otro numero:");
			scanf("%f", &otroNumero);
		resultado=unNumero+otroNumero;
		printf("El resultado es %d", resultado);
}

