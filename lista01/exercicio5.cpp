# include <stdio.h>

int main()
{
	// 5. A velocidade m�dia de um ve�culo em um percurso � dada atrav�s da dist�ncia
	// percorrida pelo tempo, ou seja, Vm = ?S / ?t. 
	//Calcular a velocidade m�dia do ve�culo em uma estrada recebendo esses dois
	// dados do percurso.

	float velocidadeMedia, distancia, tempo;
	printf("Qual a distancia do percurso?: ");
	scanf("%f", &distancia);
	printf("Em quanto tempo esse percurso foi feito?: ");
	scanf("%f", &tempo);
	velocidadeMedia = distancia / tempo;
	printf("Sua velocidade media foi de %.2f", velocidadeMedia);
	return 0;
	
	

}
