/*

	FAETERJ-Rio
	Monitoria FAC - Simulado
	
	Quest�o 02 [2,5 pontos]:
	Pede-se o desenvolvimento de tr�s programas (um
	para cada estrutura de repeti��o estudada) que
	exiba os n�meros de x a y (pode considerar x = y),
	exceto aqueles que forem divisores de z (neste caso,
	o divisor dever� ser substitu�do pelo s�mbolo *).

*/

#include <stdio.h>

// Fun��o main
void main() {
	
	// Declara��o de vari�veis
	int x, y, z, i;
	
	// Solicitando valores
	printf("Insira um numero (x): ");
	scanf("%d", &x);
	
	printf("Insira outro numero (y): ");
	scanf("%d", &y);
	
	printf("Insira mais um numero (z): ");
	scanf("%d", &z);
	
	/* VERS�O FOR */
	
	for(i=x;i<=y;i++) {
		if(z%i == 0) { // Divisores de Z
			printf("*");
		}
		else {
			printf("%3d ", i);
		}
	}
	
}
