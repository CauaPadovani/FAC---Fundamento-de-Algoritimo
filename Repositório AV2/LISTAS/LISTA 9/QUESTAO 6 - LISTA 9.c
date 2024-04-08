/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 01/06/2023
	
	Lista de Exercícios IX (Funções)
	
	QUESTÃO 06:
	Implementar uma função que, dado um número inteiro N, exiba uma 
	sequência de números como as ilustradas nos exemplos a seguir:

	Exemplo 1:  N = 3
 	(1 2) (1 3) (2 1) (2 3) (3 1) (3 2)

	Exemplo 2:  N = 5
 	(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1) (3 2) 
	(3 4) (3 5) (4 1) (4 2) (4 3) (4 5) (5 1) (5 2) (5 3) (5 4)
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
//Parâmetro:	n
//Retorno:	-----
void exibirPares (int n);

//main
void main ()
{
	exibirPares (5);
}

//implementação das funções
void exibirPares (int n)
{
	//declaração de variáveis
	int i, j;
	
	//variando o primeiro elemento do par
	for (i=1;i<=n;i++)
	{
		//variando o segundo elemento do par
		for (j=1;j<=n;j++)
		{
			//verificando se os valores são diferentes
			if (i != j)
			{
				printf ("(%d %d) ", i, j);
			}
		}
	}
}
