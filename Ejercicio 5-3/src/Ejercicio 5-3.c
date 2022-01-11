/*
 ============================================================================
 Fausto Forcherio
	Ejercicio 5-3:
	Realizar un programa que permita el ingreso de 10 números enteros distintos de cero. La carga deberá ser aleatoria (todos los elementos se inicializan en cero por default).
	Determinar el promedio de los positivos, y del menor de los negativos la suma de los antecesores (Según la recta numérica de los reales, hasta llegar a cero).
	Utilizar funciones y vectores.

 ============================================================================
 */
#include "funciones5-3.h"

int main(void) {
	setbuf(stdout, NULL);
	int numeros[TAM];
	char respuesta;
	int pos;
	int promedio=0;
	int suma=0;
	for(int i=0;i<TAM;i++){
			numeros[i]=0;
			}
	do{
		printf("Inserte la posición que desea cargar:");
		scanf("%d", &pos);
		printf("\nInserte el valor que desea almacenar(distintos de 0):");
		scanf("%d", &numeros[pos]);
		while(numeros[pos]==0){
			printf("\nERROR. Inserte el valor que desea almacenar(distintos de 0):");
			scanf("%d", &numeros[pos]);
		}
		p;
		printf("\nDesea almacenar otro valor?s/n\n");
		scanf("%c^\n", &respuesta);
		p;
		while(respuesta!='s'&&respuesta!='n'){
			printf("\nERROR. Desea almacenar otro valor?s/n\n");
					scanf("%c^\n", &respuesta);
					p;
		}
	}while(respuesta=='s');

promedio=PromediarPositivos(numeros);
printf("\nEl promedio de positivos es de %d", promedio);
suma=SumarAntecesores(numeros);
printf("\nLa suma de los antesesores del menor numero negativo es: %d", suma);
}
