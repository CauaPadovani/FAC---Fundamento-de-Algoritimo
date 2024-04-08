/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 01/06/2023
	
	Lista de Exerc�cios IX (Fun��es)
	
	QUEST�O 04:
	Fazer uma fun��o que calcule o MDC (m�ximo divisor comum) entre 
	dois n�meros.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
//Par�metro:	n1, n2
//Retorno:	mdc
int mdc (int n1, int n2);
int min (int n1, int n2);

//main
void main ()
{
	//declara��o de vari�veis
	int num1 = 20, num2 = 5;
	int resp = mdc (num1, num2);
	
	printf ("MDC (%d, %d) = %d\n", num1, num2, resp);
}

//implementa��o das fun��es
int mdc (int n1, int n2)
{
	//declara��o de vari�veis
	int i, menor;
	
	//definindo o menor valor
	menor = min (n1,n2);
	
	//verificando os "poss�veis divisores comuns"
	for (i=menor;i>=1;i--)
	{
		//verificando se 'i' � divisor dos dois n�meros
		if ((n1%i==0) && (n2%i==0))
		{
			return i; 
		}
	}
}

int min (int n1, int n2)
{
	/*if (n1 < n2)
	{
		return n1;
	}
	else
	{
		return n2;
	}*/
	
	return (n1<n2)?n1:n2;	
}
