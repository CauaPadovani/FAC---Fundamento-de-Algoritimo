/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 06/07/2023
	
	Lista de Exerc�cios XI (Vetores)
	
	QUEST�O 08:
	Dados um vetor de reais (cujos elementos est�o ordenados 
	crescentemente) e um n�mero x, retornar a posi��o da primeira 
	ocorr�ncia de x (caso encontre-se no vetor) ou a posi��o na qual 
	deveria estar (caso contr�rio).
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 30

//prot�tipos das fun��es
int buscar (float vetor[], int tamanho, float numero);

void preencherAleatorioCrescente (float vetor[], int tamanho);
void exibir (float vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	float vetor[TAM], numero;
	int posicao;
	
	//preenchendo o vator aleatoriamente
	preencherAleatorioCrescente (vetor, TAM);
	
	//exibindo o vetor 
	exibir (vetor, TAM);
	
	//lendo o valor a ser buscado
	printf ("\n\nEntre com o valor a ser buscado: ");
	scanf ("%f", &numero);
	
	//chamando a fun��o
	posicao = buscar (vetor, TAM, numero);

	//exibindo a posi��o retornada
	printf ("\nPosicao: %d", posicao);
}

//implementa��o das fun��es
int buscar (float vetor[], int tamanho, float numero)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o n�mero foi encontrado
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
	//declara��o de vari�veis
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
	//declara��o de vari�veis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", vetor[i]);
	}
	
	printf ("\n\n");
}
