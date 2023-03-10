 #include <stdio.h>
 
 //Escreva um programa que declare um inteiro, um real e um char,
 //e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). 
 //Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
 
 int main(){
 	int inteiro = 10;
 	float real = 2.5;
 	char letra = 'a';
 	int *pont1;
 	float *pont2;
 	char *pont3;
 	pont1 = &inteiro;
 	pont2 = &real;
 	pont3 = &letra;
 	printf("inteiro: %i \nreal: %.1f \nletra: %c", *pont1, *pont2, *pont3);
 	*pont1 += 2;
 	*pont2 += 2.5;
 	*pont3 = 'b';
 	printf("\no inteiro somado 2: %i \no real somado 2.5: %.1f \na letra trocada por 'b': %c", *pont1, *pont2, *pont3);
 }
