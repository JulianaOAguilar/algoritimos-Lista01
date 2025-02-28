# include <stdio.h>
int main() 
{
	// 9. Na Dinamarca todo cidadão tem acesso à educação e saúde de qualidade através do pagamento
	// de um imposto único sobre o salário, de 37%. Receber o salário bruto
	// (valor do salário sem descontos) de um trabalhador dinamarquês
	// e calcular o salário líquido (valor do salário após os descontos).
	
	float salarioBruto, desconto, salarioLiquido;
	desconto = 0.37;
	printf("qual seu salario, em dinamarques: ");
	scanf("%f", &salarioBruto);
	salarioLiquido = salarioBruto - (salarioBruto * 0.27);
	printf("O salario do dinamarques e de RS%.2f", salarioLiquido);
	return 0;
	
	
}
