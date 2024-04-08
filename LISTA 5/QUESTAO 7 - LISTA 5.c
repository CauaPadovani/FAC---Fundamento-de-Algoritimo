/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exerc�cios V

	QUEST�O 07:
	Desenvolver um programa no qual o usu�rio entre com v�rios n�meros 
	inteiros e positivos e imprima o produto dos n�meros �mpares e a 
	soma dos n�meros pares.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, quant, numero,
	prodImpares = 1, somaPares = 0;
	
	//perguntando quantos valores ser�o informados
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
