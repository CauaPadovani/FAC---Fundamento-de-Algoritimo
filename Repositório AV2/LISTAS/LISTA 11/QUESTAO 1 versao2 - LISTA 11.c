/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 22/06/2023
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 01:
	Desenvolver uma função que determine o número de ocorrências de 
	um número inteiro x em um vetor A.
	
	versão 2: ao invés de ler os elementos do vetor, este será 
	inicializado na declaração.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
int numOcorrencias (int vetor[], int tamanho, int numero);

//main
void main ()
{
	//declaração de variáveis
	int vet[5] = {3,2,4,5,3};
	int i, valor, quant;
	
	//lendo os dados do vetor
	/*for (i=0;i<5;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &vet[i]);
	}*/
	
	//lendo o valor a ser buscado
	printf ("Entre com o valor a ser buscado: ");
	scanf ("%d", &valor);
	
	//chamando a função
	quant = numOcorrencias (vet, 5, valor);
	
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
