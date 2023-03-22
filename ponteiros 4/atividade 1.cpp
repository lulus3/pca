#include <stdio.h>
#include <stdlib.h>

//Crie uma função que aloca e lê um vetor de n inteiros. Crie outra função que recebe o vetor e retorna o maior e o menor valor. 
//O programa principal deve executar as duas funções, imprimir os valores retornados pela 2ª função e liberar a memória alocada pela 1ª função.

int* alocacao(){
	int qtd;
	do{
		puts("de o numero de elementos");
		scanf("%i", &qtd);
	}while(qtd <= 0);
	int cont=1;
	int *vetor;
	vetor = (int*) malloc(qtd+1 * sizeof(int));
	vetor[0] = qtd;
	while(cont <= qtd){
		printf("elemento[%i]: ", cont);
		scanf("%i", &vetor[cont]);
		cont++;
	}
	return vetor;
	free(vetor);
}

int maiormenor(int *vetor){
	int cont=1;
	int tamanho = vetor[0];
	int maior = vetor[1];
	int menor = vetor[1];
	while(cont<=tamanho){
		if (vetor[cont] > maior){
			maior = vetor[cont];
		}
		if(vetor[cont] < menor){
			menor = vetor[cont];
		}
		cont++;
	}
	printf("o maior elemento eh %i, e o menor eh %i", maior, menor);
}

int main(){
	int *vetor;
	vetor = alocacao();
	maiormenor(vetor);
}






