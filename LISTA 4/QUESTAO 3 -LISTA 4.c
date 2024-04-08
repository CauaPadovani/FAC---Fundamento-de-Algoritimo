/* QUEST�O 03: Jo�ozinho investiu Q reais em
uma aplica��o com rendimento fixo de R% ao
m�s. Pede-se a implementa��o de um
programa que calcule o valor (e exiba-o)
dispon�vel na conta de Jo�ozinho ap�s A anos
de investimento. */

#include<stdio.h>

void main(){
	
	//declarando as vari�veis 
	float quantia, rendimento, montante;
	int anos, meses, i;
	
	//recebendo o valor da aplica��o 
	printf("Insira o valor que sera investido: ");
	scanf("%f", &quantia);
	
	//Recebendo o valor do rendimento 
	printf("Insira o valor do rendimento ao mes(em porcentagem): ");
	scanf("%f", &rendimento);
	
	//recebendo o tempo de investimento 
	printf("Quantos anos pretende durar o investimento: ");
	scanf("%d", &anos);
	
	//convertendo o tempo de anos para meses
	meses= anos*12;
	
	//Convertendo o rendimento para porcentagem 
	rendimento= rendimento/100;
	
	// FORMULA GERAL JUROS COMPOSTOS => m=c.(1+i)^n
	
	//realizando a conta de acordo com o tempo inserido 
	for(i=1; i<=meses; i++){
		
		quantia=quantia*(1+rendimento);
	}
	
	printf("O Valor final do investimento foi: %.2ef", quantia);
}
