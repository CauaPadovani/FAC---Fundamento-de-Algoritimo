/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 01/06/2023
	
	Lista de Exercícios IX (Funções)
	
	QUESTÃO 04:
	Fazer uma função que calcule o MDC (máximo divisor comum) entre 
	dois números.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
//Parâmetro:	n1, n2
//Retorno:	mdc
int mdc (int n1, int n2);
int min (int n1, int n2);

//main
void main ()
{
	//declaração de variáveis
	int num1 = 20, num2 = 5;
	int resp = mdc (num1, num2);
	
	printf ("MDC (%d, %d) = %d\n", num1, num2, resp);
}

//implementação das funções
int mdc (int n1, int n2)
{
	//declaração de variáveis
	int i, menor;
	
	//definindo o menor valor
	menor = min (n1,n2);
	
	//verificando os "possíveis divisores comuns"
	for (i=menor;i>=1;i--)
	{
		//verificando se 'i' é divisor dos dois números
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
