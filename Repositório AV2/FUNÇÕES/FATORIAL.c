/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 25/05/2023
	
	Fun��es
	
	Exemplo 1: calcular o fatorial de um n�mero (sem uso de fun��es)
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, n, fat;
	
	//obtendo o n�mero
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
