#include <stdio.h>

//Fa�a um programa que leia tr�s valores inteiros e chame uma fun��o que receba estes 3 valores de entrada e retorne eles ordenados,
//ou seja, o menor valor na primeira vari�vel, o segundo menor valor na vari�vel do meio, e o maior valor na �ltima vari�vel. 
//A fun��o deve retornar o valor 1 se os tr�s valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.

int ordenar(int *pont1, int *pont2, int *pont3){
	int a = *pont1;
	int b = *pont2;
	int c = *pont3;
	int var1, var2;
	int count = 0;
	if (a>b){
		var1 = a;
		var2 = b;
		a = var2;
		b = var1;
		count++;
	}
	if (b>c){
		var1 = b;
		var2 = c;
		b = var2;
		c = var1;
		count++;
	}
	if (a>b){
		var1 = a;
		var2 = b;
		a = var2;
		b = var1;
		count++;
	}
	*pont1 = a;
	*pont2 = b;
	*pont3 = c;
	printf("%i ", *pont1);
	printf("%i ", *pont2);
	printf("%i", *pont3);
	if (count == 0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int valor1, valor2, valor3;
	printf("digite o primeiro valor: ");
	scanf("%i", &valor1);
	printf("digite o segundo valor: ");
	scanf("%i", &valor2);
	printf("digite o terceiro valor: ");
	scanf("%i", &valor3);
	int *pont1, *pont2, *pont3;
	pont1 = &valor1;
	pont2 = &valor2;
	pont3 = &valor3;
	int num = ordenar(pont1, pont2, pont3);
	printf("\n%i", num);
}
