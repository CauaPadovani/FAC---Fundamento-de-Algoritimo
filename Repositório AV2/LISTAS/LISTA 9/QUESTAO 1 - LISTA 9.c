/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 01/06/2023
	
	Lista de Exercícios IX (Funções)
	
	QUESTÃO 01:
	Desenvolver uma função que exiba os múltiplos de N compreendidos 
	no intervalo definido por A e B.
*/

//importação de bibliotecas
#include <stdio.h>

//implementação das funções
/*Parâmetro:	n, a, b
Retorno:	--------*/
void exibirMultiplos (int n, int a, int b)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o intervalo de 'a' a 'b'
	for (i=a;i<=b;i++)
	{
		//verificando se 'i' é múltiplo de 'n'
		if (i%n == 0)
		{
			printf ("%d ", i);
		}
	} 
}


//main
void main ()
{
	//declaração de variáveis
	int numero, inferior, superior;
	
	//Exemplo 1 de chamada: lendo os dados do teclado
	
	//obtendo os dados de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	printf ("\n\nEntre com o intervalo: ");
	scanf ("%d %d", &inferior, &superior);
	
	//chamando a função
	exibirMultiplos (numero, inferior, superior);
	
	printf ("\n\n");
	
	//Exemplo 2 de chamada à função
	exibirMultiplos (5, 1, 100);
}
