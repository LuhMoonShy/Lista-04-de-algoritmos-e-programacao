//Construa um algoritmo que apresente os 20 primeiros termos da s�rie de Fibonacci.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, i, n = 20, soma;	
		printf("______________________________________________________________________________________________\n");
		printf("A s�rie Fibonacci � uma sucess�o de n�meros, iniciada em 0,1 e os n�meros seguintes s�o sempre\n"); 
		printf("                         a soma dos dois n�meros anteriores.                                  \n");
		printf("______________________________________________________________________________________________\n");	
		printf("\nInforme um n�mero : ");
		scanf("%d", &num1);
		printf("Informe outro n�mero : ");
		scanf("%d", &num2);	
		printf("Serie Fibonacci:");
		for(i = 2; i <= n; i++){
			soma = num1 + num2;
			num1 = num2;
			num2 = soma;
			printf("\n%d",soma);
		}
return 0;
}
