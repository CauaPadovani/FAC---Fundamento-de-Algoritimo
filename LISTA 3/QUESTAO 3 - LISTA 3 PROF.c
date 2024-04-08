/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 20/04/2023
	
	Lista de Exerc�cios III

	QUEST�O 03: 
	Implementar um programa que leia um valor inteiro n1. Se este n�o 
	estiver no intervalo de 100 a 999, uma mensagem deve ser exibida 
	ao usu�rio informando que o n�mero � inv�lido e, em seguida, a 
	execu��o do programa terminar�.

	Caso o valor esteja no intervalo definido, o programa dever� criar 
	um novo valor n2 (e exibi-lo ao final) contendo os mesmos 
	algarismos de n1, por�m em ordem crescente.

	Exemplos:

		n1		514
		n2		145

		n1		929
		n2		299

		n1		124
		n2		124
	
	Nota:
	Como definido no enunciado, n1 consiste em um n�mero inteiro 
	positivo, com 3 algarismos. n2 tamb�m ser� um �nico n�mero!
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n1, n2, c, d, u, resto, menor, meio, maior;
	
	//lendo o valor de 'n1'
	printf ("Entre com o valor de n1: ");
	scanf ("%d", &n1);
	
	if ((n1 >= 100) && (n1 <= 999))
	{
		//decompondo 'n1' em centenas, dezenas e unidades
		c = n1/100;
		resto = n1%100;
		d = resto/10;
		u = resto%10;
		
		//determinando o maior, o menor e o algarismo do meio
		if ((c <= d) && (c <= u))
		{
			menor = c;
			
			if (d <= u)
			{
				meio = d;
				maior = u;
			}
			else
			{
				meio = u;
				maior = d;
			}
		}
		else
		{
			//if ((d <= c) && (d <= u))
			if (d <= u)
			{
				menor = d;
				
				if (c <= u)
				{
					meio = c;
					maior = u;
				}
				else
				{
					meio = u;
					maior = c;
				}
			}
			else
			{
				menor = u;
				
				if (c <= d)
				{
					meio = c;
					maior = d;
				}
				else
				{
					meio = d;
					maior = c;
				}
			}
		}
		
		//gerando o n�mero 'n2'
		n2 = menor*100 + meio*10 + maior;
		
		//exibindo o resultado
		printf ("\n\nn1: %d\nn2: %d", n1, n2);
	}
	else
	{
		printf ("\n\nNumero invalido (deveria ser entre 100 e 999).");
	}
}
