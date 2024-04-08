/* Questão 03 [2,5 pontos]: 
Desenvolver um programa que, dados dois números 
inteiros n1 e n2, determine o maior algarismo 
comum entre eles. */

#include <stdio.h>

void main() {
    int n1, n2, aux1, aux2, alg = 1, alg2 = 1, maiorAlg = -1;

    printf("Insira um numero: ");
    scanf("%d", &n1);

    printf("Insira o segundo numero: ");
    scanf("%d", &n2);

    aux1 = n1;

    while (aux1 > 0) {
        alg = aux1 % 10;
        aux1 = aux1 / 10;
        aux2 = n2;

        while (aux2 > 0) {
            alg2 = aux2 % 10;
            aux2 = aux2 / 10;

            if ((alg == alg2) && (alg > maiorAlg)) {
                maiorAlg = alg;
            }
        }
    }

    if (maiorAlg != -1) {
        printf("O maior algarismo em comum entre os numeros e': %d\n", maiorAlg);
    } else {
        printf("Não existe algarismos em comum entre os numeros.\n");
    }
}

