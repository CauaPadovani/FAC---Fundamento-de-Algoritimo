/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exercícios V

	QUESTÃO 04:
	Implementar um programa que exiba os N primeiros termos de uma PA 
	(Progressão Aritmética) com primeiro termo a1 e razão r. 
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, a1, r, n, termo;
	
	//obtendo os dados que definem a PA
	printf ("Primeiro termo: ");
	scanf ("%d", &a1);
	
	printf ("Razao: ");
	scanf ("%d", &r);
	
	printf ("Numero de termos: ");
	scanf ("%d", &n);
	
	//iniailizando 'termo' com o primeiro valor da sequência
	termo = a1;
	
	//exibindo os 'n' termos da PA
	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		
		//atualizando o 'termo' a ser exibido 
		termo += r;
	}
}

