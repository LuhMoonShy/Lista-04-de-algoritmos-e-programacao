//Construa um algoritmo que leia um conjunto de dados contendo altura e sexo (‘M’ para 
//masculino e ‘F’ para feminino) de 50 pessoas e, depois, calcule e escreva:
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int altura,menor=0,maior=0,alturaFem=0,feminino=0,mediaFem;
	char sexo;	
		menor=altura;	
		for(int i=1;i<=50;i++){
			printf("Informe o sexo M-masculino ou F-feminino da pessoa %d: ",i);
			scanf("%c", &sexo);
			fflush(stdin);
			sexo = toupper(sexo);
			printf("Informe a altura,em centímetros,dessa pessoa: ");
			scanf("%d", &altura);
			fflush(stdin);	
			if(maior<altura){
				maior=altura;
			}		
			if(sexo=='F'){
				feminino++;
				alturaFem = alturaFem + altura;
			}
			if(menor>altura){
				menor = altura;		
			}
		}
	system("cls");	
		mediaFem=alturaFem/feminino;		
		printf("A maior altura do grupo é de: %d.\n", maior);
		printf("A menor altura do grupo é de: %d.\n", menor);
		printf("A média de altura das mulheres pertencentes ao grupo é: %d.", mediaFem);	
return 0;
}
