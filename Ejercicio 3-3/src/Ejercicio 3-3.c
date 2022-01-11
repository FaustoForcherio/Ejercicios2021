/*
 ============================================================================
 Fausto Forcherio
	Ejercicio 3-3:
	Crear una función que pida el ingreso de un entero y lo retorne.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define p fflush(stdin);

int PedirEntero();

int main(void) {
	setbuf(stdout, NULL);
	int resultado;
	resultado=PedirEntero();
	printf ("El resultado es: %d", resultado);
	return EXIT_SUCCESS;
}

int PedirEntero(){
	int numeroEntero;
	float numeroPosibleFloat;
	printf("Inserte un numero entero: ");
	 scanf("%f", &numeroPosibleFloat);
	 numeroEntero=numeroPosibleFloat;

	 while(numeroEntero-numeroPosibleFloat!=0){
		 printf("ERROR. Inserte un numero entero: ");
		 	 scanf("%f", &numeroPosibleFloat);
	 }
	return numeroPosibleFloat;
}
