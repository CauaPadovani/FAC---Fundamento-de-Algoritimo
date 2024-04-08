/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exerc�cios X (Fun��es)
		
	QUEST�O 04:
	A fun��o logar�tmica � complementar � potencia��o. Ou seja, uma vez 
	que 3^4 = 81, podemos ent�o afirmar que log 3 81 = 4.

	Generalizando, temos que:

		base^expoente = pot     <=>     log base pot = expoente

	Com base nessa descri��o, pede-se o desenvolvimento de uma fun��o 
	que, dados a e b, calcule o valor de log a b.

	Nota: a sua solu��o dever� apresentar um valor inteiro que, na 
	verdade, ser� a solu��o aproximada do logaritmo.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
int logaritmo (int base, int numero);

//main
void main ()
{
	//declara��o de vari�veis
	int resp = logaritmo (2, 20);
	
	//exibindo o resultado
	printf ("Resposta: %d", resp);
}

//implementa��o das fun��es
int logaritmo (int base, int numero)
{
	//declara��o de vari�veis
	int potencia = 1, cont = 0;
	
	//enquanto 'potencia' n�o atingir 'numero'
	while (potencia < numero)
	{
		//atualizando 'pontencia'
		potencia *= base;
		
		//atualizando o resultado
		cont++;
	}
	
	return cont;
}
