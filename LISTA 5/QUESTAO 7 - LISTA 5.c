/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exercícios V

	QUESTÃO 07:
	Desenvolver um programa no qual o usuário entre com vários números 
	inteiros e positivos e imprima o produto dos números ímpares e a 
	soma dos números pares.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, quant, numero,
	prodImpares = 1, somaPares = 0;
	
	//perguntando quantos valores serão informados
	printf ("Quantos valores serao informados? ");
	scanf ("%d", &quant);
	
	//lendo os valores
	for (i=1;i<=quant;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando a paridade
		if (numero % 2 == 0)
		{
			somaPares += numero;
		}
		else
		{
			prodImpares *= numero;
		}
	}
	
	//exibindo os resultados
	printf ("\n\nSoma dos pares: %d\n", somaPares);
	printf ("Produto dos impares: %d\n", prodImpares);
}
