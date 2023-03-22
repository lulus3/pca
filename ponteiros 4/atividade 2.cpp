#include <stdio.h>
#include <stdlib.h>

//Construa um programa que aloque em tempo de execução (dinamicamente) uma matriz de ordem m x n (linha por coluna) 
//usando só aritmética de ponteiros. Usar o programa para definir a seguinte matriz
//1 2 3
//4 5 6
//a) Imprima os valores da matriz usando aritmética de ponteiros.
//b) Imprima os valores da matriz usando indexes.
//c) Liberar a área de memória alocada pela matriz.

int main(){
	int **matriz;
	int i, j;
	matriz = (int**) malloc (2 * sizeof(int*));
	for (int i=0;i<2;i++){
		*(matriz+i) = (int*) malloc (3 * sizeof(int));
	}
	for (i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("elemento[%i][%i]: ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
		}
	}
	for (i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("\nvalor em [%i][%i]: %i", i+1, j+1, matriz[i][j]);
		}
	} 
	free(matriz);
}
