#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Fa�a um programa que calcula a m�dia e o desvio padr�o das notas de uma turma;

//O programa deve solicitar no in�cio a quantidade de alunos na turma e alocar dinamicamente um vetor de float 
//onde as notas dos alunos digitadas devem ser armazenadas;

//Voc� deve criar uma fun��o �mediaDesvio� para calcular a m�dia e o desvio padr�o e retornar estes valores 
//atrav�s de par�metros passados por refer�ncia (ponteiros). A fun��o recebe como par�metro o ponteiro para o vetor, 
//a quantidade de elementos no vetor, e dois ponteiros: media e desvio onde deve guardar os resultados;

float mediadesvio(float *ponteiro, int tamanho, float *media, float *desvio){
	int quant = 0;
	float soma=0;
	while (quant < tamanho){
		soma += ponteiro[quant];
		quant++;
	}
	*media = soma/quant;
	soma = 0;
	quant = 0;
	while(quant < tamanho){
		soma += (ponteiro[quant] - *media) * (ponteiro[quant] - *media);
		quant++;
	}
	*desvio = sqrt(soma/quant);
	printf("a media eh %.2f, e o desvio eh %.2f", *media, *desvio);
}

int main(){
	float* notas;
	int qtdalunos, cont=0;
	do {
		puts("qual a quantidade de alunos");
		scanf("%i", &qtdalunos);
	}while (qtdalunos <= 0);
	notas = (float*) malloc(qtdalunos * sizeof(float));
	while(cont < qtdalunos){
		printf("nota[%i]: ", cont);
		scanf("%f", &notas[cont]);
		cont++;
	}
	float media = 0;
	float desvio = 0;
	mediadesvio(notas, qtdalunos, &media, &desvio);
	return 0;
}






