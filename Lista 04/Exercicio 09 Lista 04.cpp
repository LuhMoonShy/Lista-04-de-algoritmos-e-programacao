//Imagine uma brincadeira entre dois colegas, na qual um pensa um número e o outro deve 
//fazer chutes até acertar o número imaginado. Como dica, a cada tentativa é dito se o chute foi alto 
//ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o número imaginado e os 
//chutes, ao final mostre quantas tentativas foram necessárias para descobrir o número.
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, num_pens;	
		printf("Informe o número que você pensou: ");
		scanf("%d", &num);
	system("cls");		
		for(i=1;i<=num;i++){
			printf("A pessoa anterior pensou em que número? ");
			scanf("%d", &num_pens);
			if(num_pens == num){
			printf("Em %d tentativas você acertou! O número era %d!",i,num);
			break;
			}
			else if(num_pens > num){
					printf("Vish, errou! Dica: o número é menor que esse.\n");
				}
			else if(num_pens < num){
					printf("Vish, errou! Dica: o número é maior que esse.\n");
				}	
		}
return 0;
}
