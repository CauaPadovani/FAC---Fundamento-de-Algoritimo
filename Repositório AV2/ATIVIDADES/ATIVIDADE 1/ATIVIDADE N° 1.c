#include<stdio.h>

int quantAlg(int numero){
	int alg = 0;
	
	while(numero > 0){
		alg++;
		numero /=10;
	}
	return alg;
}

void main(){
	int n, quantAlgarismos;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	quantAlgarismos = quantAlg(n);
	printf("O numero inteiro n tem %d algarismos(s).", quantAlgarismos);
}
