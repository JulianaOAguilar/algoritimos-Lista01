# include <stdio.h>
int main() 
{
	// 9. Na Dinamarca todo cidad�o tem acesso � educa��o e sa�de de qualidade atrav�s do pagamento
	// de um imposto �nico sobre o sal�rio, de 37%. Receber o sal�rio bruto
	// (valor do sal�rio sem descontos) de um trabalhador dinamarqu�s
	// e calcular o sal�rio l�quido (valor do sal�rio ap�s os descontos).
	
	float salarioBruto, desconto, salarioLiquido;
	desconto = 0.37;
	printf("qual seu salario, em dinamarques: ");
	scanf("%f", &salarioBruto);
	salarioLiquido = salarioBruto - (salarioBruto * 0.27);
	printf("O salario do dinamarques e de RS%.2f", salarioLiquido);
	return 0;
	
	
}
