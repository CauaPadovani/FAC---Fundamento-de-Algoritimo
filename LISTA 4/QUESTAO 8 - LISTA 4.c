/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 04/05/2023
	
	Lista de Exercícios IV

	QUESTÃO 08: Em uma empresa deseja-se fazer um levantamento sobre 
	algumas informações dos seus 250 funcionários. Cada funcionário deverá 
	responder um questionário ao qual informará os seguintes dados: 
	matrícula, gênero, idade, salário e tempo (em anos) de trabalho na 
	empresa. A execução do programa deve exibir os seguintes itens:

	a)	Quantidade de funcionários que ingressaram na empresa com 
	    menos de 21 anos;
	b)	Quantidade de funcionários do gênero feminino;
	c)	Média salarial dos homens;
	d)	Matrícula dos funcionários mais antigo e mais novo.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 5

//main
void main ()
{
	//declaração de variáveis
	int i, matricula, idade, tempoServico, cont21 = 0,
	    contF = 0, contM = 0, maiorTempoServico = 0, menorTempoServico = 100,
		matriculaMaisNovo, matriculaMaisAntigo;
	char genero;
	float salario, somaSalarioHomens = 0, mediaSalarialHomens;
	
	//obtendo os dados dos funcionários
	for (i=1;i<=QUANT;i++)
	{
		printf ("Matricula: ");
		scanf ("%d", &matricula);
		
		printf ("Genero: ");
		fflush (stdin);
		scanf ("%c", &genero);
		genero = toupper (genero);  //colocando o gênero em maiúsculo
		
		printf ("Idade: ");
		scanf ("%d", &idade);
		
		printf ("Salario: ");
		scanf ("%f", &salario);
		
		printf ("Tempo na empresa (em anos): ");
		scanf ("%d", &tempoServico);
		
		//Quantidade de funcionários que ingressaram na empresa com 
	    //menos de 21 anos
	    if (idade - tempoServico < 21)
		{
			cont21++;	
		}		 
		
		//Quantidade de funcionários do gênero feminino
		if (genero == 'F')
		{
			contF++;
		}
		else
		{
			//Média salarial dos homens
			somaSalarioHomens += salario;
			contM++; 

		}

		//Matrícula dos funcionários mais antigo e mais novo.
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
	
	//calculando a média salarial dos homens
	mediaSalarialHomens = somaSalarioHomens/contM;
	
	printf ("\nMedia salarial dos homens: R$ %.2f.", mediaSalarialHomens);
	printf ("\nMatricula funcionario mais antigo: %d.", matriculaMaisAntigo);
	printf ("\nMatricula funcionario mais novo: %d.", matriculaMaisNovo);
}
