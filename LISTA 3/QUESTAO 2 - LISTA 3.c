/*Construir um programa que permita ao usuário
calcular a área de uma figura geométrica. Para
isto, o usuário deverá escolher a figura desejada
([C]írculo, [R]etângulo, [Q]uadrado ou
[T]riângulo) e fornecer as informações
necessárias para que a área desta figura possa
ser calculada.
Notas:

1. Fórmulas para o cálculo das áreas:
a. Acírculo = p.raio2; onde p = 3.14159;
b. Aretângulo = base.altura;
c. Aquadrado = lado2;
d. Atriângulo = (base.altura)/2.

2. Caso o usuário escolha uma opção inválida,
uma mensagem de erro deve ser exibida e a
execução do programa terminada.*/

#include<stdio.h>
void main(){
	
	char figura;
	float area, raio, base, altura, lado;
	
	printf("Insira a letra correspondente a figura gemometrica que deve ser calculada a area");
	printf("\n ( c ) => Circulo\n ( r ) => Retangulo\n ( q ) => Quadrado\n ( t ) => Triangulo\n => ");
	scanf("%c", &figura);
	
	switch(figura){
		case 'c': 
			printf("Insira a medida do raio: ");
			scanf("%f", &raio);
			
			area=3.14159*(raio*raio);
			
			printf("A medida da area do circulo eh: %2f", area);
		
		break;
		
		case 'r':
			printf("Insira a medida da base: ");
			scanf("%f", &base);
			
			printf("Insira a medida da altura: ");
			scanf("%f", &altura);
			
			area=base*altura;
			
			printf("A medida da area do retangulo eh: %.2f", area);
			
		break;
		
		case 'q':
			printf("Insira a medida do lado: ");
			scanf("%f", &lado);
			
			area=lado*lado;
			
			printf("A medida da area do quadrado eh: %.2f", area);
			
		break;
		
		case 't':
			printf("Insira a medida da base: ");
			scanf("%f", &base);
			
			printf("Insira a medida da altura: ");
			scanf("%f", &altura);
			
			area=(base*altura)/2;
			
			printf("A medida da area do trigangulo eh: %.2f", area);
		break;
		
		default:
			printf(" ERRO: A letra selecionada eh invalida.");
	}
}
