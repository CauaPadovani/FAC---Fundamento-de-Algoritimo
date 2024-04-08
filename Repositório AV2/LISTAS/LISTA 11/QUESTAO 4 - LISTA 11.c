/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 22/06/2023
	
	Lista de Exerc�cios XI (Vetores)
	
	QUEST�O 04:
	Fazer uma fun��o que armazene em um vetor os 50 primeiros termos 
	da seguinte sequ�ncia:

					S = 1, 2, 4, 7, 11, 16, ...

	Nota: observem que a diferen�a entre o 1� e 2� elementos � igual 
	a 1, entre o 2� e 3� � igual a 2, entre o 3� e o 4� � igual a 3, 
	e assim sucessivamente.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 50

//declara��o de prot�tipos
void preencherVetor (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int vetor[QUANT];
	
	//chamando a fun��o
	preencherVetor (vetor, QUANT);
	
	//exibir o vetor
	exibir (vetor, QUANT);
}

//implementa��o das fun��es
void preencherVetor (int vetor[], int tamanho)
{
	//1, 2, 4, 7, 11, 16, ...
	
	//declara��o de vari�veis
	int i, r = 1;
	
	//armazenando o primeiro elemento
	vetor[0] = 1;
	
	for (i=1;i<tamanho;i++)
	{
		vetor[i] = vetor[i-1] + r;
		
		r++;
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
