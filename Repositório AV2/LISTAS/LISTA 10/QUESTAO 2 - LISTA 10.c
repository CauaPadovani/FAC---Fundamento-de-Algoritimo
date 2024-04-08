/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exercícios X (Funções)
	
	QUESTÃO 02:
	Dados dois números inteiros A e B, fazer uma função que determine 
	o número de potências de 2 existentes no intervalo definido pelos 
	dois valores, assim como a maior delas.
	
	Exemplo:
	
		A = 10
		B = 500
		
		Resposta: 5 (16, 32, 64, 128, 256) e 256
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
void potencias2 (int a, int b, int *quantidade, int *maior);

//main
void main ()
{
	//declaração de variáveis
	int maiorPot, quantPot;
		
	//chamando a função
	potencias2 (10, 500, &quantPot, &maiorPot);
	
	//exibindo os resultados
	printf ("\n\nQuantidade de potencias: %d\n", quantPot);
	printf ("Maior potencia: %d\n", maiorPot);
}

//implementação das funções
void potencias2 (int a, int b, int *quantidade, int *maior)
{
	//declaração de variáveis
	int i, cont = 0, ma;
	
	//gerando as potências de 2 de 1 a 'b'
	for (i=1;i<=b;i*=2)
	{
		//verificando se a potência gerada é maior ou igual a 'a'
		if (i >= a)
		{
			//atualizando a quantidade
			cont++;
			
			//atualizando a maior potência
			ma = i;
		}
	}
	
	//atribuindo os resultados aos parâmetros por referência
	*quantidade = cont;
	*maior = ma;
}
