/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exercícios V

	QUESTÃO 01:
	Dado um número inteiro N, fazer um programa que exiba os números 
	pares iguais ou inferiores a N.
*/

//importação de bibliotecas
#include <stdio.h>


//main
void main ()
{
	//declaração de variáveis
	int i, n;
	
	//obtendo o número
	printf ("Entre com o numero: ");
	scanf ("%d", &n);
	
	//variando todos os valores do intervalo de 0 a 'n'
	for (i=0;i<=n;i++)
	{
		//verificando se 'i' é par
		if (i % 2 == 0) 
		{
			printf ("%d ", i);
		}
	}
}
