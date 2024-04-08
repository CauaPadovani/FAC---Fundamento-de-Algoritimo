/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 25/05/2023
	
	Fun��es
	
	Exemplo 3: calcular o fatorial de um n�mero 
			   (usando fun��o - com par�metro e com retorno)
*/

//importa��o de bibliotecas
#include <stdio.h>

//implementa��o de fun��es
int fatorial (int n)
{
	//declara��o de vari�veis
	int i, fat;
	
	//obtendo o n�mero
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
	
	//retornando o resultado da fun��o
	return fat;
}

//main
void main ()
{
	//declara��o de vari�veis
	int i, resp, soma = 0;
	
	
	printf ("Exemplo 1: somando os fatoriais de 1 a 5:\n\n");
	
	//chamando a fun��o 'fatorial'
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
