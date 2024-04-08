/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 22/06/2023
	
	Lista de Exerc�cios XI (Vetores)
	
	QUEST�O 03:
	Pede-se a implementa��o de uma fun��o que, dado um vetor contendo 
	n�meros reais, determine se o mesmo encontra-se ordenado de forma 
	crescente.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 15

//declara��o de prot�tipos
int verificaOrdenacao (float vetor[], int tamanho);

void preencherAleatorio (float vetor[], int tamanho);
void exibir (float vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	float vet1[QUANT];
	float vet2[5] = {1,3,5,5,7};

	//preenchendo o vetor 1 aletaroriamente	
	preencherAleatorio (vet1, QUANT);
	
	//exibir o vetor 1 antes da chamada da fun��o
	exibir (vet1, QUANT);
		
	//chamando a fun��o para o vetor 1
	if (verificaOrdenacao (vet1, QUANT) == 1)
	{
		printf ("\nVetor 1 esta ordenado crescentemente!\n");
	}
	else
	{
		printf ("\nVetor 1 NAO esta ordenado crescentemente!\n");
	}
	
	//exibir o vetor 2 antes da chamada da fun��o
	exibir (vet2, 5);
		
	//chamando a fun��o para o vetor 2
	if (verificaOrdenacao (vet2, 5) == 1)
	{
		printf ("\nVetor 2 esta ordenado crescentemente!\n");
	}
	else
	{
		printf ("\nVetor 2 NAO esta ordenado crescentemente!\n");
	}

}

//implementa��o das fun��es
int verificaOrdenacao (float vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//varrendo o vetor
	for (i=0;i<tamanho-1;i++)
	{
		//verificando se o elemento da posi��o 'i' � maior do que o seguinte
		if (vetor[i] > vetor[i+1])
		{
			return 0;	//vetor n�o est� ordenado!
		}
	}
	
	//se chegou aqui, o vetor est� ordenado!
	return 1;
}

void preencherAleatorio (float vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%100 + 1;  //gerando n�meros de 1 a 100
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
