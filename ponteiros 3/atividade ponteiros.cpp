#include <stdio.h>
#include <math.h>

//Faça um programa que calcula a média e o desvio padrão das notas de uma turma;

//O programa deve solicitar no início a quantidade de alunos na turma e alocar dinamicamente um vetor de float 
//onde as notas dos alunos digitadas devem ser armazenadas;

//Você deve criar uma função “mediaDesvio” para calcular a média e o desvio padrão e retornar estes valores 
//através de parâmetros passados por referência (ponteiros). A função recebe como parâmetro o ponteiro para o vetor, 
//a quantidade de elementos no vetor, e dois ponteiros: media e desvio onde deve guardar os resultados;

float mediadesvio(float *primeiro, float *ultimo, float *media, float *desvio){
	int quant = 0;
	float soma=0;
	for(;primeiro<=ultimo;primeiro++){
		soma += *primeiro;
		quant++;
	}
	*media = soma/quant;
	primeiro -= quant;
	soma = 0;
	for (;primeiro<=ultimo;primeiro++){
		soma += (*primeiro - *media) * (*primeiro - *media);
	}
	*desvio = sqrt(soma/quant);
	printf("a media eh %.2f, e o desvio eh %.2f", *media, *desvio);
}

int main(){
	int alunos;
	puts("qual a quantidade de alunos na turma");
	scanf("%i", &alunos);
	float notas[alunos];
	for(int a=0;a<alunos;a++){
		printf("nota[%i]: ", a);
		scanf("%f", &notas[a]);
	}
	float media = 0;
	float desvio = 0;
	mediadesvio(&notas[0], &notas[alunos-1], &media, &desvio);
	return 0;
}
