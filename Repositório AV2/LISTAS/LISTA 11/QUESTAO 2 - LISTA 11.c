/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 22/06/2023
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 02:
	Implementar uma função que, dado um vetor de reais, troque o 1º e 
	o 2º elementos, em seguida o 3º e o 4º elementos e assim 
	sucessivamente, até se chegar ao final do vetor.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 15

//declaração de protótipos
void trocarElementos (int vetor[], int tamanho);

void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int vet[QUANT];

	//preenchendo o vetor aletaroriamente	
	preencherAleatorio (vet, QUANT);
	
	//exibir o vetor antes da chamada da função
	exibir (vet, QUANT);
		
	//chamando a função
	trocarElementos (vet, QUANT);

	//exibir o vetor após a chamada da função
	exibir (vet, QUANT);
}

//implementação das funções
void trocarElementos (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i, aux;
	
	//percorrendo o vetor
	for (i=0;i<tamanho-1;i+=2)
	{
		//trocando os elementos das posições i e i+1
		aux = vetor[i];
		vetor[i] = vetor[i+1];
		vetor[i+1] = aux;
	}
}

void preencherAleatorio (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%100 + 1;  //gerando números de 1 a 100
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
