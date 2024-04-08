/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 13/05/2023 (aula extra)
	
	AV1 - Turma A (2022/2)
	
	Questão 02 [2,5 pontos]:
	Implementar um programa que exiba as N primeiras potências de X, onde N e 
	X são valores fornecidos pelo usuário.

	Exemplo:

		N = 6
		X = 3

		Resultado: 1, 3, 9, 27, 81, 243

	Observações:
	- Não deve ser utilizada a função pow na solução desta questão;
	- Devem ser apresentadas três versões do programa, cada uma utilizando uma 
	  estrutura de repetição diferente (for, while e do..while).
	  
	versão 1: com 'for'
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, n, x, potencia = 1;
	
	//obtendo os dados de entrada
	printf ("Entre com a quantidade de potencias que serao exibidas: ");
	scanf ("%d", &n);
	
	printf ("Entre com o valor cujas potencias serao exibidas: ");
	scanf ("%d", &x);
	
	//exibindo as 'n' primeiras potências de 'x'
	for (i=0;i<n;i++)
	//ou   for (i=1;i<=n;i++)
	{
		//exibindo a potência
		printf ("%d ", potencia);
		
		//atualizando para a próxima potência
		potencia *= x;
	}	
}
