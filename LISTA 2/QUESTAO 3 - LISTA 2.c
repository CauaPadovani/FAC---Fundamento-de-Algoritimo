/*QUEST�O 03: As vendas parceladas se 
tornaram uma �tima op��o para os lojistas que, 
a cada dia, criam novas promo��es para tentar 
conquistar novos clientes. Fa�a um algoritmo
que permita ao lojista informar o pre�o do 
produto e receber as seguintes informa��es:
a) O valor com 10% de desconto para 
pagamento � vista;
b) O valor da presta��o para parcelamento 
sem juros, em 5x;
c) O valor da presta��o para parcelamento 
com juros, em 10x, com 20% de acr�scimo 
no valor do produto*/


#include<stdio.h>
void main(){

float precoProduto, pagamentoAvista, parcelado5x, parcelado10x;

printf("Insira o preco do produto: ");
scanf("%f", &precoProduto);

pagamentoAvista= precoProduto * 0.9;
parcelado5x= precoProduto/5;
parcelado10x= (precoProduto*1.2)/10;

printf("O preco final do produto eh:\n A vista:\t %.3f \n Parcelado em 5 vezes(valor da parcela):\t %.3f \n Parcelado em 10 vezes(valor da parcela):\t %.3f", pagamentoAvista, parcelado5x, parcelado10x);

}

