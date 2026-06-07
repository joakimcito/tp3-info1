
#include <stdio.h>


int main(void) {
	float altura;
	float peso;
	
	printf("Hola, le pedire que ingrese los datos que se le pidan a continuacion\n");
	
	//PETICION DE ALTURA
	printf("Ingrese aqui su altura\n");
	scanf("%f", &altura);
	
	//PETICION DE PESO 
	printf("ingrese su peso aqui\n"); 
	scanf("%f", &peso);
	 
	
	// Hacer el calculo del indice de masa coorporal
	float vault_IMC;
	vault_IMC = peso/(altura*altura);
	
	printf("el valor del indice de masa corporal es de: %2.f \n", vault_IMC);
	printf("ahora compara el resultado que nos da la operacion con el siguiente cuadro\n\n" );
	printf(
		   "Indice       | Condicion\n"
		   "-------------------------\n"
		   "<18.5        | Bajo peso\n"
		   "18.5 a 24.9  | Normal\n"
		   "25.0 a 29.9  | Sobrepeso\n"
		   ">=30         | Obesidad\n"
		   );
	
	
	return 0;
}

