//Construa um algoritmo que permita fazer um levantamento do estoque de vinhos de uma 
//adega, tendo como dados de entrada tipos de vinho, sendo: ‘T’ para tinto, ‘B’ para branco e ‘R’ 
//para rosê. Especifique a porcentagem de cada tipo sobre o total geral de vinhos; a quantidade de 
//vinhos é desconhecida, utilize como finalizador ‘F’ de fim.
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int tinto = 0, branco= 0, rose = 0;
	float totalVinhos, porcentT, porcentB, porcentR;
	char vinho;	
		printf("_____________________________________________________________________________\n");
		printf("------- Para iniciar a contagem, digite: T(tinto), B(branco), R(rosê)!-------\n");
		printf("\n----------- O programa será finalizado quando você informar F!-------------\n");
		printf("_____________________________________________________________________________\n");	
		
		do{
			printf("\nInforme o tipo de vinho: ");
			scanf("%c", &vinho);
			fflush(stdin);
			vinho = toupper(vinho);
			if(vinho == 'T'){
				tinto = tinto + 1;
			}
			else if( vinho == 'R'){
				rose = rose + 1;
			}
			else if(vinho == 'B'){
				branco = branco +1;
			}
			else{
				printf("Tipo informado inexistente!Tente novamente.\n");
			}		
		}while(vinho != 'F');	
    system("cls");
		totalVinhos = tinto + rose + branco;
		porcentT = (tinto/totalVinhos) * 100;
		porcentR = (rose/totalVinhos) * 100;
		porcentB = (branco/totalVinhos) * 100;
		printf("%.1f dos vinhos informados é(são) tinto(s), %.1f branco(s) e %.1f rosê(s)!", porcentT, porcentB, porcentR);
return 0;
}
