/*QUEST�O 01: O IMC (�ndice de Massa Corporal)
� um crit�rio da Organiza��o Mundial de Sa�de
para dar uma indica��o sobre a condi��o de
peso de uma pessoa adulta. A f�rmula �:
IMC = peso / altura2
Elabore um algoritmo que, dados o peso e a
altura de um adulto, determine a sua condi��o
de acordo com a tabela abaixo:
IMC em adultos Condi��o
IMC < 18,5 Abaixo do peso
18,5 = IMC < 25,0 Peso ideal
25,0 = IMC < 30,0 Sobrepeso
30,0 = IMC < 35,0 Obesidade grau I
35,0 = IMC < 40,0 Obesidade grau II
IMC = 40,0 Obesidade grau III */


#include <stdio.h>

void main() {
    float imc, altura, peso;

    printf("Insira seu peso: ");
    scanf("%f", &peso);

    printf("Insira sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Voce esta abaixo do peso");
    } 
		else if (imc >= 18.5 && imc < 25) {
        	printf("Voce esta no peso ideal");
    } 
			else if (imc >= 25 && imc < 30) {
        		printf("Voce esta em sobrepeso");
    } 
				else if (imc >= 30 && imc < 35) {
        			printf("Voce esta em obesidade grau I");
    } 
					else if (imc >= 35 && imc < 40) {
        				printf("Voce esta em obesidade grau II");
    } 
					else {
        				printf("Voce esta em obesidade grau III");
    }

   
}
