//Elabore um algoritmo que, a partir de um dia, m�s e ano fornecidos, valide se eles comp�em 
//uma data v�lida. N�o deixe de considerar os meses com 30 ou 31 dias, e o tratamento de ano 
//bissexto.
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, ano, mes;
		printf("Informe um dia: ");
		scanf("%d", &dia);
		fflush (stdin);
		printf("Informe um m�s (01 a 12): ");
		scanf("%d", &mes);
		printf("Informe um ano: ");
		scanf("%d", &ano);	 
		if (mes == 1){
			if (dia > 0 && dia <= 31){
				printf("%d/%d/%d � uma data v�lida!\n", dia, mes,ano);
			} 
		else printf("Dia inv�lido!\n");	
		}	
		if(mes == 2){
			if((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)){
				if(dia > 0 && dia <= 29){
					printf("Esse ano � bissexto!\n");
					printf("%d/%d/%d � uma data v�lida!\n", dia, mes,ano);
				}
			}
        	else if((ano % 4 != 0) && (ano % 100 == 0) || (ano % 400 != 0)){
        		if(dia > 0 && dia <=28){
        			printf("%d/%d/%d � uma data v�lida!\n", dia, mes,ano);
				}
			}	
		 else printf("Dia inv�lido!\n");
		}
		if (mes > 0 && mes <= 7 && mes != 2 && mes != 1){
		if ((mes % 2 == 0)){
			if(dia > 0 && dia <= 30){
				printf("%d/%d/%d � uma data v�lida!\n", dia, mes,ano);
			}
		}
		else if((mes % 2 == 1)){
				if (dia > 0 && dia <= 31){
					printf("%d/%d/%d � uma data v�lida!\n", dia, mes,ano);
				}
			}
		else printf("Dia inv�lido!\n");	
		}	
		if (mes > 0 && mes >= 8 && mes <= 12){
			if ((mes % 2 == 0)){
				if(dia > 0 && dia <= 31){
					printf("%d/%d/%d � uma data v�lida!\n", dia, mes,ano);
				}
			}
			else if((mes % 2 == 1)){
					if (dia > 0 && dia <= 30){
						printf("%d/%d/%d � uma data v�lida!", dia, mes,ano);
					}
				}
		else printf("Dia inv�lido!\n");	
		}	
	return 0;
}
