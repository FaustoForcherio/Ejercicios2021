/*
 ============================================================================
 Fausto Forcherio
 	Ejercicio 6-1:
	Disponemos de dos variables numéricas (a y b). Realizar un algoritmo que permita el intercambio de valores de dichas variables.

 ============================================================================
 */

#include "funciones6-1.h"


int main(void) {
	setbuf(stdout, NULL);
	int a=0;
	int b=0;
	int auxiliarInt;
	a=PedirEntero();
	b=PedirEntero();
	printf("A=%d B=%d", a, b);
	auxiliarInt=a;
	a=b;
	b=auxiliarInt;

	printf("\nSwap: A=%d B=%d", a, b);

	return EXIT_SUCCESS;
}
