/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 04/05/2023
	
	Lista de Exercícios IV

	QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, 
	devem ser exibidas as seguintes informações:

		a)	A quantidade de valores negativos digitados;
		b)	A média dos valores positivos.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 300

//main
void main ()
{
	//declaração de variáveis
	int i, negativos = 0, positivos = 0;
	float numero, somaPositivos = 0, mediaPositivos;
	
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		
		//verificando se o valor informado é negativo
		if (numero < 0)
		{
			negativos++;
		}
		else
		{
			//considerando que 0 é positivo
			somaPositivos += numero;
			positivos++;
		}
	}
	
	//calculando a média dos positivos
	if (positivos > 0)
	{
		mediaPositivos = somaPositivos/positivos;
	}
	else
	{
		mediaPositivos = 0;
	}
	
	//exibindo a quantidade de negativos
	printf ("\n\nTotal de negativos: %d", negativos);
	printf ("\nMedia dos positivos: %.1f", mediaPositivos);
}
