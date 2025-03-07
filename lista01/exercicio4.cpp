#include <stdio.h>

int main() 
{
	//4. Receber uma temperatura em Fahrenheits e convertê-la para Celsius.
	// Celsius = (Fahrenheit - 32) / 1.8.
	
	float fahrenheit, celsius;
	printf("Insira uma temperatura (em graus fahrenheit): ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - 32) / 1.8;
	printf("%.2f fahrenheit equivalem a %.2f graus celsius.", fahrenheit, celsius);
	return 0;
}
