/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 13/04/2023
	
	Lista de Exerc�cios II

	QUEST�O 06: Escrever um algoritmo que, dados um n�mero inteiro i 
	e tr�s valores a, b e c, apresente os 3 n�meros na ordem definida 
	por i, como descrito abaixo:

		a)	i = 1: os tr�s valores em ordem crescente;
		b)	i = 2: os tr�s valores em ordem decrescente;
		c)	i = 3: o maior valor deve ser apresentado no meio dos outros.
*/

//importa��o de bibliotecas
#include <stdio.h>		//stdio - standard input/output

//programa - main
void main ()
{
	//declara��o de vari�veis
	int a, b, c, menor, meio, maior, i;
	
	//lendo os tr�s valores
	printf ("Entre com tres numeros: ");
//	scanf ("%d", &a);
//	scanf ("%d", &b);
//	scanf ("%d", &c);
	scanf ("%d %d %d", &a, &b, &c);

	//lendo o c�digo
	printf ("\n\n[1] Crescente\n[2] Decrescente\n[3] Exibir o maior entre os demais\n\n");
	printf ("Entre com o codigo: ");
	scanf ("%d", &i);
	
	//comparando 'a', 'b' e 'c', e atribuindo os devidos valores
	//a 'menor', 'meio' e 'maior'
	if ((a >= b) && (a >= c))
	{
		maior = a;
		
		if (b >= c)
		{
			meio = b;
			menor = c;
		}
		else
		{
			meio = c;
			menor = b;
		}
	}
	else
	{
		//if ((b >= a) && (b >= c))
		if (b >= c)
		{
			maior = b;
			
			if (a >= c)
			{
				meio = a;
				menor = c;
			}
			else
			{
				meio = c;
				menor = a;
			}
		}
		else
		{
			//c � o maior
			maior = c;
			
			if (a >= b)
			{
				meio = a;
				menor = b;
			}
			else
			{
				meio = b;
				menor = a;
			}
		}
	}
	
	//verificando o c�digo 'i' para determinar a ordem na qual
	//os elementos ser�o exibidos
	switch (i)
	{
		case 1: printf ("\n%d %d %d", menor, meio, maior);
		        break;	
		        
		case 2: printf ("\n%d %d %d", maior, meio, menor);
		        break;	
		        
		case 3: printf ("\n%d %d %d", menor, maior, meio);
		        printf ("\n%d %d %d", meio, maior, menor);
	}	
}
