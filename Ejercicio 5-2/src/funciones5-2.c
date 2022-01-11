/*
 * funciones5-2.c
 *
 *  Created on: 13 sep. 2021
 *      Author: faust
 */
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void MostrarNumeros(int numeros[]){
	printf("\nLos numeros son:\n");
	for(int i=0;i<TAM;i++){
	 printf("%d \t", numeros[i]);
	 }
}

void MostrarPares(int numeros[]){
	printf("\nLos numeros pares son:\n");
	for(int i=0;i<TAM;i++){
		if(numeros[i]%2==0)
		 printf("%d \t", numeros[i]);
		 }
}

void MostrarPosicionesImpares(int numeros[]){
	printf("\nLos numeros en posiciones impares son:\n");
	for(int i=1;i<TAM;){
			printf("%d \t", numeros[i]);
			i=i+2;
	}
}

int ContarPositivos(int numeros[]){
	int contadorPositivos=0;
	for(int i=0;i<TAM;i++){
		if(numeros[i]>0){
			contadorPositivos++;
		}
	}
	return contadorPositivos;
}

int ContarNegativos(int numeros[]){
	int contadorNegativos=0;
	for(int i=0;i<TAM;i++){
		if(numeros[i]<0){
			contadorNegativos++;
		}
	}
	return contadorNegativos;
}

int SumarPares(int numeros[]){
	int resultado=0;
 for(int i=0;i<TAM;i++){
	 if(numeros[i]%2==0){
		 resultado=resultado+numeros[i];
	 }
 }
	return resultado;
}

int BuscarImparMayor(int numeros[]){
	int resultado;
	int flag=1;
	int imparMayor;
	for(int i=0;i<TAM;i++){
		if(numeros[i]%2!=0&&(flag=1||imparMayor<numeros[i])){
			flag=0;
			imparMayor=numeros[i];
		}
	}
	if(flag==1){
		resultado=0;
	}
	else{
		resultado=imparMayor;
	}
	return resultado;
}
