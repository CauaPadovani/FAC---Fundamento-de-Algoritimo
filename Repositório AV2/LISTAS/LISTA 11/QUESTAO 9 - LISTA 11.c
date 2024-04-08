/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 06/07/2023
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 09:
	Implementar a função de inserção de determinado elemento em um 
	vetor ordenado crescentemente (dica: utilizar a função do item 
	08 para auxiliar).
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 10

//protótipos das funções
int inserir (float vetor[], int capacidade, int *quantidade, float numero);
int buscar (float vetor[], int tamanho, float numero);

void preencherAleatorioCrescente (float vetor[], int tamanho);
void exibir (float vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	float vetor[TAM], numero;
	int retorno, quantidade;
	
	//preenchendo o vator aleatoriamente
	preencherAleatorioCrescente (vetor, TAM/2);
	quantidade = TAM/2;
	
	//exibindo o vetor 
	exibir (vetor, quantidade);
	
	do 
	{
		//lendo o valor a ser inserido
		printf ("\n\nEntre com o valor a ser inserido: ");
		scanf ("%f", &numero);
		
		if (numero != -1)
		{
			//tentando inserir o valor
			retorno = inserir (vetor, TAM, &quantidade, numero);
			
			//testando o retorno
			if (retorno == 1)
			{
				//exibindo o vetor
				exibir (vetor, quantidade);
			}
			else
			{
				printf ("\n\nInsercao nao realizada (vetor cheio)!\n");
			}			
		}			
	}
	while (numero != -1);
}

//implementação das funções
int inserir (float vetor[], int capacidade, int *quantidade, float numero)
{
	//declaração de variáveis
	int posicao, i;
	
	//verificando se existe espaço no vetor
	if (*quantidade < capacidade)
	{
		//buscando a posição na qual o número será inserido
		posicao = buscar (vetor, *quantidade, numero);
		
		//deslocando para a direita os elementos da posicao 'posicao' ao final
		for (i=(*quantidade)-1;i>=posicao;i--)
		{
			vetor[i+1] = vetor[i];
		}
		
		//inserindo o novo valor em 'posicao'
		vetor[posicao] = numero;
		
		//atualizando a quantidade
		(*quantidade)++;
		
		return 1;		
	}
	else
	{
		return 0;
	}
}

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
