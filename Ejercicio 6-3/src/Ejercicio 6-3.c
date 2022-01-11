/*
 ============================================================================
 Fausto Forcherio
	Ejercicio 6-3:
	Pedirle al usuario su nombre y apellido (en variables separadas, una para el nombre y otra para el apellido). Ninguna de las dos variables se puede modificar.
	Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
	Por ejemplo:
	Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
	Gomez, Juan Ignacio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	setbuf(stdout, NULL);
	char nombre[25];
	char apellido[25];
	char apellidoNombre[51];

	printf("Ingrese su nombre:");
	gets(nombre);
	printf("Ingrese su apellido:");
	gets(apellido);

	strcpy(apellidoNombre, apellido);
	strcat(apellidoNombre, ", ");
	strcat(apellidoNombre, nombre);

	apellidoNombre[0]= toupper(apellidoNombre[0]);
	for(int i=0;i<strlen(apellidoNombre);i++){
		if(apellidoNombre[i]==' '){
			apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
		}
	}
	puts(apellidoNombre);
	return EXIT_SUCCESS;
}
