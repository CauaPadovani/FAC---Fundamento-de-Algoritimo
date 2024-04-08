/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exercícios X (Funções)
	
	QUESTÃO 03:
	Fazer uma função leituraDados que permaneça lendo valores reais 
	até que o número 0 seja digitado. Ao final, a função deve determinar 
	a quantidade de elementos fornecidos (excluindo o 0) e o maior 
	dentre eles.
*/

//importação de bibliotecas
#include <stdio.h>
#include <float.h>

//declaração de protótipos
void leituraDados (int *quantidade, float *maior);

//main
void main ()
{
	//declaração de variáveis
	int quant;
	float maiorValor;
	
	//chamando a função
	leituraDados (&quant, &maiorValor);
	
	//exibindo os resultados
	printf ("\n\nQuantidade: %d\n", quant);
	printf ("Maior valor: %.1f", maiorValor);
}

//implementação das funções
void leituraDados (int *quantidade, float *maior)
{
	//declaração de variáveis
	float numero;
	
	//inicializando a quantidade de valores
	*quantidade = 0;
	
	//inicializando o maior
	*maior = FLT_MIN; //ou   *maior = -9999;
	
	//lendo valores até que o usuário digite 0
	do
	{
		//lendo os valores
		printf ("Entre com um numero real: ");
		scanf ("%f", &numero);

		if (numero != 0)
		{		
			//atualizando a quantidade
			(*quantidade)++;
			
			//verificando se 'numero' é o maior
			if (numero > *maior)
			{
				*maior = numero;
			}
		}
	}
	while (numero != 0);
}
