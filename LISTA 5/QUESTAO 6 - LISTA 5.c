/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exerc�cios V

	QUEST�O 06:
	Criar um programa que exiba os N primeiros termos da seguinte s�rie: 

							1,2,8,64,1024,...

*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, n, termo, razao;
	
	//obtendo o valor de N
	printf ("Numero de termos: ");
	scanf ("%d", &n);
	
	i = 1;
	termo = 1;
	razao = 2;
	while (i <= n)
	{
		printf ("%d ", termo);
		
		i++;
		termo *= razao;
		razao *= 2;
	}
}
