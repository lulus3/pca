#include <stdio.h>

void imprimir(float *first, float *last){
	for(;first <= last;first++){
		printf("%.2f \n", *first);
	}
}

int main(){
	float lista[3] = {1.2, 2.3, 4.7};
	float *first , *last;
	first = &lista[0];
	int tamanho = sizeof(lista)/sizeof(lista[0]);
	last = &lista[tamanho - 1];
	imprimir(first, last);
}
