/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exerc�cios V

	QUEST�O 03:
	Fazer um programa que exiba todos os divisores de um n�mero 
	fornecido pelo usu�rio. 
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
	
	//variando os "poss�veis" divisores de 'n'
	for (i=1;i<=n;i++)
	{
		//verificando se 'i' � divisor de 'n'
		if (n % i == 0)
		{
			printf ("%d ", i);
		}
	}	
}
