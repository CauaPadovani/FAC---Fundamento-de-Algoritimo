/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exerc�cios X (Fun��es)
			
	QUEST�O 06:
	Desenvolver uma fun��o que, dado um n�mero inteiro N, calcule o 
	valor do seguinte somat�rio:

	S= 1+((n-1)^1)/1!+(n-2)^2/2!+(n-3)^3/3!+...+1^(n-1)/((n-1)!)
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
float somatorio (int n);

int fatorial (int n);
int potencia (int base, int expoente);

//main
void main ()
{
	//declara��o de vari�veis
	float soma;
	
	//chamando a fun��o
	soma = somatorio (3);
	
	//exibindo o resultado
	printf ("\nSoma = %.1f", soma);
}

//implementa��o das fun��es
float somatorio (int n)
{
	//declara��o de vari�veis
	int i;
	float s = 0;
	
	//variando as parcelas de 0 a 'n' - 1
	for (i=0;i<=n-1;i++)
	{
		s += (float)potencia (n-i,i)/fatorial(i);
	}
	
	//retornando o resultado
	return s;
}

int fatorial (int n)
{
	//declara��o de vari�veis
	int i, fat;
	
	//calculando o fatorial de 'n'
	fat = 1;
	
	for (i=2;i<=n;i++)
	{
		fat *= i;
	}
	
	//retornando o resultado da fun��o
	return fat;
}

int potencia (int base, int expoente)
{
	//declara��o de vari�veis
	int pot = 1;
	int i;
	
	//variando 'expoente' vezes
	for (i=1;i<=expoente;i++)
	{
		//atualizando 'pot'
		pot *= base;
	}	
	
	//retornando o resultado
	return pot;
}
