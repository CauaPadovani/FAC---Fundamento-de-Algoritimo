/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exerc�cios V

	QUEST�O 01:
	Dado um n�mero inteiro N, fazer um programa que exiba os n�meros 
	pares iguais ou inferiores a N.
*/

//importa��o de bibliotecas
#include <stdio.h>


//main
void main ()
{
	//declara��o de vari�veis
	int i, n;
	
	//obtendo o n�mero
	printf ("Entre com o numero: ");
	scanf ("%d", &n);
	
	//variando todos os valores do intervalo de 0 a 'n'
	for (i=0;i<=n;i++)
	{
		//verificando se 'i' � par
		if (i % 2 == 0) 
		{
			printf ("%d ", i);
		}
	}
}
