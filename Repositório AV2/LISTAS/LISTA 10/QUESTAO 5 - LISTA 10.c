/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 29/06/2023
	
	Lista de Exerc�cios X (Fun��es)
			
	QUEST�O 05:
	Fazer uma fun��o que exiba a tabuada de pot�ncias de um n�mero n, 
	no intervalo de 1 a 9. Se o n�mero n�o estiver neste intervalo, 
	o c�digo 0 deve ser retornado; caso contr�rio, retorna-se 1.

	Para ilustrar, abaixo � apresentada como a tabuada de pot�ncias de 
	2 deveria ser exibida:

					2^0 = 1
					2^1 = 2
					2^2 = 4
					2^3 = 8
					2^4 = 16
					2^5 = 32
					2^6 = 64
					2^7 = 128
					2^8 = 256
					2^9 = 512
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
int exibirTabuadaPotencias (int n);

//main
void main ()
{
	//declara��o de vari�veis
	int i, retorno;
	
	for (i=0;i<=10;i++)
	{
		if (exibirTabuadaPotencias (i) == 0)
		{
			printf ("\n\n%d: valor invalido\n\n", i);
		}
		else
		{
			printf ("\n\n");
		}
	}
}

//implementa��o das fun��es
int exibirTabuadaPotencias (int n)
{
	//declara��o de vari�veis
	int i, potencia = 1;
	
	//validando 'n'
	if ((n>=1) && (n<=9))
	{
		for (i=0;i<=9;i++)
		{		
			//exibindo o valore de 'n' elevado a 'i'
			printf ("%d^%d = %d\n", n, i, potencia);
			
			//atualizando 'potencia'
			potencia *= n;
		}
		
		return 1;
	}
	else
	{
		return 0;
	}
}
