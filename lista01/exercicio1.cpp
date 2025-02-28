#include <stdio.h>

int main()
{
	//1. Receber dois valores e calcular sua média aritmética.
	int num1, num2, media;
	printf("Digite o 1 numero: ");
	scanf("%i", &num1);
	printf("Digite o 2 numero: ");
	scanf("%i", &num2);
	media = (num1 + num2) / 2; 
	printf("a média e %i!", media);
	
	return 0;
}
