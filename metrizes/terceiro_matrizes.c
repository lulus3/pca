#include <stdio.h>
#define maxline 2
#define maxcolu 2
 
 int main(){
 	int line = -1, colu = -1;
 	int matriz1[maxline][maxcolu];
 	int i, a, escalar[1];
 	for (i=0;i<maxline;i++){
 		for (a=0;a<maxcolu;a++){
 			printf("[%i][%i]", i, a);
 			scanf("%i", &matriz1[i][a]);
		}
	}
	printf("de o numero que quer achar: ");
    scanf("%i", &escalar[0]);
	for (i=0;i<maxline;i++){
 		for (a=0;a<maxcolu;a++){
 		    if (matriz1[i][a] == escalar[0]){
 		    	line = i + 1;
 		    	colu = a + 1;
			 }
		}
	}
	if (line > 0){
		printf("valor encontrado no [%i][%i]", line, colu);
	}else{
		puts("valor nao encontrado");
	}
}
