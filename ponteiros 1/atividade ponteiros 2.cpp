#include <stdio.h>

int* receber_end(int *first, int *last, int num){
	int counter = 0;
	for (;first<=last;first++){
		if (*first == num && counter == 0){
			counter++;
			return first;
		}
	}
	if (counter == 0){
	return NULL;
	}
	
}

int main(){
	int lista[10] = {1, 2, 3, 4, 2, 3, 6, 2, 3, 10};
	int *first;
	first = &lista[0];
	int tamanho = sizeof(lista)/sizeof(lista[0]);
	int *last;
	last = &lista[tamanho - 1];
	int *pont;
	pont = receber_end(first, last, 2);
	while(pont != NULL){
		printf("o endereco = %i \n", pont);
		first = pont+1;
		pont = receber_end(first, last, 2);
	}
	return 0;
}
