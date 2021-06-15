//Construa um algoritmo que calcule a média aritmética de um conjunto de números pares que 
//forem fornecidos pelo usuário. O valor de finalização será a entrada do número 0. Observe que 
//nada impede que o usuário forneça quantos números ímpares quiser, com a ressalva de que eles 
//não poderão ser acumulados.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0,num; 
	float media,soma;
		soma = 0;
		printf("Informe os valores solicitados para cálculo da média, ao finalizar digite 0 e envie!\n");
	system("cls");
		do{
			printf("Informe um número par: ");
			scanf("%d", &num);		
			if((num%2==0) && num!=0){
				soma = soma + num;			
			}
			else{
				i--;
			}
			i++;
		} while(num!=0);
		media=soma/i ;
		printf("A media encontrada foi %.1f.",media);
return 0;
} 
