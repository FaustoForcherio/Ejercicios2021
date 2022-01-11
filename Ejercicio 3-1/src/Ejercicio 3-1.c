/*
 ============================================================================
Fausto Forcherio
Ejercicio 3-1:
Crear una funci�n que muestre por pantalla el n�mero flotante  que recibe como par�metro.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define p fflush(stdin);

void MostrarFlotante (float unNumero);

int main(void) {
	float unNumero;
	setbuf(stdout, NULL);
	printf("Inserte un numero flotante: ");
	scanf("%f", &unNumero);
	MostrarFlotante(unNumero);
	return EXIT_SUCCESS;
}

void MostrarFlotante(float unNumero){
	printf("El numero es: %f", unNumero);
}
