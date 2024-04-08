/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 06/07/2023
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 10:
	Fazer um função que, dados dois vetores A e B com números inteiros, 
	gerar o vetor C que consiste na união dos dois primeiros.

	Nota: considerar que não existe repetição no conjunto A, nem no 
	conjunto B.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAMA 10
#define TAMB 5

//protótipos das funções
void uniao (int vetA[], int quantA, int vetB[], int quantB, int vetC[], int *quantC);

int buscar (int vetor[], int quant, int numero);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int A[TAMA] = {5,0,4,12,3,7,14,6,15,13}, 
	    B[TAMB] = {1,5,4,8,9}, 
		C[TAMA+TAMB];
	int quantidadeC;
		
	//chamando a função
	uniao (A, TAMA, B, TAMB, C, &quantidadeC);
	
	//exibindo os vetores
	exibir (A, TAMA);
	exibir (B, TAMB);
	exibir (C, quantidadeC);
}

//implementação das funções
void uniao (int vetA[], int quantA, int vetB[], int quantB, int vetC[], int *quantC)
{
	//declaração de variáveis
	int i;
	
	//copiando para C todos os elementos de A
	for (i=0;i<quantA;i++)
	{
		vetC[i] = vetA[i];
	}	
	
	//atualizando a quantidade de elementos em vetC
	*quantC = quantA;
	
	//copiando para C os elementos de B que não estão em A
	for (i=0;i<quantB;i++)
	{
		//verificando se o elemento vetB[i] está no conjunto A
		if (buscar (vetA, quantA, vetB[i]) == 0)
		{
			//inserindo o valor em vetC
			vetC[*quantC] = vetB[i];
			
			//atualizando a quantidade de elementos em vetC 
			(*quantC)++;			
		}
	}
}

int buscar (int vetor[], int quant, int numero)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<quant;i++)
	{
		//verificando se o valor foi encontrado
		if (vetor[i] == numero)
		{
			return 1;
		}
	}
	
	return 0;
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
