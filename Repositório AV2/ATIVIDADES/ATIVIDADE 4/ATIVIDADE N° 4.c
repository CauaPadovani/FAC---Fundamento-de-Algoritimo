/* 
FAETERJ-Rio 
ALUNO: Cau� Santos Padovani 

Fazer uma fun��o que transforme um
n�mero decimal num para o equivalente na
base b, 2 = b = 8.
Se a convers�o for poss�vel, a fun��o
retornar� 1, al�m do valor convertido; caso
contr�rio, retornar� 0.   */

//inserindo biblioteca
#include<stdio.h>

//prot�tipo da fun��o
int converterBase(int num, int base, int *valorFinal);

//main
void main(){
	
	//Declarando as vari�veis
	int num, base, valorFinal;
	
	//Pedindo ao usu�rio o n�mero a ser convertido 
	printf("Insira um numero[na base 10]: ");
	scanf("%d", &num);
	
	//Verificando a possilidade de convers�o para as bases de 2 a 8
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
	
	//Declarando vari�veis para convers�o
	int numConvertido = 0, algarismo, fator = 1;

	//Checando se o n�mero � positivo
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
	
