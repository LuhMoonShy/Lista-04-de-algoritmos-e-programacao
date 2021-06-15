//Escreva um algoritmo que imprima todas as possibilidades de que o lançamento de dois dados 
//tenhamos o valor 7 como resultado da soma dos valores de cada dado.
#include <stdio.h>
int main(){
	int i1,i2,soma;	
	for(i1=1;i1<=6;i1++){
		for(i2=1;i2<=6;i2++){
			if((i1+i2==7)){
				soma=i1+i2;
				printf("%d+%d=%d\n",i1,i2,soma);
			}
		}
	}
return 0;	
}
