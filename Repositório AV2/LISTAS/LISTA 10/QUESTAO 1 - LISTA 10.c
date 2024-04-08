/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exerc�cios X (Fun��es)
	
	QUEST�O 01:
	Desenvolver uma fun��o que, dado um n�mero inteiro n, exiba todos 
	os n�meros existentes no intervalo definido por a e b (a < b), 
	exceto aqueles que forem m�ltiplos de n.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
void exibirNumeros (int n, int a, int b);

//main
void main ()
{
	//chamando a fun��o
	exibirNumeros (5, 10, 100);	
}

//implementa��o das fun��es
void exibirNumeros (int n, int a, int b)
{
	//declara��o de vari�veis
	int i;
	
	//variando todos os valores do intervalo de 'a' a 'b'
	for(i=a;i<=b;i++)
	{
		//verificando se 'i' n�o � m�ltiplo de 'n'
		if (i%n!=0)
		{
			printf ("%d ", i);
		}
	}
}
