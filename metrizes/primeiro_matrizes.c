#include <stdio.h>
 
 int main(){
 	int maxline, maxcolu;
 	printf("de o numero de linhas: ");
 	scanf("%i", &maxline);
 	printf("de o numero de colunas: ");
 	scanf("%i", &maxcolu);
 	int matriz1[maxline][maxcolu];
 	int matriz2[maxline][maxcolu];
 	int matriz_soma[maxline][maxcolu];
 	int i, a;
 	for (i=0;i<maxline;i++){
 		int line[maxcolu];
 		for (a=0;a<maxcolu;a++){
 			printf("[%i][%i]", i, a);
 			scanf("%i", &matriz1[i][a]);
		}
	}
	for (i=0;i<maxline;i++){
 		int line[maxcolu];
 		for (a=0;a<maxcolu;a++){
 			printf("[%i][%i]", i, a);
 			scanf("%i", &matriz2[i][a]);
		}
	}
	for (i=0;i<maxline;i++){
		for (a=0;a<maxcolu;a++){
			matriz_soma[i][a] = matriz1[i][a] + matriz2[i][a];
			printf("[%i][%i] = %i \n", i, a, matriz_soma[i][a]);
		}
	}
}
