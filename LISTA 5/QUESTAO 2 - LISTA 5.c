/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exerc�cios V

	QUEST�O 02:
	Desenvolver um programa que calcule a soma dos n�meros de 1 a N, 
	sendo N um n�mero inteiro fornecido pelo usu�rio.
*/

//importa��o de bibliotecas
#include <stdio.h>


//main
void main ()
{
	//declara��o de vari�veis
	int i, n, soma = 0;
	
	//obtendo o n�mero
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
