/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023
	
	Lista de Exerc�cios V

	QUEST�O 08:
	Fazer um programa que auxilie o org�o regulador no c�lculo do total 
	de recursos arrecadados com a aplica��o de multas de tr�nsito. 
	
	O programa deve ler as seguintes informa��es para cada motorista: 
 	- O n�mero da carteira de motorista;
 	- N�mero de multas;
 	- Valor de cada uma das multas. 

	Deve ser exibido o valor da d�vida de cada motorista e ao final 
	da leitura o total de recursos arrecadados (somat�rio de todas as 
	multas). O programa tamb�m dever� apresentar o n�mero da carteira 
	do motorista que obteve o maior n�mero de multas. 
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	char opcao;
	int i, cnh, maiorCNH, numMultas, maiorNumeroMultas = 0;
	float valor, dividaMotorista, totalArrecadado = 0;
	
	do
	{
		//lendo os dados de cada motorista
		printf ("CNH: ");
		scanf ("%d", &cnh);
	
		printf ("Total de multas do motorista: ");
		scanf ("%d", &numMultas);
		
		//verificando se � o maior n�mero de multas
		if (numMultas > maiorNumeroMultas)
		{
			maiorNumeroMultas = numMultas;
			maiorCNH = cnh;
		}	
		
		//lendo o valor de cada multa do motorista
		dividaMotorista = 0;
		for (i=1;i<=numMultas;i++)
		{
			printf ("Valor da %da. multa: ", i);
			scanf ("%f", &valor);
			
			//atualizando o valor da d�vida do motorista
			dividaMotorista += valor;
		}
		
		//atualizando o total arrecadado com as multas
		totalArrecadado += dividaMotorista;
		
		//exibindo a d�vida do motorista
		printf ("\nDivida do motorista de cnh %d: R$ %.2f\n", cnh, dividaMotorista);
				
		//verificando se o usu�rio deseja continuar
		printf ("\n\nDeseja continuar [S/N]? ");
		fflush (stdin);
		scanf ("%c", &opcao);
		opcao = toupper (opcao);
	}
	while (opcao == 'S');
	
	//exibindo o total arrecadado com as multas
	printf ("\nTotal arrecadado: R$ %.2f\n", totalArrecadado);
	
	//exibindo a cnh que obteve o maior n�mero de multas
	printf ("\nCNH com maior numero de multas: %d (%d multas)\n", maiorCNH, maiorNumeroMultas);
}
