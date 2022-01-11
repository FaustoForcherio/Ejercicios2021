/*
 ============================================================================
 Fausto Forcherio
	Ejercicio 3-5:
	Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
	int Sumar1(int, int);
	int Sumar2(void);
	void  Sumar3(int, int);
	void Sumar4(void);

 ============================================================================
 */


#include "sumas3-5.h"

int main(void) {
setbuf(stdout, NULL);
int unNumero;
int otroNumero;
int eleccion;
int resultado;

printf("\n¿Que prototipo desea usar??\n\n");
printf("1) int Sumar1(int, int);\n");
printf("2) int Sumar2(void);\n");
printf("3) void  Sumar3(int, int);\n");
printf("4) void Sumar4(void);\n\n");
printf("Inserte numero de la suma:\n");
scanf("%d", &eleccion);

switch(eleccion){
case 1:
	printf("Ingrese un numero:");
	scanf("%d", &unNumero);
	printf("Ingrese otro numero:");
	scanf("%d", &otroNumero);
	resultado=Sumar1(unNumero, otroNumero);
	printf("El resultado es %d", resultado);
	break;
case 2:
	resultado = Sumar2();
	printf("El resultado es %d", resultado);
	break;
case 3:
	printf("Ingrese un numero:");
	scanf("%d", &unNumero);
	printf("Ingrese otro numero:");
	scanf("%d", &otroNumero);
	Sumar3(unNumero,otroNumero);
	break;
case 4:
	Sumar4();
	break;
}



return EXIT_SUCCESS;

}

/*
printf("Ingrese un numero:");
scanf("%f", &unNumero);
printf("Ingrese otro numero:");
scanf("%f", &otroNumero);
*/
