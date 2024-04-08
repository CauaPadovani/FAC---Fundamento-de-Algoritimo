/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 04/05/2023
	
	Lista de Exerc�cios IV

	QUEST�O 08: Em uma empresa deseja-se fazer um levantamento sobre 
	algumas informa��es dos seus 250 funcion�rios. Cada funcion�rio dever� 
	responder um question�rio ao qual informar� os seguintes dados: 
	matr�cula, g�nero, idade, sal�rio e tempo (em anos) de trabalho na 
	empresa. A execu��o do programa deve exibir os seguintes itens:

	a)	Quantidade de funcion�rios que ingressaram na empresa com 
	    menos de 21 anos;
	b)	Quantidade de funcion�rios do g�nero feminino;
	c)	M�dia salarial dos homens;
	d)	Matr�cula dos funcion�rios mais antigo e mais novo.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 5

//main
void main ()
{
	//declara��o de vari�veis
	int i, matricula, idade, tempoServico, cont21 = 0,
	    contF = 0, contM = 0, maiorTempoServico = 0, menorTempoServico = 100,
		matriculaMaisNovo, matriculaMaisAntigo;
	char genero;
	float salario, somaSalarioHomens = 0, mediaSalarialHomens;
	
	//obtendo os dados dos funcion�rios
	for (i=1;i<=QUANT;i++)
	{
		printf ("Matricula: ");
		scanf ("%d", &matricula);
		
		printf ("Genero: ");
		fflush (stdin);
		scanf ("%c", &genero);
		genero = toupper (genero);  //colocando o g�nero em mai�sculo
		
		printf ("Idade: ");
		scanf ("%d", &idade);
		
		printf ("Salario: ");
		scanf ("%f", &salario);
		
		printf ("Tempo na empresa (em anos): ");
		scanf ("%d", &tempoServico);
		
		//Quantidade de funcion�rios que ingressaram na empresa com 
	    //menos de 21 anos
	    if (idade - tempoServico < 21)
		{
			cont21++;	
		}		 
		
		//Quantidade de funcion�rios do g�nero feminino
		if (genero == 'F')
		{
			contF++;
		}
		else
		{
			//M�dia salarial dos homens
			somaSalarioHomens += salario;
			contM++; 

		}

		//Matr�cula dos funcion�rios mais antigo e mais novo.
		if (tempoServico > maiorTempoServico)
		{
			maiorTempoServico = tempoServico;
			matriculaMaisAntigo = matricula;
		}
		else
		{
			if (tempoServico < menorTempoServico)
			{
				menorTempoServico = tempoServico;
				matriculaMaisNovo = matricula;
			}
		}
	}	
	
	//exibindo os resultados
	printf ("\n%d pessoas ingressaram com menos de 21 anos na empresa.", cont21);
	printf ("\n%d pessoas do genero feminino.", contF);
	
	//calculando a m�dia salarial dos homens
	mediaSalarialHomens = somaSalarioHomens/contM;
	
	printf ("\nMedia salarial dos homens: R$ %.2f.", mediaSalarialHomens);
	printf ("\nMatricula funcionario mais antigo: %d.", matriculaMaisAntigo);
	printf ("\nMatricula funcionario mais novo: %d.", matriculaMaisNovo);
}
