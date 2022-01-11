/*
 ============================================================================
 Fausto Forcherio
	Ejercicio 4-2:
	Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit , validando que las temperaturas ingresadas estén entre el punto de congelación y ebullición del agua para cada tipo de escala.
	Las validaciones se hacen en una biblioteca.
	Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.

 ============================================================================
 */


#include "temp.h"

int main(void) {
	setbuf(stdout, NULL);
int tipoDeTemperatura;
float temperaturaIngresada;
float celsius;
float farenheit;


printf("Que temperatura desea ingresar?\n\n");
printf("1) Farenheit\n");
printf("2) celsius\n\n");
scanf("%d", &tipoDeTemperatura);


if(tipoDeTemperatura==1){
	temperaturaIngresada=PedirValidarTemperaturaFarenheit();
	celsius=ToCelsius(temperaturaIngresada);
	printf("La temperatura en celsius es de: %1.f °C", celsius);
}
else if(tipoDeTemperatura==2){
	temperaturaIngresada=PedirValidarTemperaturaCelsius();
	farenheit=ToFarenheit(temperaturaIngresada);
	printf("La temperatura en farenheit es de: %1.f °F", farenheit);
}


return EXIT_SUCCESS;
}

//farenheit = (celcius*1,8)+32
//celcius=(farenheit-32)/1,8
//0 grados punto de congelacion punto de ebullicion 100 grados
