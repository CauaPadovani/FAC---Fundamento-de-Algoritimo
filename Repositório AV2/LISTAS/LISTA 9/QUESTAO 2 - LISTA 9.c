/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 01/06/2023
	
	Lista de Exerc�cios IX (Fun��es)
	
	Quest�o 02:
	Implementar uma fun��o que converta determinada temperatura em 
	graus Celsius para graus Fahrenheit.
*/

//importa��o de bibliotecas
#include <stdio.h>

//implementa��o das fun��es
/*Par�metro:	celsius
Retorno:	fahrenheit*/
float conversao (float celsius)
{
	//declara��o de vari�veis
	float fahrenheit;

	//fazendo a convers�o
	fahrenheit = (celsius*1.8) + 32;

	//retornando o resultado
	return fahrenheit;
}

//main
void main ()
{
	//declara��o de vari�veis
	int temp;
	float resultado;
	
	for (temp=0;temp<=100;temp++)
	{
		resultado = conversao (temp);
		printf ("%d o.C\t%.1f o.F\n", temp, resultado);
	}
}
