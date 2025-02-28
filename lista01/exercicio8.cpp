#include <stdio.h>

int main() 
{
	//8. A disciplina Algoritmos e Programação é dividida em duas partes: teoria e prática. 
	//Na teoria, são aplicadas duas provas (com nota de 0 a 10 cada). Na prática também vale
	//a mesma fórmula. As notas das duas partes se juntam no final do semestre para compor a nota 
	//do aluno na disciplina, mas a teoria tem peso de 60%, enquanto a prática tem peso de 40%. 
	//Receba as notas de um aluno em cada prova teórica e prática e mostre a nota final do semestre
	// dele na disciplina
	
	float provaTeorica1, provaTeorica2, provaPratica1, provaPratica2, nota;
	printf("Qual sua nota na prova teorica 1?: ");
	scanf("%f", &provaTeorica1);
	printf("Qual sua nota na prova teorica 2?: ");
	scanf("%f", &provaTeorica2);
	printf("Qual sua nota na prova pratica 1?: ");
	scanf("%f", &provaPratica1);
	printf("Qual sua nota na prova pratica 2?: ");
	scanf("%f", &provaPratica2);
	float mediaTeorica = (provaTeorica1 + provaTeorica2) / 2;
	float mediaPratica = (provaPratica1 + provaPratica2) / 2;
	nota = (mediaTeorica * 0.6) + (mediaPratica * 0.4);
	printf("Sua media e de %.1f", nota);
	return 0;	
}
