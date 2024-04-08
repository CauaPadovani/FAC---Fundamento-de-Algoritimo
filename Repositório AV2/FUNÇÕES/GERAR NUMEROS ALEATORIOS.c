/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 08/07/2023
	
	Funções para a geração de números aleatórios.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 20

//protótipos das funções

//nota: acrescentei o parâmetro 'limite', permitindo que na chamada seja especificado o limite 
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
	//declaração de variáveis
	int vet1[TAM],
		vet2[TAM],
		vet3[TAM],
		vet4[TAM];
	
	//preenchendo os vetores de forma aleatória, cada um de uma forma
	
	//para cada valor de tamanho TAM, como exemplo, coloquei o limite de valores igual a 3 vezes o tamanho
	//Por exemplo, se o tamanho do vetor for 10, os números gerados estarão no intervalo de 1 a 30.
	preencherAleatorio (vet1, TAM, TAM*3);
	sleep (1);
	preencherAleatorioSemRepeticao (vet2, TAM, TAM*3);
	sleep (1);
	preencherAleatorioCrescente (vet3, TAM);
	sleep (1);
	preencherAleatorioCrescenteSemRepeticao (vet4, TAM);

	//obs: usei a função 'sleep' para permitir que exista um tempo mínimo entre uma geração e outra,
	//para que os valores dos vetores não sejam gerados a partir da mesma sequência/semente.
	
	//exibindo os vetores gerados
	exibir (vet1, TAM);
	exibir (vet2, TAM);
	exibir (vet3, TAM);
	exibir (vet4, TAM);
}

//implementação das funções
void preencherAleatorio (int vetor[], int quantidade, int limite)
{
	//declaração de variáveis
	int i;
	
	//configurando a semente
	srand (time(NULL));
	
	//percorrendo o vetor
	for (i=0; i<quantidade; i++)
	{
		vetor[i] = (rand() % limite) + 1;  //gerando números aleatórios no intervalo de 1 a 'limite'
	}	
}

void preencherAleatorioSemRepeticao (int vetor[], int quantidade, int limite)
{
	//declaração de variáveis
	int i, valor;
	
	//configurando a semente
	srand (time(NULL));
	
	//percorrendo o vetor
	i=0;
	while (i<quantidade)
	{
		valor = (rand() % limite) + 1;  //gerando números aleatórios no intervalo de 1 a 'limite'
		
		//verificando se o número não foi inserido anteriormente no vetor
		if (buscar (vetor, i, valor) < 0)
		{
			vetor[i] = valor;  //inserindo no vetor, após ter certeza de que não é repetido
			i++;
		}
	}		
}

void preencherAleatorioCrescente (int vetor[], int quantidade)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	//gerando o primeiro elemento do vetor (no intervalo de 0 a 9)
	vetor[0] = rand()%10;
	
	//gerando os demais elementos do vetor, sempre com base no anterior para garantir que será maior
	for (i=1; i<quantidade; i++)
	{
		vetor[i] = vetor[i-1]+(rand()%3);  //do segundo em diante, o valor será igual ao anterior somado a 0, 1 ou 2
	}
}

void preencherAleatorioCrescenteSemRepeticao (int vetor[], int quantidade)
/*essa versão é muito similar à anterior. Porém, para garantir que não existirá repetição de elementos,
é necessário que não possa ser somado o valor 0 ao anterior*/
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	//gerando o primeiro elemento do vetor (no intervalo de 0 a 9)
	vetor[0] = rand()%10;
	
	//gerando os demais elementos do vetor, sempre com base no anterior para garantir que será maior
	for (i=1; i<quantidade; i++)
	{
		vetor[i] = vetor[i-1]+(rand()%3)+1;  //o "+1" ao final garantirá que não existirão repetições!
	}
}

void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
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
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<quantidade;i++)
	{
		//verificando se o valor for encontrado
		if (vetor[i] == numero)
		{
			return i;	//retornando a posição do elemento no vetor
		}
	}
	
	//elemento não encontrado no vetor
	return -1;
}
