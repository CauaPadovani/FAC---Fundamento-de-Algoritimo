/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 04/05/2023
	
	Lista de Exerc�cios IV

	QUEST�O 06: Fa�a um programa que leia um n�mero N inteiro, menor 
	ou igual a 18. Se for maior do que 18, o programa exibir� uma 
	mensagem de erro e terminar� a sua execu��o; caso contr�rio, dever� 
	exibir os n�meros no intervalo de 1 a 99 cujos algarismos somem N.

	Exemplo:
	N = 12		Portanto, o programa deve exibir os n�meros que est�o 
	            no intervalo de 1 a 99, cujos algarismos somam 12. Ou 
				seja: 39, 48, 57, 66, 75, 84 e 93.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n, i, dezena, unidade;
	
	//lendo o valor de n
	printf ("Entre com o valor de N [1..18]: ");
	scanf ("%d", &n);
	
	//verificando se o valor de 'n' � inv�lido
	if ((n < 1) || (n > 18))
	{
		printf ("\n\nValor invalido! O numero deveria estar entre 1 e 18!");
	}
	else
	{
		//varrendo todo o intervalo de 1 a 99
		for (i=1;i<=99;i++)
		{
			//decompor o valor de 'i' em dezena e unidade
			dezena = i/10;
			unidade = i%10;
			
			//verificando se 'dezena' e 'unidade' somam 'n'
			if (dezena + unidade == n)
			{
				printf ("%d ", i);
			}
		}
	}	
}
