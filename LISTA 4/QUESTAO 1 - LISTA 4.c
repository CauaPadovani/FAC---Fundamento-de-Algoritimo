/*QUEST�O 01: Fa�a um programa que leia um
n�mero inteiro positivo N e exiba todos os
m�ltiplos de Y inferiores a N, onde N e Y s�o
fornecidos pelo usu�rio. */

#include <stdio.h>

void main() {
    
	//declarando as vari�veis 
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

