#include <stdio.h>
#include <stdlib.h>

//Desenvolva um programa que calcule a soma de duas matrizes MxN de números reais (double). 
//A implementação deste programa deve considerar as dimensões fornecida pelo usuário 
//(Dica: represente a matriz através de variáveis do tipo double **, usando alocação dinâmica de memória)


int main(){
	int linha, coluna;
	double** matriz1;
	double** matriz2;
	do{
		puts("de a quantidade de linha");
		scanf("%i", &linha);
	}while(linha <= 0);
	do{
		puts("de a quantidade de coluna");
		scanf("%i", &coluna);
	}while(coluna <= 0);
	matriz1 = (double**) malloc (linha * sizeof(double*));
	matriz2 = (double**) malloc (linha * sizeof(double*));
	for(int i=0;i<linha;i++){
		*(matriz1 + i) = (double*) malloc (coluna * sizeof(double));
		*(matriz2 + i) = (double*) malloc (coluna * sizeof(double));
	}
	for (int i=1;i<=2;i++){
		printf("\npreencha a matriz %i\n", i);
		for (int l=0;l<linha;l++){
			for (int c=0;c<coluna;c++){
				printf("elemento[%d][%d]: ", l+1, c+1);
				if (i == 1){
					scanf("%lf", &matriz1[l][c]);
				}
				if (i==2){
					scanf("%lf", &matriz2[l][c]);
				}
			}
		}
	}
	puts("a soma dessas matriz resulta nessa:");
	for (int i=0;i<linha;i++){
		printf("\n");
		for(int j=0;j<coluna;j++){
			printf("%.2lf ", matriz1[i][j] + matriz2[i][j]);
		}
	}
}
