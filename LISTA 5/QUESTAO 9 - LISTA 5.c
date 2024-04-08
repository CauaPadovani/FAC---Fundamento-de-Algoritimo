/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exercícios V

	QUESTÃO 09:
	Escrever um programa que encontre o quinto número maior que 1000, 
	cuja divisão por 11 tenha resto 5.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int cont = 0,
	    valor = 1000;
	
	do
	{
		//atualizando 'valor'
		valor++;

		//verificando se o 'valor' atende ao critério
		if (valor % 11 == 5)
		{
			cont++;	
		}		
	}
	while (cont < 5);
	
	//exibindo o resultado
	printf ("\n\nValor: %d", valor);
}
