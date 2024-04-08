/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exercícios V

	QUESTÃO 03:
	Fazer um programa que exiba todos os divisores de um número 
	fornecido pelo usuário. 
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
	
	//variando os "possíveis" divisores de 'n'
	for (i=1;i<=n;i++)
	{
		//verificando se 'i' é divisor de 'n'
		if (n % i == 0)
		{
			printf ("%d ", i);
		}
	}	
}
