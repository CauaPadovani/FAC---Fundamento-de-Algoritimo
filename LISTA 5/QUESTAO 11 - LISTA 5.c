/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 13/05/2023 (aula extra)
	
	Lista de Exercícios V

	QUESTÃO 11:
	Implementar um programa no qual o usuário informa um número e verifica-se se ele é 
	um número triangular. 

	Obs.: Um número é triangular quando ele for resultado do produto de três números 
	      consecutivos. 
								Exemplo: 24 = 2 x 3 x 4. 
								
	versão 02: termina o 'for' externo quando o produto exceder o 'numero'
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, j, numero, mult, resposta = 0;
	
	//lendo o valor
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	for (i = 0; mult <=numero; i++)
	{
		mult = 1;
		
		//variando os três valores consecutivos
		for(j = i; j <= (i+2); j++)
		{
			mult *= j;
		}
		
		//testando se o produto dos três valores consecutivos resultou em 'numero'
		if (mult == numero)
		{
			resposta = 1;
		}
	}

	if (resposta == 1)
	{
		printf ("\n\nO numero %d e triangular!", numero);
	}
	else
	{
		printf ("\n\nO numero %d NAO e triangular!", numero);
	}
}
