#include <stdio.h>

int main() {
    char nome[50];
    int idade, sexo;
    printf("digite o nome: ");
    scanf("%s", &nome);
    printf("digite a idade: ");
    scanf("%i", &idade);
    printf("digite o sexo, 1 para mulher e 2 para homen: ");
    scanf("%i", &sexo);
    if (sexo == 1){
        printf("a %s eh uma mulher", nome);
        gets(nome);
        printf(" de %i anos", idade);
    }
    if (sexo == 2){
        printf("o %s eh um homen", nome);
        gets(nome);
        printf(" de %i anos", idade);
    }
    return 0;
}
