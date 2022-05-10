#include <stdio.h>

float n1, n2; 
//Se declaran ambos valores y flotantes para permitir numeros decimales


int main(){
	//Valores recibidos
	printf("Type first value: ");

	scanf("%f", &n1); //Es para que se puedan ingresar los valores, el tipo de variable y la variable que recibirá luego

	printf("\nType second value: ");

	scanf("%f", &n2);
	
	//Valores en proceso de calculo
	float sum = n1 + n2;

	float subtract = n1 - n2;

	float multiply = n1 * n2;

	float divide = n1 / n2;
	
	//Imprimr los resultados
	printf("\nN1 + N2 = %f", sum);

	printf("\nN1 - N2 = %f", subtract);

	printf("\nN1 * N2 = %f", multiply);

	printf("\nN1 / N2 = %f", divide);
	
	return 0;