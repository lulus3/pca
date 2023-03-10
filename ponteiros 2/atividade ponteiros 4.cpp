#include <stdio.h>

//Crie um programa que contenha um array de inteiros contendo 8 elementos. 
//Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
//a)Imprimir o endereço das posições contendo valores pares

int main(){
	int aray[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int *primeiro, *ultimo;
	primeiro = &aray[0];
	int tamanho = sizeof(aray)/sizeof(aray[0]);
	ultimo = &aray[tamanho - 1];
	for (;primeiro <= ultimo; primeiro++){
		if (*primeiro % 2 == 0){
			printf("valor: %i -- endereco: %i \n", *primeiro, primeiro);
		}else{
			printf("valor: %i \n", *primeiro);
		}

	}
}
