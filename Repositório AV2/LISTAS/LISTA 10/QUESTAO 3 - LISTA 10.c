/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exerc�cios X (Fun��es)
	
	QUEST�O 03:
	Fazer uma fun��o leituraDados que permane�a lendo valores reais 
	at� que o n�mero 0 seja digitado. Ao final, a fun��o deve determinar 
	a quantidade de elementos fornecidos (excluindo o 0) e o maior 
	dentre eles.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <float.h>

//declara��o de prot�tipos
void leituraDados (int *quantidade, float *maior);

//main
void main ()
{
	//declara��o de vari�veis
	int quant;
	float maiorValor;
	
	//chamando a fun��o
	leituraDados (&quant, &maiorValor);
	
	//exibindo os resultados
	printf ("\n\nQuantidade: %d\n", quant);
	printf ("Maior valor: %.1f", maiorValor);
}

//implementa��o das fun��es
void leituraDados (int *quantidade, float *maior)
{
	//declara��o de vari�veis
	float numero;
	
	//inicializando a quantidade de valores
	*quantidade = 0;
	
	//inicializando o maior
	*maior = FLT_MIN; //ou   *maior = -9999;
	
	//lendo valores at� que o usu�rio digite 0
	do
	{
		//lendo os valores
		printf ("Entre com um numero real: ");
		scanf ("%f", &numero);

		if (numero != 0)
		{		
			//atualizando a quantidade
			(*quantidade)++;
			
			//verificando se 'numero' � o maior
			if (numero > *maior)
			{
				*maior = numero;
			}
		}
	}
	while (numero != 0);
}
