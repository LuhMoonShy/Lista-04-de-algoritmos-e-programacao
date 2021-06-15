//Anacleto tem 1,50 metro e cresce 2 centímetros por ano, enquanto Felisberto tem 1,10 metro 
//e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão 
//necessários para que Felisberto seja maior que Anacleto.
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano_passar, anacleto, felisberto, ano;
		anacleto=150+2*ano;
		felisberto=110+3*ano;
		for(ano=0;felisberto<anacleto;ano++){
			anacleto=150+2*ano;
			felisberto=110+3*ano;
		}	
		printf("Quantos anos serão necessários para o felisberto ficar mais alto que anacleto?\n");
		printf("%d anos!",ano);
return 0;
}
