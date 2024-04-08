/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 08/07/2023
	
	Fun��es para a gera��o de n�meros aleat�rios.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 20

//prot�tipos das fun��es

//nota: acrescentei o par�metro 'limite', permitindo que na chamada seja especificado o limite 
//do valor a ser gerado
void preencherAleatorio (int vetor[], int quantidade, int limite);
void preencherAleatorioSemRepeticao (int vetor[], int quantidade, int limite);
void preencherAleatorioCrescente (int vetor[], int quantidade);
void preencherAleatorioCrescenteSemRepeticao (int vetor[], int quantidade);

int buscar (int vetor[], int quantidade, int numero);
void exibir (int vetor[], int tamanho);

//main
void main ()
{	
	//declara��o de vari�veis
	int vet1[TAM],
		vet2[TAM],
		vet3[TAM],
		vet4[TAM];
	
	//preenchendo os vetores de forma aleat�ria, cada um de uma forma
	
	//para cada valor de tamanho TAM, como exemplo, coloquei o limite de valores igual a 3 vezes o tamanho
	//Por exemplo, se o tamanho do vetor for 10, os n�meros gerados estar�o no intervalo de 1 a 30.
	preencherAleatorio (vet1, TAM, TAM*3);
	sleep (1);
	preencherAleatorioSemRepeticao (vet2, TAM, TAM*3);
	sleep (1);
	preencherAleatorioCrescente (vet3, TAM);
	sleep (1);
	preencherAleatorioCrescenteSemRepeticao (vet4, TAM);

	//obs: usei a fun��o 'sleep' para permitir que exista um tempo m�nimo entre uma gera��o e outra,
	//para que os valores dos vetores n�o sejam gerados a partir da mesma sequ�ncia/semente.
	
	//exibindo os vetores gerados
	exibir (vet1, TAM);
	exibir (vet2, TAM);
	exibir (vet3, TAM);
	exibir (vet4, TAM);
}

//implementa��o das fun��es
void preencherAleatorio (int vetor[], int quantidade, int limite)
{
	//declara��o de vari�veis
	int i;
	
	//configurando a semente
	srand (time(NULL));
	
	//percorrendo o vetor
	for (i=0; i<quantidade; i++)
	{
		vetor[i] = (rand() % limite) + 1;  //gerando n�meros aleat�rios no intervalo de 1 a 'limite'
	}	
}

void preencherAleatorioSemRepeticao (int vetor[], int quantidade, int limite)
{
	//declara��o de vari�veis
	int i, valor;
	
	//configurando a semente
	srand (time(NULL));
	
	//percorrendo o vetor
	i=0;
	while (i<quantidade)
	{
		valor = (rand() % limite) + 1;  //gerando n�meros aleat�rios no intervalo de 1 a 'limite'
		
		//verificando se o n�mero n�o foi inserido anteriormente no vetor
		if (buscar (vetor, i, valor) < 0)
		{
			vetor[i] = valor;  //inserindo no vetor, ap�s ter certeza de que n�o � repetido
			i++;
		}
	}		
}

void preencherAleatorioCrescente (int vetor[], int quantidade)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	//gerando o primeiro elemento do vetor (no intervalo de 0 a 9)
	vetor[0] = rand()%10;
	
	//gerando os demais elementos do vetor, sempre com base no anterior para garantir que ser� maior
	for (i=1; i<quantidade; i++)
	{
		vetor[i] = vetor[i-1]+(rand()%3);  //do segundo em diante, o valor ser� igual ao anterior somado a 0, 1 ou 2
	}
}

void preencherAleatorioCrescenteSemRepeticao (int vetor[], int quantidade)
/*essa vers�o � muito similar � anterior. Por�m, para garantir que n�o existir� repeti��o de elementos,
� necess�rio que n�o possa ser somado o valor 0 ao anterior*/
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	//gerando o primeiro elemento do vetor (no intervalo de 0 a 9)
	vetor[0] = rand()%10;
	
	//gerando os demais elementos do vetor, sempre com base no anterior para garantir que ser� maior
	for (i=1; i<quantidade; i++)
	{
		vetor[i] = vetor[i-1]+(rand()%3)+1;  //o "+1" ao final garantir� que n�o existir�o repeti��es!
	}
}

void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

int buscar (int vetor[], int quantidade, int numero)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<quantidade;i++)
	{
		//verificando se o valor for encontrado
		if (vetor[i] == numero)
		{
			return i;	//retornando a posi��o do elemento no vetor
		}
	}
	
	//elemento n�o encontrado no vetor
	return -1;
}
