/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exercícios V

	QUESTÃO 02:
	Desenvolver um programa que calcule a soma dos números de 1 a N, 
	sendo N um número inteiro fornecido pelo usuário.
*/

//importação de bibliotecas
#include <stdio.h>


//main
void main ()
{
	//declaração de variáveis
	int i, n, soma = 0;
	
	//obtendo o número
	printf ("Entre com o numero: ");
	scanf ("%d", &n);
	
	//variando os valores de 1 a 'n'
	for (i=1;i<=n;i++)
	{
		soma += i;   //soma = soma + i;
	}
	
	//exibindo o resultado
	printf ("Soma = %d", soma);
	
}
