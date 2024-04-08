/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 04/05/2023
	
	Lista de Exercícios IV

	QUESTÃO 06: Faça um programa que leia um número N inteiro, menor 
	ou igual a 18. Se for maior do que 18, o programa exibirá uma 
	mensagem de erro e terminará a sua execução; caso contrário, deverá 
	exibir os números no intervalo de 1 a 99 cujos algarismos somem N.

	Exemplo:
	N = 12		Portanto, o programa deve exibir os números que estão 
	            no intervalo de 1 a 99, cujos algarismos somam 12. Ou 
				seja: 39, 48, 57, 66, 75, 84 e 93.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, dezena, unidade;
	
	//lendo o valor de n
	printf ("Entre com o valor de N [1..18]: ");
	scanf ("%d", &n);
	
	//verificando se o valor de 'n' é inválido
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
