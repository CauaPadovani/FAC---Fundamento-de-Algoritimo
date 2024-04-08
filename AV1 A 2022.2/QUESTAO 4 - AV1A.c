/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 13/05/2023 (aula extra)
	
	AV1 - Turma A (2022/2)
	
	Quest�o 04 [2,5 pontos]:
	Fa�a um programa que permane�a lendo valores at� que o valor 0 
	seja fornecido. Para cada n�mero digitado, o programa deve exibir 
	a quantidade de vezes que o mesmo foi informado em sequ�ncia.

	Exemplo:
		N�meros fornecidos: 	1 1 1 6 6 2 3 3 1 1 4 7 7 0
		Sa�da do programa:	1 - 3 vez(es)
					6 - 2 vez(es)
					2 - 1 vez(es)
					3 - 2 vez(es)
					1 - 2 vez(es)
					4 - 1 vez(es)
					7 - 2 vez(es)
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int numero, anterior, cont;
	
	//lendo o primeiro valor
	printf ("Entre com um numero: ");
	scanf ("%d", &anterior);
	cont = 1;
	
	//lendo os demais valores
	do
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//comparando o 'numero' com o 'anterior'
		if (numero == anterior)
		{
			cont++;
		}
		else
		{
			//exibindo quantas vezes o 'anterior' apareceu
			printf ("%d - %d vez(es)\n", anterior, cont);
			
			//reinicializando 'cont' com 1 para o novo 'numero'
			cont  = 1;
			
			//atualizando o 'anterior'
			anterior = numero;
		}
	}
	while (numero != 0);
}
