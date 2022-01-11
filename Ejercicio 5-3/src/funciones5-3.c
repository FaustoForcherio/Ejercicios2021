/*
 * funciones5-3.c
 *
 *  Created on: 3 oct. 2021
 *      Author: faust
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#define p fflush(stdin)

int	PromediarPositivos(int numeros[]){
	int resultado;
	int suma=0;
	int contadorPositivos=0;
	for(int i=0;i<TAM;i++){
		if(numeros[i]>0){
			contadorPositivos++;
			suma=suma+numeros[i];
			resultado=suma/contadorPositivos;
		}
	}
	return resultado;
}

int SumarAntecesores(int numeros[]){
	int resultado;
	int menorNumero=0;
	for(int i=0;i<TAM;i++){
		if(numeros[i]<0&&numeros[i]<menorNumero){
		menorNumero=numeros[i];
	}
	}
	for(int i=menorNumero;i!=0;i++){
	menorNumero=menorNumero+1;
	resultado=resultado+menorNumero;
	}

	return resultado;
}
