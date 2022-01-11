/*
 ============================================================================
 Fausto Forcherio
	Ejercicio 3-4:
	Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.

 ============================================================================
 */
#include "Biblioteca3-4.h"


int main(void) {
	setbuf(stdout, NULL);
	int resultado;
	int minimo;
	int maximo;
	printf("Inserte rango inferior:");
	scanf("%d", &minimo);
	printf("Inserte rango superior:");
	scanf("%d", &maximo);

	resultado=PedirEnteroValidarRango( minimo,  maximo);
	printf ("El resultado es: %d", resultado);
	return EXIT_SUCCESS;
}


