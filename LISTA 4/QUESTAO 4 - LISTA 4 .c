/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 04/05/2023
	
	Lista de Exerc�cios IV

	QUEST�O 04: Fa�a um programa que leia 300 n�meros reais. Ao final, 
	devem ser exibidas as seguintes informa��es:

		a)	A quantidade de valores negativos digitados;
		b)	A m�dia dos valores positivos.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 300

//main
void main ()
{
	//declara��o de vari�veis
	int i, negativos = 0, positivos = 0;
	float numero, somaPositivos = 0, mediaPositivos;
	
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		
		//verificando se o valor informado � negativo
		if (numero < 0)
		{
			negativos++;
		}
		else
		{
			//considerando que 0 � positivo
			somaPositivos += numero;
			positivos++;
		}
	}
	
	//calculando a m�dia dos positivos
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
