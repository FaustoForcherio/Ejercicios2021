/******************************************************************************
Fausto Forcherio
Ejercicio 2-3:
Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas, de cada persona debemos obtener los siguientes datos:
número de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad( solo mayores de edad, más de 17),
temperatura corporal (validar por favor)
y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado "viudo" de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define p fflush(stdin)

int main(void){
			setbuf(stdout, NULL);
	int numeroCliente;
	char estadoCivil;
	int edad;
	float temperaturaCorporal;
	char genero;
	char respuesta;
	int contadorViudosViejos=0;
	int flagJoven=1;
	int edadJoven=0;
	int numeroJoven;
	int contPasajeros=0;
	int precioSinDescuento;
	int contadorMayores=0;
	float precioConDescuento;

do{
	       printf("Inserte su numero de cliente:");
	       scanf("%d", &numeroCliente);
	       p;
	       printf("Escriba su estado civil(soltero=s, casado=c,viudo=v):");
	       scanf("%c", &estadoCivil);
	       estadoCivil=tolower(estadoCivil);
	       p;
	       	   while(!(estadoCivil=='c'||estadoCivil=='s'||estadoCivil=='v')){
	       		   printf("ERROR. Escriba su estado civil(soltero=s, casado=c,viudo=v):");
	       		   tolower(scanf("%c", &estadoCivil));
	       		   p;
	       	   }
	        printf("Inserte su edad(solo se permite mayores de edad): ");
	        scanf("%d", &edad);
	        p;
	        	while(edad<18){
	        		printf("ERROR. Inserte su edad(solo se permite mayores de edad): ");
	        		scanf("%d", &edad);
	        		p;
	        	}
	        printf("Inserte su temperatura corporal (Tiene que ser menor a 37):");
	        scanf("%f", &temperaturaCorporal);
	        p;
	        	while(temperaturaCorporal>37){
	        		printf("ERROR. Inserte su temperatura corporal(tiene que ser menor a 37):");
	        		scanf("%f", &temperaturaCorporal);
	        		p;
	        	}
	        printf("Escriba su genero (femenino=F,masculino=M,no binario=O):");
	        tolower(scanf("%c", &genero));
	        p;
	        	while(!(genero=='f'||genero=='m'||genero=='o')){
	        		printf("ERROR. Escriba su genero (femenino=F,masculino=M,no binario=O):");
	        		tolower(scanf("%c", &genero));
	        		p;
	        	}
	        printf("Desea ingresar otro pasajero? (si=s,no=n)");
	        tolower(scanf("%c", &respuesta));
	        p;
	        	while(!(respuesta=='s'||respuesta=='n')){
	        		printf("ERROR. Desea ingresar otro pasajero? (si=s,no=n)");
	        		tolower(scanf("%c", &respuesta));
	        		p;
	        	}
	        if(edad>60){
	        	contadorMayores++;
	        }

	        if(estadoCivil=='v'&&edad>60){
	            contadorViudosViejos++;
	        }
	        if((flagJoven=1||edad<edadJoven) && genero=='f' && estadoCivil=='s'){
	        	numeroJoven=numeroCliente;
	        	edadJoven=edad;
	        	flagJoven=0;
	        }

	        contPasajeros++;
	    }while(respuesta=='s');

		if(contadorViudosViejos!=0){
			printf("El numero de personas viudas mayores de 60 es de %d \n", contadorViudosViejos);
		}
	    if(flagJoven==0){
	    	printf("La persona mas joven tiene %d años y su numero de cliente es %d \n", edadJoven, numeroJoven);
	    }

	    precioSinDescuento=600*contPasajeros;
	    printf("El precio total del viaje sin descuento es de $ %d \n", precioSinDescuento);

	    if((contPasajeros/2)<contadorMayores){
	    	precioConDescuento=precioSinDescuento*(float)0.75;
	    	printf("El precio total del viaje con descuento es de $ %2.f \n", precioConDescuento);
	    }

	    return EXIT_SUCCESS;
}
