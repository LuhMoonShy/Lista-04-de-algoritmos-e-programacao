//Imagine uma brincadeira entre dois colegas, na qual um pensa um n�mero e o outro deve 
//fazer chutes at� acertar o n�mero imaginado. Como dica, a cada tentativa � dito se o chute foi alto 
//ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o n�mero imaginado e os 
//chutes, ao final mostre quantas tentativas foram necess�rias para descobrir o n�mero.
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, num_pens;	
		printf("Informe o n�mero que voc� pensou: ");
		scanf("%d", &num);
	system("cls");		
		for(i=1;i<=num;i++){
			printf("A pessoa anterior pensou em que n�mero? ");
			scanf("%d", &num_pens);
			if(num_pens == num){
			printf("Em %d tentativas voc� acertou! O n�mero era %d!",i,num);
			break;
			}
			else if(num_pens > num){
					printf("Vish, errou! Dica: o n�mero � menor que esse.\n");
				}
			else if(num_pens < num){
					printf("Vish, errou! Dica: o n�mero � maior que esse.\n");
				}	
		}
return 0;
}
