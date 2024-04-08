/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 01/06/2023
	
	Lista de Exercícios IX (Funções)
	
	QUESTÃO 03:
	Desenvolver uma função que calcule o n-ésimo termo da sequência 
	de Fibonacci.
	
				0 1 1 2 3 5 8 13 21 ... 
*/

//importação de bibliotecas
#include <stdio.h>

//implementação das funções
/*Parâmetro:	n
Retorno:	n-ésimo*/
int fibonacci (int n)
{
	//declaração de variáveis
	int i, ultimo, penultimo, termo;
	
	if ((n==1) || (n==2))
	{
		return n-1;	
	}
	else
	{
		//inicializando com os dois primeiros termos da sequência
		penultimo = 0;
		ultimo = 1;
			
		//calculando do 3º ao n-ésimo termos
		for (i=3;i<=n;i++)
		{
			termo = penultimo + ultimo;
			
			//atualizando os dois anteriores
			penultimo = ultimo;
			ultimo = termo;				
		}	
		
		//retornando o resultado
		return termo;
	}
}

//main
void main ()
{
	//declaração de variáveis
	int n = 10;
	int resp = fibonacci (n);
	
	printf ("%do. termo: %d\n", n, resp);
}
