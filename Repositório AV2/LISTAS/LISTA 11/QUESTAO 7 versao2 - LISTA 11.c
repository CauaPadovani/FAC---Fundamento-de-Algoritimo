/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 06/07/2023
	
	Lista de Exerc�cios XI (Vetores)
	
	QUEST�O 07:
	Desenvolver uma fun��o que remova determinado elemento (todas as 
	suas ocorr�ncias) de um vetor de float. Ao final, retornar o 
	n�mero de remo��es realizadas.
	
	vers�o 02: deslocando o �ltimo elemento para a posi��o do n�mero
	que est� sendo removido.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 30

//prot�tipos das fun��es
int remover (float vetor[], int *quantidade, float numero);

void preencherAleatorio (float vetor[], int tamanho);
void exibir (float vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	float vetor[TAM], numero;
	int numRemocoes;
	int quantidade = TAM;
	
	//preenchendo o vator aleatoriamente
	preencherAleatorio (vetor, quantidade);
	
	//exibindo o vetor antes da remo��o
	exibir (vetor, quantidade);
	
	//lendo o valor a ser removido
	printf ("\n\nEntre com o valor a ser removido: ");
	scanf ("%f", &numero);
	
	//chamando a fun��o
	numRemocoes = remover (vetor, &quantidade, numero);

	//exibindo o vetor ap�s a remo��o
	exibir (vetor, quantidade);
	
	printf ("\nForam realizadas %d remocoes do valor %.1f", numRemocoes, numero);
}

//implementa��o das fun��es
int remover (float vetor[], int *quantidade, float numero)
{
	//declara��o de vari�veis
	int i, j, cont = 0;
	
	//percorrendo o vetor
	//for (i=0;i<*quantidade;)
	i=0;
	while (i<*quantidade)
	{
		//verificando se o elemento foi encontrado
		if (vetor[i] == numero)
		{
			//deslocando o �ltimo elemento para a posi��o 'i'
			vetor[i] = vetor[(*quantidade)-1];
			
			//atualizando a quantidade
			(*quantidade)--;
			
			//atualizando a quantidade de remo��es feitas
			cont++;
		}
		else
		{
			i++;
		}
	}	
	
	//retornando a quantidade de remo��es realizadas
	return cont;	
}

void preencherAleatorio (float vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%10;  //gerando n�meros aleat�rios no intervalo de 0 a 99
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
