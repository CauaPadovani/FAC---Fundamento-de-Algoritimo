/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 13/05/2023 (aula extra)
	
	Lista de Exercícios V

	QUESTÃO 10:
	Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados 
	de altura e gênero das pessoas. Faça um programa que leia as informações de 
	50 pessoas e informe:
	
		- a maior e a menor alturas encontradas;
		- a média de altura das mulheres;
		- a média de altura da população;
		- o percentual de homens na população.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 50

//main
void main ()
{
	//declaração de variáveis
	int i, contF = 0;
	float altura, maiorAltura = 0, menorAltura = 10,
		  somaAlturaF = 0, mediaAlturaF,
		  somaAltura = 0, mediaAltura, percM;
	char genero;
		
	//lendo os dados das pessoas
	for (i=1;i<=QUANT;i++)
	{
		printf ("Altura (em metros): ");
		scanf ("%f", &altura);
		
		do
		{
			printf ("Genero [M/F]: ");
			fflush (stdin);
			scanf ("%c", &genero);
			genero = toupper (genero);
			
			//verificando se houve erro
			if ((genero != 'M') && (genero != 'F'))
			{
				printf ("\nTente novamente!\n");
			}
		}
		while ((genero != 'M') && (genero != 'F'));
		
		//calculando a maior altura do grupo
		if (altura > maiorAltura)
		{
			maiorAltura = altura;
		}
		else
		{
			//calculando a menor altura do grupo
			if (altura < menorAltura)
			{
				menorAltura = altura;
			}
		}
		
		//verificando se é do gênero feminino
		if (genero == 'F')
		{
			somaAlturaF += altura;
			contF++;
		}
		
		//somando todas as alturas
		somaAltura += altura;
	}

	//exibindo os resultados
	printf ("\n\nMaior altura: %.2f\n", maiorAltura);
	printf ("Menor altura: %.2f\n", menorAltura);
	
	//calculando a média de altura das mulheres
	mediaAlturaF = somaAlturaF/contF;
	
	printf ("Media de altura das mulheres: %.2f\n", mediaAlturaF);
	
	//calculando a média de altura de todas as pessoas
	mediaAltura = somaAltura/QUANT;
	
	printf ("Media de altura das pessoas: %.2f\n", mediaAltura);
	
	//calculando o percentual de homens
	percM = ((float)(QUANT - contF)/QUANT)*100;   //não esquecer do casting
	
	printf ("Percentual de homens: %.1f %%", percM);
}
