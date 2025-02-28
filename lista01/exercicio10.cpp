#include <stdio.h>

int main() {
	// 10. Receber o ano de nascimento do usuário e dizer aproximadamente 
	// quantos dias de vida ele tem.
	int anoNascimento, diasDeVida;
	int anoAtual = 2025;
	printf("Qual ano você nasceu?");
	scanf("%i", &anoNascimento);
	diasDeVida = (anoAtual - anoNascimento )* 365;
	printf("Voce tem aproximadamente %i dias de vida!", diasDeVida);
	return 0;
}
