/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 06/07/2023
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 08:
	Dados um vetor de reais (cujos elementos estão ordenados 
	crescentemente) e um número x, retornar a posição da primeira 
	ocorrência de x (caso encontre-se no vetor) ou a posição na qual 
	deveria estar (caso contrário).
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 30

//protótipos das funções
int buscar (float vetor[], int tamanho, float numero);

void preencherAleatorioCrescente (float vetor[], int tamanho);
void exibir (float vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	float vetor[TAM], numero;
	int posicao;
	
	//preenchendo o vator aleatoriamente
	preencherAleatorioCrescente (vetor, TAM);
	
	//exibindo o vetor 
	exibir (vetor, TAM);
	
	//lendo o valor a ser buscado
	printf ("\n\nEntre com o valor a ser buscado: ");
	scanf ("%f", &numero);
	
	//chamando a função
	posicao = buscar (vetor, TAM, numero);

	//exibindo a posição retornada
	printf ("\nPosicao: %d", posicao);
}

//implementação das funções
int buscar (float vetor[], int tamanho, float numero)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o número foi encontrado
		/*if (vetor[i] == numero)
		{
			return i;
		}
		else
		{
			if (vetor[i] > numero)
			{
				return i;
			}
		}*/
		if (vetor[i] >= numero)
		{
			return i;
		}
	}
	
	//caso o valor seja maior do que todos os elementos do vetor
	return tamanho;
}

void preencherAleatorioCrescente (float vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	vetor[0] = rand()%10;
	
	for (i=1; i<tamanho; i++)
	{
		vetor[i] = vetor[i-1]+rand()%4;  
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
