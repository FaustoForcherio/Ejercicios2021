/*
 ============================================================================
 Fausto Forcherio
	Ejercicio 3-2:
	Crear una funci�n que permita determinar si un n�mero es par o no. La funci�n retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca3-2.h"



int main(void) {
	setbuf(stdout, NULL);
	int numero;
	int resultado;

	printf("Inserte un numero:");
	scanf("%d", &numero);
	resultado=EsParOImpar(numero);
	if(resultado==1){
printf("El numero que insert� es par.");}
	else{
printf("El numero que insert� es impar.");
	}

}

