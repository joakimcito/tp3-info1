#include <stdio.h>

// link al repositorio: https://github.com/joakimcito/tp3-info1.git
int main(void) {
	float altura;
	float peso;
	
	printf("Hola, le pedire que ingrese los datos que se le pidan a continuacion\n");
	//se usa un bucle do while para crear un bucle donde la condicion de corte sea ingresar bien lo valores
	do{
		printf("Ingrese aqui su altura\n");
		scanf("%f", &altura);
		printf("ingrese su peso aqui\n"); 
		scanf("%f", &peso);
		if(altura <= 0 || peso <= 0){
			printf("los valores ingresados deben ser positivos unicamente\n");
	}
	} while(altura <= 0 || peso <= 0);
	
	// el calculo del indice de masa coorporal
	float vault_IMC;
	vault_IMC = peso/(altura*altura);
	
	printf("el valor del indice de masa corporal es de: %.2f \n", vault_IMC);
	printf("ahora compara el resultado que nos da la operacion con el siguiente cuadro\n\n" );
	printf(
		   "Indice       | Condicion\n"
		   "-------------------------\n"
		   "<18.5        | Bajo peso\n"
		   "18.5 a 24.9  | Normal\n"
		   "25.0 a 29.9  | Sobrepeso\n"
		   ">=30         | Obesidad\n"
		   );
	printf("El estado actual de tu BMI es:\n");
	if(vault_IMC<18.5)
		printf("Bajo de peso\n");
	else if(vault_IMC>=18.5&&vault_IMC<24.9)
		printf("Normal\n");
	else if(vault_IMC>=24.9&&vault_IMC<29.9)
		printf("Sobrepeso\n");
	else if(vault_IMC>=29.9)
		printf("Obesidad\n");
	
	return 0;
} 
	



