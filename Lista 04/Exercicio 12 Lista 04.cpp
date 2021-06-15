//Em uma eleição presidencial existem quatro candidatos. Os votos são informados por código. 
//Os dados utilizados para a ação obedecem à seguinte codificação:
//• 1, 2, 3, 4 = voto para os respectivos candidatos;
//• 5 = voto nulo;
//• 6 = voto em branco.
//Elabore um algoritmo que calcule e escreva:
//• O total de votos para cada candidato e seu percentual sobre o total;
//• O total de votos nulos e seu percentual sobre o total;
//• O total de votos em branco e seu percentual sobre o total.
//Como finalizador do conjunto de votos, tem-se o valor 0.
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int voto, branco = 0, nulo = 0, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0;
	float totalVotos, porc1, porc2, porc3, porc4, porcBranco, porcNulo;
		printf("___________________________________________________________________________________________________________________\n");
		printf("------------Os votos serão computados da seguinte forma: 1-candidato 1, 2-candidato 2, 3-candidato 3---------------\n");
		printf("-------------------------------------4-candidato 4, 5-nulo, 6-branco!----------------------------------------------\n");    
		printf("-----------------------------------------Para finalizar digite 0 !-------------------------------------------------\n");
		printf("___________________________________________________________________________________________________________________\n");
		do{
			printf("Informe o voto: ");
			scanf("%d", &voto);	
			if(voto == 1)
			cand1++;
			else if(voto == 2)
			cand2++;
			else if(voto == 3)
			cand3++;
			else if(voto == 4)
			cand4++;
			else if(voto == 5)
			nulo++;
			else if(voto == 6)
			branco++;
			else printf("Opção inválida!\n");
		}while(voto != 0);	
	system("cls");
		totalVotos = cand1 + cand2 + cand3 + cand4 + branco + nulo;	
		porc1 = (cand1 / totalVotos) * 100;
		porc2 = (cand2 / totalVotos) * 100;
		porc3 = (cand3 / totalVotos) * 100;
		porc4 = (cand4 / totalVotos) * 100;
		porcNulo = (nulo / totalVotos) * 100;
		porcBranco = (branco / totalVotos) * 100;	
		printf("O total de votos do candidato 1 foi de %d, e a porcentagem de %.2f\n", cand1, porc1);
		printf("O total de votos do candidato 2 foi de %d, e a porcentagem de %.2f\n", cand2, porc2);
		printf("O total de votos do candidato 3 foi de %d, e a porcentagem de %.2f\n", cand3, porc3);
		printf("O total de votos do candidato 4 foi de %d, e a porcentagem de %.2f\n", cand4, porc4);
		printf("O total de votos nulo foi de %d, e a porcentagem de %.2f\n", nulo, porcNulo);
		printf("O total de votos branco foi de %d, e a porcentagem de %.2f\n", branco, porcBranco);	
return 0;
}
