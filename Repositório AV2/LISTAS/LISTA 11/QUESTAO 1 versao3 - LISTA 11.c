/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 22/06/2023
	
	Lista de Exerc�cios XI (Vetores)
	
	QUEST�O 01:
	Desenvolver uma fun��o que determine o n�mero de ocorr�ncias de 
	um n�mero inteiro x em um vetor A.
	
	vers�o 3: gerando n�meros aleat�rios.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 50

//declara��o de prot�tipos
int numOcorrencias (int vetor[], int tamanho, int numero);

void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int vet[QUANT];
	int valor, quant;

	//preenchendo o vetor aletaroriamente	
	preencherAleatorio (vet, QUANT);
	exibir (vet, QUANT);
	
	//lendo o valor a ser buscado
	printf ("Entre com o valor a ser buscado: ");
	scanf ("%d", &valor);
	
	//chamando a fun��o
	quant = numOcorrencias (vet, QUANT, valor);
	
	//exibindoo resultado
	printf ("\n\nForam encontradas %d ocorrencias do numero %d no vetor.", quant, valor);						    
}

//implementa��o das fun��es
int numOcorrencias (int vetor[], int tamanho, int numero)
{
	//declara��o de vari�veis
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
	
	//retornando a quantidade de ocorr�ncias
	return cont;
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
