/*QUESTÃO 03: As vendas parceladas se 
tornaram uma ótima opção para os lojistas que, 
a cada dia, criam novas promoções para tentar 
conquistar novos clientes. Faça um algoritmo
que permita ao lojista informar o preço do 
produto e receber as seguintes informações:
a) O valor com 10% de desconto para 
pagamento à vista;
b) O valor da prestação para parcelamento 
sem juros, em 5x;
c) O valor da prestação para parcelamento 
com juros, em 10x, com 20% de acréscimo 
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

