/* QUEST�O 02: Fa�a um programa que exiba
todos os elementos da seguinte s�rie, assim
como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1 */

#include<stdio.h>
void main(){
	
	//Declarando as vari�veis
	int i, j, som=0;

	//Estabelecendo a progress�o 
	for(i=1, j=50; i<=50, j>=1; j--, i++){
		
		//Exibindo os termos da progress�o 
		printf("%d %d ", i, j);
		
		//Realizando a soma de todos os termos 
		som+= i+j;
	}
	
	//Exibindo a soma de todos os elementos
	printf("\nA soma desses algarismos eh: %d", som);

}
