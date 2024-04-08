/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 01/06/2023
	
	Lista de Exercícios IX (Funções)
	
	Questão 02:
	Implementar uma função que converta determinada temperatura em 
	graus Celsius para graus Fahrenheit.
*/

//importação de bibliotecas
#include <stdio.h>

//implementação das funções
/*Parâmetro:	celsius
Retorno:	fahrenheit*/
float conversao (float celsius)
{
	//declaração de variáveis
	float fahrenheit;

	//fazendo a conversão
	fahrenheit = (celsius*1.8) + 32;

	//retornando o resultado
	return fahrenheit;
}

//main
void main ()
{
	//declaração de variáveis
	int temp;
	float resultado;
	
	for (temp=0;temp<=100;temp++)
	{
		resultado = conversao (temp);
		printf ("%d o.C\t%.1f o.F\n", temp, resultado);
	}
}
