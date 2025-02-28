# include <stdio.h>

int main()
{
	//6. Calcular o perímetro de uma circunferência recebendo seu raio.
	//Pesquise como calcular o perímetro. (utilizar  PI = 3.14)
	
	float perimetro, raio;
	float pi = 3.14;
	printf("Insira o raio da circunferencia: ");
	scanf("%f", &raio);
	perimetro = 2 * pi * raio;
	printf("o perimetro da circunferencia e %.2f", perimetro);
	return 0;
}
