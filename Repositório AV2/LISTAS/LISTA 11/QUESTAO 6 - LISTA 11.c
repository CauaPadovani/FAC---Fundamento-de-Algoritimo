/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 24/06/2023 (aula extra)
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 06:
	Faça uma função que, dado um vetor de reais, altere todas as ocorrências do 
	número A pelo número B.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 50

//protótipos das funções
void alterarOcorrencias (int vetor[], int tamanho, float numA, float numB);

void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int vet[TAM];
	int numVelho, numNovo;
	
	//preenchendo o vetor com números aleatórios
	preencherAleatorio (vet, TAM);
	
	//exibindo o vetor gerado
	exibir (vet, TAM);
	
	//lendo os números
	printf ("\n\nEntre com o valor a ser alterado: ");
	scanf ("%d", &numVelho);
	
	printf ("\n\nEntre com o novo valor: ");
	scanf ("%d", &numNovo);
	
	//chamando a função
	alterarOcorrencias (vet, TAM, numVelho, numNovo);	
	
	//exibindo o vetor após as alterações
	exibir (vet, TAM);
}

//implementação das funções
void alterarOcorrencias (int vetor[], int tamanho, float numA, float numB)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento que está na posição 'i' do vetor é 'numA'
		if (vetor[i] == numA)
		{
			vetor[i] = numB;
		}		
	}
}

void preencherAleatorio (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%100;  //gerando números aleatórios no intervalo de 0 a 99
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
