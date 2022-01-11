/*
 ============================================================================
 Fausto Forcherio
	Ejercicio 4-1:
	Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número. Utilizar la función PedirNumero de la ejercitación 3-4.
	Por ejemplo:
	5! = 5*4*3*2*1 = 120
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Factorial(int);

int main(void) {
	setbuf(stdout, NULL);
	int resultado;

	resultado=Factorial(10);
	printf("El resultado es %d", resultado);
	return EXIT_SUCCESS;
}

int Factorial(int numero){
	int resultado;

	if(numero==1){
		return 1;
	}

	resultado=numero*Factorial(numero-1);


	return resultado;
}
