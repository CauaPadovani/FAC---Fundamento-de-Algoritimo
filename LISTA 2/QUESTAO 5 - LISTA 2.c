/* QUESTÃO 05: O cardápio de uma lanchonete é 
o seguinte: 
Especificação Código Preço
Cachorro quente 100 3,50
Bauru simples 101 4,50
Bauru com ovo 102 5,20
Hamburger 103 3,00
Cheeseburger 104 4,00
Refrigerante 105 2,50
Escrever um algoritmo que obtenha o código 
do item pedido, a quantidade e calcule o valor 
a ser pago. 
Considere que, a cada execução do algoritmo, 
somente será calculado o valor relacionado a 
um item.*/


#include <stdio.h>
void main(){
	
	float  resultado;
	int codigo, quantidade;
	
	printf("Especificacao\t Codigo\t Preco\n Cachorro-quente 100     3.50\n Bauru simples\t 101\t 4.50\n Bauru com ovo\t 102\t 5.20\n Hamburger\t 103\t 3.00\n Cheeseburger\t 104\t 4.00\n Refrigerante\t 105\t 2.50\n");
		
	printf("insira o codigo do lanche: ");
	scanf("%d", &codigo);	
	
	printf("insira a quantidade: ");
	scanf("%d", &quantidade);
	
	switch(codigo){
		case 100: 
			resultado=quantidade*3.5;
			  
			printf("O valor do seu pedido eh %.2f", resultado);
			
			break;
				 
		case 101: 
			resultado=quantidade*4.5;
			printf("O valor do seu pedido eh %.2f", resultado);
					
			break;
							
		case 102: 
			resultado=quantidade*5.2;
			printf("O valor do seu pedido eh %.2f", resultado);
					
			break;
		
		case 103: 
			resultado=quantidade*3.0;
			printf("O valor do seu pedido eh %.2f", resultado);
					
			break;
		
		case 104: 
			resultado=quantidade*4.0;
			printf("O valor do seu pedido eh %.2f", resultado);
					
			break;
		
		case 105: 
			resultado=quantidade*2.5;
			printf("O valor do seu pedido eh %.2f", resultado);
					
			break;
			
		}

}
