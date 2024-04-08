/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 22/06/2023
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 01:
	Desenvolver uma função que determine o número de ocorrências de 
	um número inteiro x em um vetor A.
	
	versão 3: gerando números aleatórios.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 50

//declaração de protótipos
int numOcorrencias (int vetor[], int tamanho, int numero);

void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int vet[QUANT];
	int valor, quant;

	//preenchendo o vetor aletaroriamente	
	preencherAleatorio (vet, QUANT);
	exibir (vet, QUANT);
	
	//lendo o valor a ser buscado
	printf ("Entre com o valor a ser buscado: ");
	scanf ("%d", &valor);
	
	//chamando a função
	quant = numOcorrencias (vet, QUANT, valor);
	
	//exibindoo resultado
	printf ("\n\nForam encontradas %d ocorrencias do numero %d no vetor.", quant, valor);						    
}

//implementação das funções
int numOcorrencias (int vetor[], int tamanho, int numero)
{
	//declaração de variáveis
	int i, cont = 0;
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando 
		if (vetor[i] == numero)
		{
			cont++;
		}		
	}
	
	//retornando a quantidade de ocorrências
	return cont;
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
