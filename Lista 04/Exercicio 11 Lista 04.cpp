//Construa um algoritmo que calcule a m�dia aritm�tica de um conjunto de n�meros pares que 
//forem fornecidos pelo usu�rio. O valor de finaliza��o ser� a entrada do n�mero 0. Observe que 
//nada impede que o usu�rio forne�a quantos n�meros �mpares quiser, com a ressalva de que eles 
//n�o poder�o ser acumulados.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0,num; 
	float media,soma;
		soma = 0;
		printf("Informe os valores solicitados para c�lculo da m�dia, ao finalizar digite 0 e envie!\n");
	system("cls");
		do{
			printf("Informe um n�mero par: ");
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
