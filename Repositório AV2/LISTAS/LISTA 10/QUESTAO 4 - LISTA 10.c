/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exercícios X (Funções)
		
	QUESTÃO 04:
	A função logarítmica é complementar à potenciação. Ou seja, uma vez 
	que 3^4 = 81, podemos então afirmar que log 3 81 = 4.

	Generalizando, temos que:

		base^expoente = pot     <=>     log base pot = expoente

	Com base nessa descrição, pede-se o desenvolvimento de uma função 
	que, dados a e b, calcule o valor de log a b.

	Nota: a sua solução deverá apresentar um valor inteiro que, na 
	verdade, será a solução aproximada do logaritmo.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
int logaritmo (int base, int numero);

//main
void main ()
{
	//declaração de variáveis
	int resp = logaritmo (2, 20);
	
	//exibindo o resultado
	printf ("Resposta: %d", resp);
}

//implementação das funções
int logaritmo (int base, int numero)
{
	//declaração de variáveis
	int potencia = 1, cont = 0;
	
	//enquanto 'potencia' não atingir 'numero'
	while (potencia < numero)
	{
		//atualizando 'pontencia'
		potencia *= base;
		
		//atualizando o resultado
		cont++;
	}
	
	return cont;
}
