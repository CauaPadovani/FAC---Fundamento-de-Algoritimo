/*

	FAETERJ-Rio
	Monitoria FAC - Simulado
	
	Questão 02 [2,5 pontos]:
	Pede-se o desenvolvimento de três programas (um
	para cada estrutura de repetição estudada) que
	exiba os números de x a y (pode considerar x = y),
	exceto aqueles que forem divisores de z (neste caso,
	o divisor deverá ser substituído pelo símbolo *).

*/

#include <stdio.h>

// Função main
void main() {
	
	// Declaração de variáveis
	int x, y, z, i;
	
	// Solicitando valores
	printf("Insira um numero (x): ");
	scanf("%d", &x);
	
	printf("Insira outro numero (y): ");
	scanf("%d", &y);
	
	printf("Insira mais um numero (z): ");
	scanf("%d", &z);
	
	/* VERSÃO FOR */
	
	for(i=x;i<=y;i++) {
		if(z%i == 0) { // Divisores de Z
			printf("*");
		}
		else {
			printf("%3d ", i);
		}
	}
	
}
