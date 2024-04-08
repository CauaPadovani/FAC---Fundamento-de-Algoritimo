/*
FAETERJ-Rio 
Aluno: Cau� Santos Padovani

Implementar uma fun��o que, dados tr�s
n�meros reais num1, num2 e num3,
ordene-os de forma que, ao final, o menor
valor esteja em num1, o do meio em num2
e o maior em num3. */


//inserindo biblioteca
#include<stdio.h>
 
//prot�tipo da fun��o
void organizar(float *num1, float *num2,float *num3);
 
//main
void main(){
 	
 	//declarando as vari�veis
	float num1, num2, num3;
	
	//pedindo os n�meros 
	printf("Insira um numero: ");
	scanf("%f", &num1);

	printf("Insira um numero: ");
	scanf("%f", &num2);

	printf("Insira um numero: ");
	scanf("%f", &num3);
	
	//chamando a fun��o
	organizar( &num1, &num2, &num3);
	
	printf("Os numeros ordenados: %.1f, %.1f, %.1f", num1, num2, num3);
	
 }
 
void organizar(float *num1, float *num2,float *num3){
 	
	//declarando uma vari�vel "tempor�ria" para facilitar a organiza��o dos n�meros
	float test; 
 	
 	//testando se o primeiro � maior que o segundo 
	if (*num1 >= *num2) {
        
		test = *num1;
        
		*num1 = *num2;
        
		*num2 = test;
    }

	//testando se o segundo � maior que o terceiro 
    if (*num2 >= *num3) {
        
		test = *num2;
        
		*num2 = *num3;
        
		*num3 = test;
    }

	//testando se o primeiro � maior que o segundo depois das altera��es
    if (*num1 >= *num2) {
        
		test = *num1;
        
		*num1 = *num2;
        
		*num2 = test;
    }	

 }
