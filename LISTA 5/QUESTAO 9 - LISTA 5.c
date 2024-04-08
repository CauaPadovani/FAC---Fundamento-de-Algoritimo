/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exerc�cios V

	QUEST�O 09:
	Escrever um programa que encontre o quinto n�mero maior que 1000, 
	cuja divis�o por 11 tenha resto 5.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int cont = 0,
	    valor = 1000;
	
	do
	{
		//atualizando 'valor'
		valor++;

		//verificando se o 'valor' atende ao crit�rio
		if (valor % 11 == 5)
		{
			cont++;	
		}		
	}
	while (cont < 5);
	
	//exibindo o resultado
	printf ("\n\nValor: %d", valor);
}
