/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exerc�cios IX (Fun��es)
	
	QUEST�O 07:
	Implementar uma fun��o que, dado um n�mero inteiro n, e o intervalo 
	definido pelos n�meros a e b, determine quantos valores do 
	intervalo possuem divisores (sendo estes diferentes de 1) que 
	tamb�m sejam divisores de n.

			Par�metro:	n, a, b
			Retorno:	quantidade

	Exemplo:
		n = 6
		a = 10 e b = 20
	
	Resposta = 7 (pois os n�meros 10, 12, 14, 15, 16, 18 e 20 possuem 
	divisores em comum com o n�mero 6).
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
int possuiDivisoresComuns (int valor, int inferior, int superior);

//main
void main ()
{
	//declara��o de vari�veis
	int resposta;
	
	//chamando a fun��o
	resposta = possuiDivisoresComuns (6, 10, 20);
	
	//exibindo o resultado
	printf ("\nResultado = %d", resposta);
}

//implementa��o das fun��es
int possuiDivisoresComuns (int valor, int inferior, int superior)
{
	//declara��o de vari�veis
	int i, j, cont, quant = 0;
	
	//variando o intervalo
	for (i=inferior;i<=superior;i++)
	{
		//zerando a quantidade de divisores em comum entre 'valor' e 'i'
		cont = 0;
		
		//verificando divisores de 'valor' (excluindo o 1)
		for (j=2;j<=valor;j++)
		{
			if ((valor%j==0) && (i%j==0))  //'j' � divisor de 'valor' e de 'i'
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
