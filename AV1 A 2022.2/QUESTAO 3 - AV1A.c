/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 13/05/2023 (aula extra)
	
	AV1 - Turma A (2022/2)
	
	Questão 03 [2,5 pontos]:
	Fazer um programa que simule uma calculadora, atendendo aos seguintes requisitos:

		i.   Deverá ser exibido um menu ao usuário com as seguintes opções: 
		     (A) Soma, (B) Subtração; (C) Multiplicação; (D) Divisão; (E) Limpar 
			 memória; (F) Sair;
		ii.	 Todas as operações deverão ser realizadas sobre o conteúdo armazenado 
		     na memória, inicialmente igual a 0. Por exemplo, caso o usuário opte 
			 pela operação de soma, deverá ser perguntado um valor e este será 
			 adicionado ao que encontra-se na memória, atualizando-o. A mesma ideia 
			 é aplicada às demais operações aritméticas;
		iii. O item de menu Limpar memória consistirá em reiniciá-la com o valor 0;
		iv.  A execução do programa só será concluída quando o usuário escolher a 
		     opção (f). Porém, antes do término da execução, deve ser exibido o 
			 valor contido na memória.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	char opcao;
	float memoria = 0, numero;	

	do
	{
		//exibindo o menu de operações ao usuário
		printf ("Menu:\n\n");
		printf ("(A) Soma\n(B) Subtracao\n(C) Multiplicacao\n");
		printf ("(D) Divisao\n(E) Limpar memoria\n(F) Sair\n\n");
		
		//lendo a opção do usuário
		printf ("Entre com a opcao: ");
		fflush (stdin);
		scanf ("%c", &opcao);
		opcao = toupper (opcao);
		
		//testando a opção escolhida
		switch (opcao)
		{
			//soma
			case 'A' : //obtendo o valor a ser somado
			           printf ("Entre com um numero: ");
			           scanf ("%f", &numero);
			           
			           //atualizando o valor de 'memoria'
			           memoria += numero;
			           
			           //exibindo o valor atualizado de memória
			           printf ("\n\nValor atualizado da memoria: %.1f\n\n", memoria);
			           
			           break;			           
			
			//subtração
			case 'B' : //obtendo o valor a ser subtraído
			           printf ("Entre com um numero: ");
			           scanf ("%f", &numero);
			           
			           //atualizando o valor de 'memoria'
			           memoria -= numero;
			           
			           //exibindo o valor atualizado de memória
			           printf ("\n\nValor atualizado da memoria: %.1f\n\n", memoria);
			           
			           break;			           
				
			//multiplicação
			case 'C' : //obtendo o valor a ser multiplicado
			           printf ("Entre com um numero: ");
			           scanf ("%f", &numero);
			           
			           //atualizando o valor de 'memoria'
			           memoria *= numero;
			           
			           //exibindo o valor atualizado de memória
			           printf ("\n\nValor atualizado da memoria: %.1f\n\n", memoria);
			           
			           break;			           
			
			//divisão
			case 'D' : //obtendo o valor a ser dividido
			           printf ("Entre com um numero: ");
			           scanf ("%f", &numero);
			           
			           //atualizando o valor de 'memoria'
			           memoria /= numero;
			           
			           //exibindo o valor atualizado de memória
			           printf ("\n\nValor atualizado da memoria: %.1f\n\n", memoria);
			           
			           break;			           
				
			//limpar memória
			case 'E' : //zerando a memória
			           memoria = 0;
			           
			           //exibindo o valor atualizado de memória
			           printf ("\n\nValor atualizado da memoria: %.1f\n\n", memoria);
			           
			           break;
				
			//saída 
			case 'F' : //exibindo o valor final da memória
			           printf ("\n\nValor final da memoria: %.1f\n\n", memoria);
			           break;
			           
			//opção inválida
			default  : printf ("\n\nOpcao invalida! Tente novamente.\n\n");
		}
	}
	while (opcao != 'F');
}
