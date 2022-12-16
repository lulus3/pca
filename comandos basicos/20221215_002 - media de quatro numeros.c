#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;
    printf("digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("digite a sua segunda nota: ");
    scanf("%f", &nota2);
    printf("digite a sua terceira nota: ");
    scanf("%f", &nota3);
    printf("digite a sua quarta nota: ");
    scanf("%f", &nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    printf("a media das notas eh %.2f", media);
}