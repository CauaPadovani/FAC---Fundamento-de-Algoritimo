/*QUEST�O 04: Desenvolva um algoritmo que 
calcule o consumo de combust�vel de um 
autom�vel em determinada viagem. Para isso, 
devem ser obtidos: i) o percurso (em 
quil�metros) da viagem; ii) o n�mero de 
quil�metros que o carro percorre com um litro 
de combust�vel (km/l); e iii) o pre�o do litro do 
combust�vel. 
Ao final, o algoritmo deve determinar:
? A quantidade de combust�vel, em litros, 
consumida durante a viagem;
? O custo total de combust�vel.*/

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
