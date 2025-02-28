#include <stdio.h>

int main()
{
	//3. Receber um comprimento em metros e convertê-lo para centímetros.
	float metros, centimetros;
	printf("insira um numero na unidade 'metros': ");
	scanf("%f", &metros);
	centimetros = metros * 100;
	printf("Convertendo %.2f em centimetros, o resultado e %.2f:", metros, centimetros);
	return 0;
}
