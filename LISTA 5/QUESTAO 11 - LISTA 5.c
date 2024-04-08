/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 13/05/2023 (aula extra)
	
	Lista de Exerc�cios V

	QUEST�O 11:
	Implementar um programa no qual o usu�rio informa um n�mero e verifica-se se ele � 
	um n�mero triangular. 

	Obs.: Um n�mero � triangular quando ele for resultado do produto de tr�s n�meros 
	      consecutivos. 
								Exemplo: 24 = 2 x 3 x 4. 
								
	vers�o 02: termina o 'for' externo quando o produto exceder o 'numero'
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, j, numero, mult, resposta = 0;
	
	//lendo o valor
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	for (i = 0; mult <=numero; i++)
	{
		mult = 1;
		
		//variando os tr�s valores consecutivos
		for(j = i; j <= (i+2); j++)
		{
			mult *= j;
		}
		
		//testando se o produto dos tr�s valores consecutivos resultou em 'numero'
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
