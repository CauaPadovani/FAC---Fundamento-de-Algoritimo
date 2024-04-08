/* 
FAETERJ-Rio 
ALUNO: Cauã Santos Padovani 

Fazer uma função que transforme um
número decimal num para o equivalente na
base b, 2 = b = 8.
Se a conversão for possível, a função
retornará 1, além do valor convertido; caso
contrário, retornará 0.   */

//inserindo biblioteca
#include<stdio.h>

//protótipo da função
int converterBase(int num, int base, int *valorFinal);

//main
void main(){
	
	//Declarando as variáveis
	int num, base, valorFinal;
	
	//Pedindo ao usuário o número a ser convertido 
	printf("Insira um numero[na base 10]: ");
	scanf("%d", &num);
	
	//Verificando a possilidade de conversão para as bases de 2 a 8
	for (base=2; base <= 8; base++) {

	    if (converterBase(num, base, &valorFinal) == 0) {
	    	
	        printf("!!!A conversao nao eh possivel!!!\n");
	    } 
			else {

    			printf("Valor convertido na base %d: %d\n", base, valorFinal);
			}
	}
	
}
	
int converterBase(int num, int base, int *valorFinal){
	
	//Declarando variáveis para conversão
	int numConvertido = 0, algarismo, fator = 1;

	//Checando se o número é positivo
	if (num < 0) {
        
		return 0;
    }
    
    //Convertendo para as bases indicadas na main 
    while (num != 0) {
        
		algarismo = num%base;
        
        if (algarismo >= base) {
            return 0;
        }
        
		numConvertido += algarismo * fator;
        
		fator *= 10;
        
		num /= base;
    }

	//Retornando os valores convertidos  
	*valorFinal = numConvertido;
    return 1;
}
	
