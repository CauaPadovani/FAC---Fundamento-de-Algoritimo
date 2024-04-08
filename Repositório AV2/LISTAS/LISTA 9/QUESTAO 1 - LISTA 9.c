/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 01/06/2023
	
	Lista de Exerc�cios IX (Fun��es)
	
	QUEST�O 01:
	Desenvolver uma fun��o que exiba os m�ltiplos de N compreendidos 
	no intervalo definido por A e B.
*/

//importa��o de bibliotecas
#include <stdio.h>

//implementa��o das fun��es
/*Par�metro:	n, a, b
Retorno:	--------*/
void exibirMultiplos (int n, int a, int b)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o intervalo de 'a' a 'b'
	for (i=a;i<=b;i++)
	{
		//verificando se 'i' � m�ltiplo de 'n'
		if (i%n == 0)
		{
			printf ("%d ", i);
		}
	} 
}


//main
void main ()
{
	//declara��o de vari�veis
	int numero, inferior, superior;
	
	//Exemplo 1 de chamada: lendo os dados do teclado
	
	//obtendo os dados de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	printf ("\n\nEntre com o intervalo: ");
	scanf ("%d %d", &inferior, &superior);
	
	//chamando a fun��o
	exibirMultiplos (numero, inferior, superior);
	
	printf ("\n\n");
	
	//Exemplo 2 de chamada � fun��o
	exibirMultiplos (5, 1, 100);
}
