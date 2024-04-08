/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exercícios IX (Funções)
	
	QUESTÃO 08:
	Desenvolver uma função que exiba todos os números primos inferiores 
	a determinado valor inteiro N.

			Parâmetro:	n
			Retorno:	----
			
	versão 2: o for interno termina assim que um divisor é encontrado
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
void exibirPrimos (int n);

//main
void main ()
{
	//chamando a função
	exibirPrimos (100);
}

//implementação das funções
void exibirPrimos (int n)
{
	//declaração de variáveis
	int i, j, cont;
	
	//variando todos os valores no intervalo de 2 a 'n' (uma vez que 1 não é primo)
	for (i=2;i<=n;i++)
	{
		//zerando a quantidade de divisores de 'i'
		cont = 0;
		
		//verificando quantos são os divisores de 'i'
		for (j=2;(j<=i/2)&&(cont==0);j++)
		{
			if (i%j==0)	//'j' é divisor de 'i'
			{
				cont++;
			}
		}
		
		//se não houver divisores no intervalo de 2 a 'i'/2, é primo
		if (cont == 0)
		{
			printf ("%d ", i);
		}
	}
}
