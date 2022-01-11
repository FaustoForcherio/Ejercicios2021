/*
 * funciones6-2.c
 *
 *  Created on: 10 oct. 2021
 *      Author: faust
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CargarArray(int numeros[], int tam){

	for(int i=0;i<tam;i++){
	printf("Ingrese un entero:");
	scanf("%d", numeros[i]);
	}

}

void OrdenarNumeros(int numeros[],int tam){
	int auxiliarInt;
	for(int i=0;i<i;i++){
		for(int j=i+1;j<tam-1;i++){
			if(numeros[i]>numeros[j]){
				auxiliarInt=numeros[i];
				numeros[i]=numeros[j];
				numeros[j]=auxiliarInt;
			}
		}

	}
}
