/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 25/05/2023
	
	Funções
	
	Exemplo 3: calcular o fatorial de um número 
			   (usando função - com parâmetro e com retorno)
*/

//importação de bibliotecas
#include <stdio.h>

//implementação de funções
int fatorial (int n)
{
	//declaração de variáveis
	int i, fat;
	
	//obtendo o número
	/*printf ("Entre com um numero: ");
	scanf ("%d", &n);*/
	
	//calculando o fatorial de 'n'
	fat = 1;
	
	for (i=2;i<=n;i++)
	{
		fat *= i;
	}
	
	//exibindo o resultado
	//printf ("\n%d! = %d\n", n, fat);	
	
	//retornando o resultado da função
	return fat;
}

//main
void main ()
{
	//declaração de variáveis
	int i, resp, soma = 0;
	
	
	printf ("Exemplo 1: somando os fatoriais de 1 a 5:\n\n");
	
	//chamando a função 'fatorial'
	for (i=1;i<=5;i++)
	{
		//resp = fatorial (i);
		//soma += resp;
		
		soma += fatorial (i);
	}	
	
	//exibindo a soma dos fatoriais
	printf ("\nSoma = %d", soma);
	
	printf ("\n\nExemplo2: exibindo os fatoriais de 0 a 10:\n\n");
	
	for (i=0;i<=10;i++)
	{
		printf ("%d - %d\n", i, fatorial(i));
	}
}
