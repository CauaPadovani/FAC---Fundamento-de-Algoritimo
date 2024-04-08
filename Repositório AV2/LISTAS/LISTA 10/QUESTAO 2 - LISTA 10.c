/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exerc�cios X (Fun��es)
	
	QUEST�O 02:
	Dados dois n�meros inteiros A e B, fazer uma fun��o que determine 
	o n�mero de pot�ncias de 2 existentes no intervalo definido pelos 
	dois valores, assim como a maior delas.
	
	Exemplo:
	
		A = 10
		B = 500
		
		Resposta: 5 (16, 32, 64, 128, 256) e 256
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
void potencias2 (int a, int b, int *quantidade, int *maior);

//main
void main ()
{
	//declara��o de vari�veis
	int maiorPot, quantPot;
		
	//chamando a fun��o
	potencias2 (10, 500, &quantPot, &maiorPot);
	
	//exibindo os resultados
	printf ("\n\nQuantidade de potencias: %d\n", quantPot);
	printf ("Maior potencia: %d\n", maiorPot);
}

//implementa��o das fun��es
void potencias2 (int a, int b, int *quantidade, int *maior)
{
	//declara��o de vari�veis
	int i, cont = 0, ma;
	
	//gerando as pot�ncias de 2 de 1 a 'b'
	for (i=1;i<=b;i*=2)
	{
		//verificando se a pot�ncia gerada � maior ou igual a 'a'
		if (i >= a)
		{
			//atualizando a quantidade
			cont++;
			
			//atualizando a maior pot�ncia
			ma = i;
		}
	}
	
	//atribuindo os resultados aos par�metros por refer�ncia
	*quantidade = cont;
	*maior = ma;
}
