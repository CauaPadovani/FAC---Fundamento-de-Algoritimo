/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 13/05/2023 (aula extra)
	
	AV1 - Turma A (2022/2)
	
	Quest�o 02 [2,5 pontos]:
	Implementar um programa que exiba as N primeiras pot�ncias de X, onde N e 
	X s�o valores fornecidos pelo usu�rio.

	Exemplo:

		N = 6
		X = 3

		Resultado: 1, 3, 9, 27, 81, 243

	Observa��es:
	- N�o deve ser utilizada a fun��o pow na solu��o desta quest�o;
	- Devem ser apresentadas tr�s vers�es do programa, cada uma utilizando uma 
	  estrutura de repeti��o diferente (for, while e do..while).
	  
	vers�o 1: com 'for'
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, n, x, potencia = 1;
	
	//obtendo os dados de entrada
	printf ("Entre com a quantidade de potencias que serao exibidas: ");
	scanf ("%d", &n);
	
	printf ("Entre com o valor cujas potencias serao exibidas: ");
	scanf ("%d", &x);
	
	//exibindo as 'n' primeiras pot�ncias de 'x'
	for (i=0;i<n;i++)
	//ou   for (i=1;i<=n;i++)
	{
		//exibindo a pot�ncia
		printf ("%d ", potencia);
		
		//atualizando para a pr�xima pot�ncia
		potencia *= x;
	}	
}
