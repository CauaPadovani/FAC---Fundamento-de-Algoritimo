/*
	FAETERJ-Rio
	
	Quest�o 04 [2,5 pontos]: 
	Uma empresa de telefonia fez uma pesquisa com N 
	pessoas e cada uma dessas informou os seguintes 
	dados: se possui algum animal de estima��o; caso 
	possuam, a quantidade; se preferem gato, cachorro 
	ou outro. 
	Implementar um programa que fa�a a leitura desses 
	dados e, ao final, exiba: 
	
	
	1. Considerando os entrevistados que possuem 
	pets, a m�dia de animais de estima��o desse 
	grupo;
	
	2. Percentual de entrevistados que n�o possuem 
	pets; 
	
	3. Quantidade de entrevistados que preferem 
	gatos.


*/

#include <stdio.h>

#define QUANT 5

// Fun��o main
void main() {
	
	// Declara��o de vari�veis
	int i;
	int contPreferemGatos = 0;
	int contPortadorAnimais = 0;
	int contSemPets = 0;
	int somaAnimais = 0;
	float mediaAnimais;
	int quantAnimais;
	float porcSemPets;
	char resposta;
	
	
	// Estrutura de repeti��o DO...WHILE
	do {
		
		printf("\n\nPossui algum animal de estimacao? [S/N] ");
		fflush(stdin);
		scanf("%c", &resposta);
		resposta = toupper(resposta);
		
		if(resposta == 'S') {
			
			printf("Quantos animais voce possui? ");
			scanf("%d", &quantAnimais);
			somaAnimais += quantAnimais;
			contPortadorAnimais++;	
		}
		else {
			contSemPets++;
		}
		
		printf("Qual animal voce tem preferencia? ");
		printf("\n[G] Gato");
		printf("\n[C] Cachorro");
		printf("\n[O] Outro");
		printf("\nOpcao: ");
		fflush(stdin);
		scanf("%c", &resposta);
		resposta = toupper(resposta);
		
		if(resposta == 'G') {
			contPreferemGatos++;
		}
		
		i++;
	} while (i < QUANT);
	
	mediaAnimais = (float)somaAnimais/contPortadorAnimais;
	porcSemPets = (contSemPets*100/QUANT);
	
	printf("\nMedia de animais de estimacao: %.2f", mediaAnimais);
	printf("\nPercentual de entrevistados sem pets: %.2f%%", porcSemPets);
	printf("\nQuantidade de entrevistados com preferencia em gatos: %d", contPreferemGatos);
	
}
