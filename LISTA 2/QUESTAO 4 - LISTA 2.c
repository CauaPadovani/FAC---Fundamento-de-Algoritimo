/*QUESTÃO 04: Desenvolva um algoritmo que 
calcule o consumo de combustível de um 
automóvel em determinada viagem. Para isso, 
devem ser obtidos: i) o percurso (em 
quilômetros) da viagem; ii) o número de 
quilômetros que o carro percorre com um litro 
de combustível (km/l); e iii) o preço do litro do 
combustível. 
Ao final, o algoritmo deve determinar:
? A quantidade de combustível, em litros, 
consumida durante a viagem;
? O custo total de combustível.*/

#include<stdio.h>

void main(){

float kmPercorrido, kmPorLitro, precoCombustivel, combustivelConsumido, precoTotal;

printf("insira a quilometragem percorrida: ");
scanf("%f", &kmPercorrido);

printf("insira o quanto o carro percorre por litro de combustivel: ");
scanf("%f", &kmPorLitro);

printf("insira o preco do litro de combustivel: ");
scanf("%f", &precoCombustivel);

combustivelConsumido= (kmPercorrido/kmPorLitro);
printf("A quantidade combustivel consumido em litros foi: %.2f \n", combustivelConsumido);

precoTotal=(combustivelConsumido*precoCombustivel);
printf("O preco total gasto de combustivel foi: %.2f \n", precoTotal);

}
