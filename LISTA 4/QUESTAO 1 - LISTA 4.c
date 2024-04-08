/*QUESTÃO 01: Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário. */

#include <stdio.h>

void main() {
    
	//declarando as variáveis 
	int n, y, i;

	//recebendo os valores 
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Digite outro numero inteiro positivo: ");
    scanf("%d", &y);

	//exibindo os numeros multiplos de Y inferiores a N
    printf("Multiplos de %d inferiores a %d:\n", y, n);
    for (i = y; i < n; i += y) {
        printf("%d\n", i);
    }

    
}

