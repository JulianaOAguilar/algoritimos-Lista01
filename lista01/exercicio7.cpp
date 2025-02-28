# include <stdio.h>

int main()
{
	// 7. Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. 
	//Receber o total de horas normais e o total de horas extras trabalhadas por um empregado
	// no mês e calcular o salário dele.
	
	float horaNormal, horaExtra, salarioMensal;
	printf("Quantas horas normais você trabalhou?: ");
	scanf("%f", &horaNormal);
	printf("Trabalhou horas extras? se sim, quantas?: ");
	scanf("%f", &horaExtra);
	if (horaExtra > 0) {
		salarioMensal = (horaNormal * 10) + (horaExtra * 15);
	} else {
		salarioMensal = (horaNormal * 10);
	}
	printf("O valor do seu salario sera de RS:%2.f reais", salarioMensal);
	return 0;

}
