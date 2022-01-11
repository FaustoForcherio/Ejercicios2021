/*
 ============================================================================
 Fausto Forcherio
	Ejercicio 5-1:
	Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeros[5];
	int i;
	int suma=0;
	for(i=0;i<5;i++){
		printf("Ingrese un numero:");
		scanf("%d", &numeros[i]);
		suma=suma+numeros[i];

	}
	printf("Los numeros son:\n");
	for(i=0;i<5;i++){
		printf(" %d \n", numeros[i]);
		}

	printf("La suma total es de: %d", suma);
	return 0;
}
