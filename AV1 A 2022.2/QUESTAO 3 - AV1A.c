/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 13/05/2023 (aula extra)
	
	AV1 - Turma A (2022/2)
	
	Quest�o 03 [2,5 pontos]:
	Fazer um programa que simule uma calculadora, atendendo aos seguintes requisitos:

		i.   Dever� ser exibido um menu ao usu�rio com as seguintes op��es: 
		     (A) Soma, (B) Subtra��o; (C) Multiplica��o; (D) Divis�o; (E) Limpar 
			 mem�ria; (F) Sair;
		ii.	 Todas as opera��es dever�o ser realizadas sobre o conte�do armazenado 
		     na mem�ria, inicialmente igual a 0. Por exemplo, caso o usu�rio opte 
			 pela opera��o de soma, dever� ser perguntado um valor e este ser� 
			 adicionado ao que encontra-se na mem�ria, atualizando-o. A mesma ideia 
			 � aplicada �s demais opera��es aritm�ticas;
		iii. O item de menu Limpar mem�ria consistir� em reinici�-la com o valor 0;
		iv.  A execu��o do programa s� ser� conclu�da quando o usu�rio escolher a 
		     op��o (f). Por�m, antes do t�rmino da execu��o, deve ser exibido o 
			 valor contido na mem�ria.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	char opcao;
	float memoria = 0, numero;	

	do
	{
		//exibindo o menu de opera��es ao usu�rio
		printf ("Menu:\n\n");
		printf ("(A) Soma\n(B) Subtracao\n(C) Multiplicacao\n");
		printf ("(D) Divisao\n(E) Limpar memoria\n(F) Sair\n\n");
		
		//lendo a op��o do usu�rio
		printf ("Entre com a opcao: ");
		fflush (stdin);
		scanf ("%c", &opcao);
		opcao = toupper (opcao);
		
		//testando a op��o escolhida
		switch (opcao)
		{
			//soma
			case 'A' : //obtendo o valor a ser somado
			           printf ("Entre com um numero: ");
			           scanf ("%f", &numero);
			           
			           //atualizando o valor de 'memoria'
			           memoria += numero;
			           
			           //exibindo o valor atualizado de mem�ria
			           printf ("\n\nValor atualizado da memoria: %.1f\n\n", memoria);
			           
			           break;			           
			
			//subtra��o
			case 'B' : //obtendo o valor a ser subtra�do
			           printf ("Entre com um numero: ");
			           scanf ("%f", &numero);
			           
			           //atualizando o valor de 'memoria'
			           memoria -= numero;
			           
			           //exibindo o valor atualizado de mem�ria
			           printf ("\n\nValor atualizado da memoria: %.1f\n\n", memoria);
			           
			           break;			           
				
			//multiplica��o
			case 'C' : //obtendo o valor a ser multiplicado
			           printf ("Entre com um numero: ");
			           scanf ("%f", &numero);
			           
			           //atualizando o valor de 'memoria'
			           memoria *= numero;
			           
			           //exibindo o valor atualizado de mem�ria
			           printf ("\n\nValor atualizado da memoria: %.1f\n\n", memoria);
			           
			           break;			           
			
			//divis�o
			case 'D' : //obtendo o valor a ser dividido
			           printf ("Entre com um numero: ");
			           scanf ("%f", &numero);
			           
			           //atualizando o valor de 'memoria'
			           memoria /= numero;
			           
			           //exibindo o valor atualizado de mem�ria
			           printf ("\n\nValor atualizado da memoria: %.1f\n\n", memoria);
			           
			           break;			           
				
			//limpar mem�ria
			case 'E' : //zerando a mem�ria
			           memoria = 0;
			           
			           //exibindo o valor atualizado de mem�ria
			           printf ("\n\nValor atualizado da memoria: %.1f\n\n", memoria);
			           
			           break;
				
			//sa�da 
			case 'F' : //exibindo o valor final da mem�ria
			           printf ("\n\nValor final da memoria: %.1f\n\n", memoria);
			           break;
			           
			//op��o inv�lida
			default  : printf ("\n\nOpcao invalida! Tente novamente.\n\n");
		}
	}
	while (opcao != 'F');
}
