/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 22/06/2023
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 03:
	Pede-se a implementação de uma função que, dado um vetor contendo 
	números reais, determine se o mesmo encontra-se ordenado de forma 
	crescente.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 15

//declaração de protótipos
int verificaOrdenacao (float vetor[], int tamanho);

void preencherAleatorio (float vetor[], int tamanho);
void exibir (float vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	float vet1[QUANT];
	float vet2[5] = {1,3,5,5,7};

	//preenchendo o vetor 1 aletaroriamente	
	preencherAleatorio (vet1, QUANT);
	
	//exibir o vetor 1 antes da chamada da função
	exibir (vet1, QUANT);
		
	//chamando a função para o vetor 1
	if (verificaOrdenacao (vet1, QUANT) == 1)
	{
		printf ("\nVetor 1 esta ordenado crescentemente!\n");
	}
	else
	{
		printf ("\nVetor 1 NAO esta ordenado crescentemente!\n");
	}
	
	//exibir o vetor 2 antes da chamada da função
	exibir (vet2, 5);
		
	//chamando a função para o vetor 2
	if (verificaOrdenacao (vet2, 5) == 1)
	{
		printf ("\nVetor 2 esta ordenado crescentemente!\n");
	}
	else
	{
		printf ("\nVetor 2 NAO esta ordenado crescentemente!\n");
	}

}

//implementação das funções
int verificaOrdenacao (float vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//varrendo o vetor
	for (i=0;i<tamanho-1;i++)
	{
		//verificando se o elemento da posição 'i' é maior do que o seguinte
		if (vetor[i] > vetor[i+1])
		{
			return 0;	//vetor não está ordenado!
		}
	}
	
	//se chegou aqui, o vetor está ordenado!
	return 1;
}

void preencherAleatorio (float vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%100 + 1;  //gerando números de 1 a 100
	}
}

void exibir (float vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", vetor[i]);
	}
	
	printf ("\n\n");
}
