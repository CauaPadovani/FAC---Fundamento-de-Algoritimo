/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 01/06/2023
	
	Lista de Exercícios IX (Funções)
	
	QUESTÃO 05:
	Fazer uma função que calcule o MMC (mínimo múltiplo comum) entre dois números.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
//Parâmetro:	n1, n2
//Retorno:	mmc
int mmc (int n1, int n2);
int max (int n1, int n2);

//main
void main ()
{
	//declaração de variáveis
	int num1 = 5, num2 = 6;
	int resp = mmc (num1, num2);
	
	printf ("MMC (%d, %d) = %d\n", num1, num2, resp);
}

//implementação das funções
int mmc (int n1, int n2)
{
	//declaração de variáveis
	int i, maior;
	
	//definindo o maior valor
	maior = max (n1,n2);
	
	//verificando os "possíveis múltiplos comuns"
	for (i=maior;i<=n1*n2;i++)
	{
		//verificando se 'i' é múltiplo dos dois números
		if ((i%n1==0) && (i%n2==0))
		{
			return i;
		}
	}
}

int max (int n1, int n2)
{
	/*if (n1 > n2)
	{
		return n1;
	}
	else
	{
		return n2;
	}*/
	
	return (n1>n2)?n1:n2;	
}
