/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exerc�cios IX (Fun��es)
	
	QUEST�O 08:
	Desenvolver uma fun��o que exiba todos os n�meros primos inferiores 
	a determinado valor inteiro N.

			Par�metro:	n
			Retorno:	----
			
	vers�o 2: o for interno termina assim que um divisor � encontrado
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
void exibirPrimos (int n);

//main
void main ()
{
	//chamando a fun��o
	exibirPrimos (100);
}

//implementa��o das fun��es
void exibirPrimos (int n)
{
	//declara��o de vari�veis
	int i, j, cont;
	
	//variando todos os valores no intervalo de 2 a 'n' (uma vez que 1 n�o � primo)
	for (i=2;i<=n;i++)
	{
		//zerando a quantidade de divisores de 'i'
		cont = 0;
		
		//verificando quantos s�o os divisores de 'i'
		for (j=2;(j<=i/2)&&(cont==0);j++)
		{
			if (i%j==0)	//'j' � divisor de 'i'
			{
				cont++;
			}
		}
		
		//se n�o houver divisores no intervalo de 2 a 'i'/2, � primo
		if (cont == 0)
		{
			printf ("%d ", i);
		}
	}
}
