/*

	FAETERJ-Rio
	Monitoria FAC - Simulado
	
	
	Quest�o 01 [2,5 pontos]:
	Fazer um programa que escreva na tela os n�meros 
	de 1 a 1000, respeitando �s seguintes regras:
	
		1. O programa deve solicitar ao usu�rio dois
		n�meros inteiros, a e b, que, obrigatoriamente,
		devem estar no intervalo de 1 a 1000 e, al�m
		disso, a deve ser menor ou igual a b;
		
		2. Caso os valores de a e b n�o atendam ao
		especificado no item anterior, uma mensagem de
		erro dever� ser exibida e, em seguida, a execu��o
		do programa terminada;
		
		3. Uma vez v�lidos os valores lidos, os n�meros no
		intervalo de a a b dever�o ser exibidos
		decrescentemente; os demais, em ordem
		crescente.
		
		
	Exemplo:
		a = 100
		b = 500
	
	N�meros apresentados:
		1 2 3 ... 99 	500 499 498 ... 101 	100 501 502 ... 1000

*/

#include <stdio.h>

// Fun��o main
void main(){
	
	// Declara��o de vari�veis
	int a, b, i; 
	
	//Solicitando valores
	printf("Insira um numero (a): ");
	scanf("%d", &a);
	
	printf("Insira outro numero (b): ");
	scanf("%d", &b);
	
	
	// Valida��o dos n�meros entre 1 e 1000
	if (a < 1 || a > b || b > 1000) {
		printf("ERRO! Fim do programa.");
		
	}
	else {
		
		// Estrutura de repeti��o [bloco 1]
		// Para um n�mero menor que A, ser� exibido na tela de
		// forma CRESCENTE
		for (i=1; i<a; i++) {
			printf("%3d ", i);
		}
		printf("\n");
		
		// Estrutura de repeti��o [bloco 2]
		// Para os n�meros entre A e B, ser� exibido na tela de
		// forma DECRESCENTE
		
		for(i=b; i>a; i--) {
			printf("%3d ", i);
		}
		printf("\n");
		
		// Estrutura de repeti��o [bloco 3]
		// Para os n�meros maiores que B e menores que 1000,
		// ser� exibido na tela de forma CRESCENTE
		for(i=b+1; i<=1000; i++) {
			printf("%3d ", i);
		}
	}
}
