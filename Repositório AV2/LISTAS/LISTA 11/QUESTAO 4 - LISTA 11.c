/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 22/06/2023
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 04:
	Fazer uma função que armazene em um vetor os 50 primeiros termos 
	da seguinte sequência:

					S = 1, 2, 4, 7, 11, 16, ...

	Nota: observem que a diferença entre o 1º e 2º elementos é igual 
	a 1, entre o 2º e 3º é igual a 2, entre o 3º e o 4º é igual a 3, 
	e assim sucessivamente.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 50

//declaração de protótipos
void preencherVetor (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int vetor[QUANT];
	
	//chamando a função
	preencherVetor (vetor, QUANT);
	
	//exibir o vetor
	exibir (vetor, QUANT);
}

//implementação das funções
void preencherVetor (int vetor[], int tamanho)
{
	//1, 2, 4, 7, 11, 16, ...
	
	//declaração de variáveis
	int i, r = 1;
	
	//armazenando o primeiro elemento
	vetor[0] = 1;
	
	for (i=1;i<tamanho;i++)
	{
		vetor[i] = vetor[i-1] + r;
		
		r++;
	}
}

void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}
