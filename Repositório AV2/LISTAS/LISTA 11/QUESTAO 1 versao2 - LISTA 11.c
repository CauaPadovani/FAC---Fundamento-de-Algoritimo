/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 22/06/2023
	
	Lista de Exerc�cios XI (Vetores)
	
	QUEST�O 01:
	Desenvolver uma fun��o que determine o n�mero de ocorr�ncias de 
	um n�mero inteiro x em um vetor A.
	
	vers�o 2: ao inv�s de ler os elementos do vetor, este ser� 
	inicializado na declara��o.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
int numOcorrencias (int vetor[], int tamanho, int numero);

//main
void main ()
{
	//declara��o de vari�veis
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
	
	//chamando a fun��o
	quant = numOcorrencias (vet, 5, valor);
	
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
