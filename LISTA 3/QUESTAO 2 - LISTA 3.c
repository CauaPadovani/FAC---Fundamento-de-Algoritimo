/*Construir um programa que permita ao usu�rio
calcular a �rea de uma figura geom�trica. Para
isto, o usu�rio dever� escolher a figura desejada
([C]�rculo, [R]et�ngulo, [Q]uadrado ou
[T]ri�ngulo) e fornecer as informa��es
necess�rias para que a �rea desta figura possa
ser calculada.
Notas:

1. F�rmulas para o c�lculo das �reas:
a. Ac�rculo = p.raio2; onde p = 3.14159;
b. Aret�ngulo = base.altura;
c. Aquadrado = lado2;
d. Atri�ngulo = (base.altura)/2.

2. Caso o usu�rio escolha uma op��o inv�lida,
uma mensagem de erro deve ser exibida e a
execu��o do programa terminada.*/

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
