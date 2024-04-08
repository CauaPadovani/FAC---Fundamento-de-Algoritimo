/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 25/05/2023
	
	Funções
	
	Exemplo 1: calcular o fatorial de um número (sem uso de funções)
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, n, fat;
	
	//obtendo o número
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	//calculando o fatorial de 'n'
	fat = 1;
	
	for (i=2;i<=n;i++)
	{
		fat *= i;
	}
	
	//exibindo o resultado
	printf ("\n%d! = %d", n, fat);
}
