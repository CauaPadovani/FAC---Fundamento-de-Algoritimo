/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exercícios X (Funções)
	
	QUESTÃO 01:
	Desenvolver uma função que, dado um número inteiro n, exiba todos 
	os números existentes no intervalo definido por a e b (a < b), 
	exceto aqueles que forem múltiplos de n.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
void exibirNumeros (int n, int a, int b);

//main
void main ()
{
	//chamando a função
	exibirNumeros (5, 10, 100);	
}

//implementação das funções
void exibirNumeros (int n, int a, int b)
{
	//declaração de variáveis
	int i;
	
	//variando todos os valores do intervalo de 'a' a 'b'
	for(i=a;i<=b;i++)
	{
		//verificando se 'i' não é múltiplo de 'n'
		if (i%n!=0)
		{
			printf ("%d ", i);
		}
	}
}
