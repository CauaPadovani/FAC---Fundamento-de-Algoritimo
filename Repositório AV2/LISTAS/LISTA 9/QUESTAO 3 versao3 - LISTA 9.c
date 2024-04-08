/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 01/06/2023
	
	Lista de Exerc�cios IX (Fun��es)
	
	QUEST�O 03:
	Desenvolver uma fun��o que calcule o n-�simo termo da sequ�ncia 
	de Fibonacci.
	
				0 1 1 2 3 5 8 13 21 ... 
*/

//importa��o de bibliotecas
#include <stdio.h>

//implementa��o das fun��es
/*Par�metro:	n
Retorno:	n-�simo*/
int fibonacci (int n)
{
	//declara��o de vari�veis
	int i, ultimo, penultimo, termo;
	
	if ((n==1) || (n==2))
	{
		return n-1;	
	}
	else
	{
		//inicializando com os dois primeiros termos da sequ�ncia
		penultimo = 0;
		ultimo = 1;
			
		//calculando do 3� ao n-�simo termos
		for (i=3;i<=n;i++)
		{
			termo = penultimo + ultimo;
			
			//atualizando os dois anteriores
			penultimo = ultimo;
			ultimo = termo;				
		}	
		
		//retornando o resultado
		return termo;
	}
}

//main
void main ()
{
	//declara��o de vari�veis
	int n = 10;
	int resp = fibonacci (n);
	
	printf ("%do. termo: %d\n", n, resp);
}
