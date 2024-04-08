/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 24/06/2023 (aula extra)
	
	Lista de Exerc�cios XI (Vetores)
	
	QUEST�O 06:
	Fa�a uma fun��o que, dado um vetor de reais, altere todas as ocorr�ncias do 
	n�mero A pelo n�mero B.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 50

//prot�tipos das fun��es
void alterarOcorrencias (int vetor[], int tamanho, float numA, float numB);

void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int vet[TAM];
	int numVelho, numNovo;
	
	//preenchendo o vetor com n�meros aleat�rios
	preencherAleatorio (vet, TAM);
	
	//exibindo o vetor gerado
	exibir (vet, TAM);
	
	//lendo os n�meros
	printf ("\n\nEntre com o valor a ser alterado: ");
	scanf ("%d", &numVelho);
	
	printf ("\n\nEntre com o novo valor: ");
	scanf ("%d", &numNovo);
	
	//chamando a fun��o
	alterarOcorrencias (vet, TAM, numVelho, numNovo);	
	
	//exibindo o vetor ap�s as altera��es
	exibir (vet, TAM);
}

//implementa��o das fun��es
void alterarOcorrencias (int vetor[], int tamanho, float numA, float numB)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento que est� na posi��o 'i' do vetor � 'numA'
		if (vetor[i] == numA)
		{
			vetor[i] = numB;
		}		
	}
}

void preencherAleatorio (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%100;  //gerando n�meros aleat�rios no intervalo de 0 a 99
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
