/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 22/06/2023
	
	Lista de Exerc�cios XI (Vetores)
	
	QUEST�O 02:
	Implementar uma fun��o que, dado um vetor de reais, troque o 1� e 
	o 2� elementos, em seguida o 3� e o 4� elementos e assim 
	sucessivamente, at� se chegar ao final do vetor.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 15

//declara��o de prot�tipos
void trocarElementos (int vetor[], int tamanho);

void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int vet[QUANT];

	//preenchendo o vetor aletaroriamente	
	preencherAleatorio (vet, QUANT);
	
	//exibir o vetor antes da chamada da fun��o
	exibir (vet, QUANT);
		
	//chamando a fun��o
	trocarElementos (vet, QUANT);

	//exibir o vetor ap�s a chamada da fun��o
	exibir (vet, QUANT);
}

//implementa��o das fun��es
void trocarElementos (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i, aux;
	
	//percorrendo o vetor
	for (i=0;i<tamanho-1;i+=2)
	{
		//trocando os elementos das posi��es i e i+1
		aux = vetor[i];
		vetor[i] = vetor[i+1];
		vetor[i+1] = aux;
	}
}

void preencherAleatorio (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%100 + 1;  //gerando n�meros de 1 a 100
	}
}

void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}
