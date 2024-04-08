/*QUESTÃO 02: Escrever um algoritmo que
obtenha o peso de uma pessoa na Terra e o
número de um planeta. Ao final, com auxílio da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.
Número Planeta Gravidade Relativa g
1 Mercúrio 0,37
2 Vênus 0,88
3 Marte 0,38
4 Júpiter 2,64
5 Saturno 1,15
6 Urano 1,17
Para calcular o peso no planeta escolhido,
utilize a seguinte fórmula:
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta */

#include <stdio.h>

void main(){
		
		int planeta;
		float peso, resultado;
		
		printf("Insira o seu peso: ");
		scanf("%f", &peso);
		
		printf("Insira o numero correspondente ao planeta que deseja descobrir o seu peso\n 1 Mercurio\n 2 Venus\n 3 Marte\n 4 Jupiter\n 5 Saturno\n 6 Urano\n");
		scanf("%d", &planeta);
		
		switch (planeta){
			case 1:
				resultado= (peso/10)*0.37;
				
				printf("O seu peso relativo em Mercurio eh: %.2f", resultado);
				
				break;
				
			case 2:
				resultado= (peso/10)*0.88;
				
				printf("O seu peso relativo em Venus eh: %.2f", resultado);
				
				break;
				
			case 3:
				resultado= (peso/10)*0.38;
				
				printf("O seu peso relativo em Marte eh: %.2f", resultado);
				
				break;

			case 4:
				resultado= (peso/10)*2.64;
				
				printf("O seu peso relativo em Jupiter eh: %.2f", resultado);
				
				break;

			case 5:
				resultado= (peso/10)*1.15;
				
				printf("O seu peso relativo em Saturno eh: %.2f", resultado);
				
				break;
			
			case 6:
				resultado= (peso/10)*1.17;
				
				printf("O seu peso relativo em Urano eh: %.2f", resultado);
				
				break;
				
		}
		
		
}

