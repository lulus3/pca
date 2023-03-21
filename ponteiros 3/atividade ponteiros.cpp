#include <stdio.h>
#include <math.h>

//Fa�a um programa que calcula a m�dia e o desvio padr�o das notas de uma turma;

//O programa deve solicitar no in�cio a quantidade de alunos na turma e alocar dinamicamente um vetor de float 
//onde as notas dos alunos digitadas devem ser armazenadas;

//Voc� deve criar uma fun��o �mediaDesvio� para calcular a m�dia e o desvio padr�o e retornar estes valores 
//atrav�s de par�metros passados por refer�ncia (ponteiros). A fun��o recebe como par�metro o ponteiro para o vetor, 
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
