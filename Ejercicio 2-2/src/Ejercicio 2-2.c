/******************************************************************************
Fausto Forcherio
Ejercicio 2-2:
Ingresar 10 números enteros, distintos de cero. Mostrar:
Cantidad de pares e impares.
El menor número ingresado.
De los pares el mayor número ingresado.
Suma de los positivos.
Producto de los negativos.


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define p fflush(stdin)

int main(void)
{
    setbuf(stdout, NULL);
    int numeroIngresado;
    int sumaPositivos;
    int i;
    int resultadoProducto;
    int menorNumeroIngresado;
    int flagMenorNumero;
    int contadorPares;
    int flagPares;
    int numeroParMayor;
    int contadorImpares;
    int flagProducto;
    resultadoProducto=1;
    flagMenorNumero=1;
    contadorPares=0;
    flagPares=1;
    contadorImpares=0;
    sumaPositivos=0;
    flagProducto=0;
    for(i=0;i<10;i++){
        printf("Ingrese un numero distinto de cero:");
        scanf("%d",&numeroIngresado);
        while(numeroIngresado==(int)0){
            printf("Error. Ingrese un numero distinto de cero:");
            scanf("%d", &numeroIngresado);
        }
//D y E
        if(numeroIngresado>0){
            sumaPositivos+=numeroIngresado;
        }
        else if(numeroIngresado<0){
            resultadoProducto=resultadoProducto*numeroIngresado;
            flagProducto=1;
        }
        //B
        if (flagMenorNumero==1||numeroIngresado<menorNumeroIngresado){
        	flagMenorNumero=0;
        	menorNumeroIngresado=numeroIngresado;
        }
        //A y C
        if(numeroIngresado%2==0){
        	contadorPares++;
        	if(flagPares==1||numeroIngresado>numeroParMayor){
        		flagPares=0;
        		numeroParMayor=numeroIngresado;
        	}
        }
        else{
        	contadorImpares++;
        }

    }

    printf("Cantidad de numeros pares: %d \n", contadorPares);
    printf("Cantidad de numeros impares: %d \n", contadorImpares);
    printf("Menor numero ingresado: %d \n", menorNumeroIngresado);
    if(flagPares==0){
    printf("Mayor numero par ingresado: %d \n", numeroParMayor);
    }
    if(sumaPositivos!=0){
    	printf("La suma de los positivos es: %d \n", sumaPositivos);
    }
    if(flagProducto==1){
    	printf("El producto de los numeros negativos es de: %d", resultadoProducto);
    }

    return EXIT_SUCCESS;
}
