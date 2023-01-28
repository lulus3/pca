#include <stdio.h>
#define maxline 3
#define maxcolu 3
 
 int main(){
 	int matriz1[maxline][maxcolu];
 	int i, a, escalar;
    printf("de o numero escalar: ");
    scanf("%i", &escalar);
 	for (i=0;i<maxline;i++){
 		int line[maxcolu];
 		for (a=0;a<maxcolu;a++){
 			printf("[%i][%i]", i, a);
 			scanf("%i", &matriz1[i][a]);
 			matriz1[i][a] *= escalar;
		}
	}
	for (i=0;i<maxline;i++){
 		for (a=0;a<maxcolu;a++){
 		    printf("[%i][%i] = [%i] \n", i, a, matriz1[i][a]);
		}
	}
}
