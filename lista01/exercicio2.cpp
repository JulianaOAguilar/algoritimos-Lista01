#include <stdio.h>

int main()
{
	//2. Receber base e altura de um triangulo e calcular sua área.
	float base, altura, area;
	printf("Digite a base do triangulo: ");
	scanf("%f", &base);
	printf("Digite a altura do triangulo: ");
	scanf("%f", &altura);
	area = (base * altura) / 2;
	printf("A area do seu triangulo e de %.2f", base);
	return 0;

}
