#include <stdio.h>

//Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a soma em um terceiro array. 
//Caso o tamanho do primeiro e segundo array seja diferente então a função retornará ZERO (0). 
//Caso a função seja concluída com sucesso a mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.

int soma(int aray1[], int aray2[]){
	int tamanho1 = sizeof(aray1)/sizeof(aray1[0]);
	int tamanho2 = sizeof(aray2)/sizeof(aray2[0]);
	if (tamanho1 == tamanho2){
		int aray3[tamanho1];
		int *primeiro1, *primeiro2, *primeiro3, *ultimo1;
		primeiro1 = &aray1[0], primeiro2 = &aray2[0], primeiro3 = &aray3[0];
		ultimo1 = &aray1[tamanho1];
		for (;primeiro1 <= ultimo1;primeiro1++, primeiro2++, primeiro3++){
			*primeiro3 = *primeiro1 + *primeiro2;
			printf("%i ", *primeiro3);
		}
		return 1;
	}else{
		puts("os vetores nao tem o mesmo tamanho");
		return 0;
	}
	
}

int main(){
	int aray1[3] = {1, 2, 3};
	int aray2[3] = {1, 2, 3};
	int zero = soma(aray1, aray2);
}
