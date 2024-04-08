/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exercícios X (Funções)
			
	QUESTÃO 06:
	Desenvolver uma função que, dado um número inteiro N, calcule o 
	valor do seguinte somatório:

	S= 1+((n-1)^1)/1!+(n-2)^2/2!+(n-3)^3/3!+...+1^(n-1)/((n-1)!)
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
float somatorio (int n);

int fatorial (int n);
int potencia (int base, int expoente);

//main
void main ()
{
	//declaração de variáveis
	float soma;
	
	//chamando a função
	soma = somatorio (3);
	
	//exibindo o resultado
	printf ("\nSoma = %.1f", soma);
}

//implementação das funções
float somatorio (int n)
{
	//declaração de variáveis
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
	//declaração de variáveis
	int i, fat;
	
	//calculando o fatorial de 'n'
	fat = 1;
	
	for (i=2;i<=n;i++)
	{
		fat *= i;
	}
	
	//retornando o resultado da função
	return fat;
}

int potencia (int base, int expoente)
{
	//declaração de variáveis
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
