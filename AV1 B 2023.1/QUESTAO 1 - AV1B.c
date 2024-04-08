/*

	FAETERJ-Rio
	Monitoria FAC - Simulado
	
	
	Questão 01 [2,5 pontos]:
	Fazer um programa que escreva na tela os números 
	de 1 a 1000, respeitando às seguintes regras:
	
		1. O programa deve solicitar ao usuário dois
		números inteiros, a e b, que, obrigatoriamente,
		devem estar no intervalo de 1 a 1000 e, além
		disso, a deve ser menor ou igual a b;
		
		2. Caso os valores de a e b não atendam ao
		especificado no item anterior, uma mensagem de
		erro deverá ser exibida e, em seguida, a execução
		do programa terminada;
		
		3. Uma vez válidos os valores lidos, os números no
		intervalo de a a b deverão ser exibidos
		decrescentemente; os demais, em ordem
		crescente.
		
		
	Exemplo:
		a = 100
		b = 500
	
	Números apresentados:
		1 2 3 ... 99 	500 499 498 ... 101 	100 501 502 ... 1000

*/

#include <stdio.h>

// Função main
void main(){
	
	// Declaração de variáveis
	int a, b, i; 
	
	//Solicitando valores
	printf("Insira um numero (a): ");
	scanf("%d", &a);
	
	printf("Insira outro numero (b): ");
	scanf("%d", &b);
	
	
	// Validação dos números entre 1 e 1000
	if (a < 1 || a > b || b > 1000) {
		printf("ERRO! Fim do programa.");
		
	}
	else {
		
		// Estrutura de repetição [bloco 1]
		// Para um número menor que A, será exibido na tela de
		// forma CRESCENTE
		for (i=1; i<a; i++) {
			printf("%3d ", i);
		}
		printf("\n");
		
		// Estrutura de repetição [bloco 2]
		// Para os números entre A e B, será exibido na tela de
		// forma DECRESCENTE
		
		for(i=b; i>a; i--) {
			printf("%3d ", i);
		}
		printf("\n");
		
		// Estrutura de repetição [bloco 3]
		// Para os números maiores que B e menores que 1000,
		// será exibido na tela de forma CRESCENTE
		for(i=b+1; i<=1000; i++) {
			printf("%3d ", i);
		}
	}
}
