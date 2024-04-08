/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 06/07/2023
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 07:
	Desenvolver uma função que remova determinado elemento (todas as 
	suas ocorrências) de um vetor de float. Ao final, retornar o 
	número de remoções realizadas.
	
	versão 02: deslocando o último elemento para a posição do número
	que está sendo removido.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 30

//protótipos das funções
int remover (float vetor[], int *quantidade, float numero);

void preencherAleatorio (float vetor[], int tamanho);
void exibir (float vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	float vetor[TAM], numero;
	int numRemocoes;
	int quantidade = TAM;
	
	//preenchendo o vator aleatoriamente
	preencherAleatorio (vetor, quantidade);
	
	//exibindo o vetor antes da remoção
	exibir (vetor, quantidade);
	
	//lendo o valor a ser removido
	printf ("\n\nEntre com o valor a ser removido: ");
	scanf ("%f", &numero);
	
	//chamando a função
	numRemocoes = remover (vetor, &quantidade, numero);

	//exibindo o vetor após a remoção
	exibir (vetor, quantidade);
	
	printf ("\nForam realizadas %d remocoes do valor %.1f", numRemocoes, numero);
}

//implementação das funções
int remover (float vetor[], int *quantidade, float numero)
{
	//declaração de variáveis
	int i, j, cont = 0;
	
	//percorrendo o vetor
	//for (i=0;i<*quantidade;)
	i=0;
	while (i<*quantidade)
	{
		//verificando se o elemento foi encontrado
		if (vetor[i] == numero)
		{
			//deslocando o último elemento para a posição 'i'
			vetor[i] = vetor[(*quantidade)-1];
			
			//atualizando a quantidade
			(*quantidade)--;
			
			//atualizando a quantidade de remoções feitas
			cont++;
		}
		else
		{
			i++;
		}
	}	
	
	//retornando a quantidade de remoções realizadas
	return cont;	
}

void preencherAleatorio (float vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%10;  //gerando números aleatórios no intervalo de 0 a 99
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
