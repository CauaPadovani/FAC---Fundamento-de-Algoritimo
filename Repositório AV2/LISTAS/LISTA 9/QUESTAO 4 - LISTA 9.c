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
	int i, menor, mDiv;
	
	//definindo o menor valor
	if (n1 < n2)
	{
		menor = n1;
	}
	else
	{
		menor = n2;
	}
	
	//verificando os "possíveis divisores comuns"
	for (i=1;i<=menor;i++)
	{
		//verificando se 'i' é divisor dos dois números
		if ((n1%i==0) && (n2%i==0))
		{
			mDiv = i; 
		}
	}
	
	//retornando o resultado
	return mDiv;
}
