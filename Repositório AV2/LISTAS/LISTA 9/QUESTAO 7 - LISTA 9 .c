/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exercícios IX (Funções)
	
	QUESTÃO 07:
	Implementar uma função que, dado um número inteiro n, e o intervalo 
	definido pelos números a e b, determine quantos valores do 
	intervalo possuem divisores (sendo estes diferentes de 1) que 
	também sejam divisores de n.

			Parâmetro:	n, a, b
			Retorno:	quantidade

	Exemplo:
		n = 6
		a = 10 e b = 20
	
	Resposta = 7 (pois os números 10, 12, 14, 15, 16, 18 e 20 possuem 
	divisores em comum com o número 6).
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
int possuiDivisoresComuns (int valor, int inferior, int superior);

//main
void main ()
{
	//declaração de variáveis
	int resposta;
	
	//chamando a função
	resposta = possuiDivisoresComuns (6, 10, 20);
	
	//exibindo o resultado
	printf ("\nResultado = %d", resposta);
}

//implementação das funções
int possuiDivisoresComuns (int valor, int inferior, int superior)
{
	//declaração de variáveis
	int i, j, cont, quant = 0;
	
	//variando o intervalo
	for (i=inferior;i<=superior;i++)
	{
		//zerando a quantidade de divisores em comum entre 'valor' e 'i'
		cont = 0;
		
		//verificando divisores de 'valor' (excluindo o 1)
		for (j=2;j<=valor;j++)
		{
			if ((valor%j==0) && (i%j==0))  //'j' é divisor de 'valor' e de 'i'
			{
				cont++;			
			}
		}
		
		//verificando se existem divisores comuns entre 'valor' e 'i'
		if (cont > 0)
		{
			quant++;
		}
	}
	
	//retornando o resultado
	return quant;
}
