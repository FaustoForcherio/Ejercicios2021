/*
 ============================================================================
 Fausto Forcherio
	Ejercicio 5-2:
	Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
	Cantidad de positivos y negativos.
	Sumatoria de los pares.
	El mayor de los impares.
	Listado de los números ingresados.
	Listado de los números pares.
	Listado de los números de las posiciones impares.
	Se deberán utilizar funciones y vectores.

 ============================================================================
 */

#include "funciones5-2.h"

int main(void) {
	setbuf(stdout, NULL);
	int numeros[TAM];
	int i;
	int cantidadPositivos=0;
	int cantidadNegativos=0;
	int sumaPares=0;
	int mayorNumeroImpar;
 for(i=0; i<TAM; i++){
	 printf("Ingrese el numero:");
	 scanf("%d", &numeros[i]);
	  while(numeros[i]>1000||numeros[i]<-1000){
		  printf("Ingrese el numero:");
		  	 scanf("%d", &numeros[i]);
	  }
 }
cantidadPositivos=ContarPositivos(numeros);
 printf("\nCantidad de positivos: %d",cantidadPositivos);
cantidadNegativos=ContarNegativos(numeros);
 printf("\nCantidad de negativos: %d", cantidadNegativos);
sumaPares=SumarPares(numeros);
 printf("\nSumatoria de los pares: %d",sumaPares);
mayorNumeroImpar=BuscarImparMayor(numeros);
if(mayorNumeroImpar!=0){
 printf("\nEl mayor numero impar: %d", mayorNumeroImpar);
}
else{
	printf("\nNo se ingresaron numeros impares");
}



 MostrarNumeros(numeros);
 MostrarPares(numeros);
 MostrarPosicionesImpares(numeros);


	return 0;
}
