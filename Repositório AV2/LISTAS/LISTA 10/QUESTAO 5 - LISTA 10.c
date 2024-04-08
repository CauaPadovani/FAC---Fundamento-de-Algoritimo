/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exercícios X (Funções)
			
	QUESTÃO 05:
	Fazer uma função que exiba a tabuada de potências de um número n, 
	no intervalo de 1 a 9. Se o número não estiver neste intervalo, 
	o código 0 deve ser retornado; caso contrário, retorna-se 1.

	Para ilustrar, abaixo é apresentada como a tabuada de potências de 
	2 deveria ser exibida:

					2^0 = 1
					2^1 = 2
					2^2 = 4
					2^3 = 8
					2^4 = 16
					2^5 = 32
					2^6 = 64
					2^7 = 128
					2^8 = 256
					2^9 = 512
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
int exibirTabuadaPotencias (int n);

//main
void main ()
{
	//declaração de variáveis
	int i, retorno;
	
	for (i=0;i<=10;i++)
	{
		if (exibirTabuadaPotencias (i) == 0)
		{
			printf ("\n\n%d: valor invalido\n\n", i);
		}
		else
		{
			printf ("\n\n");
		}
	}
}

//implementação das funções
int exibirTabuadaPotencias (int n)
{
	//declaração de variáveis
	int i, potencia = 1;
	
	//validando 'n'
	if ((n>=1) && (n<=9))
	{
		for (i=0;i<=9;i++)
		{		
			//exibindo o valore de 'n' elevado a 'i'
			printf ("%d^%d = %d\n", n, i, potencia);
			
			//atualizando 'potencia'
			potencia *= n;
		}
		
		return 1;
	}
	else
	{
		return 0;
	}
}
