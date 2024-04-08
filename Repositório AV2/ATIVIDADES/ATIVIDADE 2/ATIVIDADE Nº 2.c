/* FAETERJ-Rio 						
ALUNO:Cau� Santos Padovani

Atividade n� 2
Pede-se uma fun��o que, dado um n�mero
inteiro n, apresente todas as combina��es
poss�veis contendo de tr�s valores,
respeitadas as seguintes regras:

1. Cada um dos tr�s valores da sequ�ncia
deve estar no intervalo de 1 a n;

2. A sequ�ncia n�o pode conter n�meros
repetidos;

3. Os valores da sequ�ncia devem estar
ordenados crescentemente.

Por exemplo, caso o valor de n fosse igual
a 5, apenas as seguintes combina��es
deveriam ser apresentadas pela fun��o:

1 	2 	3
1 	2 	4
1 	2 	5
1 	3 	4
1 	3	5
1 	4 	5
2 	3 	4
2 	3 	5
2 	4 	5
3 	4	5
*/

    
#include <stdio.h>

void combinacoes(int n);

void main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    combinacoes(n);
}

void combinacoes(int n) {
	int i, j, k;

    for (i = 1; i <= n - 2; i++) 
	{
    	for (j = i + 1; j <= n - 1; j++) 
		{
            for (k = j + 1; k <= n; k++) 
			{
                printf("%d\t%d\t%d\n", i, j, k);
            }
        }
    }
}


