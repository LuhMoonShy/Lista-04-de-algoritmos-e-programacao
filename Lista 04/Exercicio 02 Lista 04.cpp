//Elabore um algoritmo que escreva o signo do zodíaco correspondente ao dia e mês informado
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes;	
	printf("Informe um dia: ");
	scanf("%d", &dia);
	printf("Informe um mês: ");
	scanf("%d", &mes);	
	system("cls");
		if(mes == 3 && dia >= 21 && dia <= 31 || mes == 4 && dia >= 1 && dia <= 20){
			printf("%d/%d é do signo zodíaco: ÁRIES!\n", dia,mes);
		}
		else if(mes == 4 && dia >= 21 && dia <= 30 || mes == 5 && dia >= 1 && dia <= 20){
				printf("%d/%d é do signo zodíaco: TOURO!\n", dia,mes);		
			}
		else if(mes == 5  && dia >= 21 && dia <= 31 || mes == 6 && dia >= 1 && dia <= 20){
				printf("%d/%d é do signo zodíaco: GEMÊOS!\n", dia,mes);		
			}
		else if(mes == 6 && dia >= 21 && dia <= 30 || mes == 7 && dia >= 1 && dia <= 21){
				printf("%d/%d é do signo zodíaco: CÂNCER!\n", dia,mes);
			}
		else if(mes == 7  && dia >= 22 && dia <= 31 || mes == 8 && dia >= 1 && dia <= 22){
				printf("%d/%d é do signo zodíaco: LEÃO!\n", dia,mes);
			}
		else if(mes == 8 && dia >= 23 && dia <= 31 ||mes == 9 && dia >= 1 && dia <= 22){
				printf("%d/%d é do signo zodíaco: VIRGEM!\n", dia,mes);
			}							
		else if(mes == 9  && dia >= 23 && dia <= 30 || mes == 10 && dia >= 1 && dia <= 22){
				printf("%d/%d é do signo zodíaco: LIBRA!\n", dia,mes);								
			}
		else if(mes == 10  && dia >= 23 && dia <= 31 || mes == 11 && dia >= 1 && dia <= 21){
				printf("%d/%d é do signo zodíaco: ESCORPIÃO!\n", dia,mes);
			}									
		else if(mes == 11 && dia >= 22 && dia <= 30 || mes == 12 && dia >= 1 && dia <= 21){
				printf("%d/%d é do signo zodíaco: SAGITÁRIO!\n", dia,mes);										
			}
		else if(mes == 11 && dia >= 22 && dia <= 31 || mes == 12 && dia >= 1 && dia <= 20){
				printf("%d/%d é do signo zodíaco: CAPRICÓRNIO!\n", dia,mes);
			}										
		else if(mes == 1 && dia >= 21 && dia <= 31 || mes == 12 && dia >= 1 && dia <= 19){
				printf("%d/%d é do signo zodíaco: AQUÁRIO!\n", dia,mes);
			}											
		else if(mes == 2 && dia >= 20 && dia <= 29 || mes == 3 && dia >= 1 && dia <= 20){
				printf("%d/%d é do signo zodíaco: PEIXES!\n", dia,mes);
			} 
		else printf("Dia ou mês informado inexistente!");
	return 0;
}
