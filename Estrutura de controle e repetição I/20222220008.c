#include <stdio.h>

int main() {
    float nota1, nota2, nota3, maior1, maior2, maior3, media;
    float menor1, menor2, menor3, maiormedia, menormedia;
    int boleana3;
    char ask;
    puts("de as notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1+nota2+nota3)/3;
    maior1 = nota1;
    menor1 = nota1;
    maior2 = nota2;
    menor2 = nota2;
    maior3 = nota3;
    menor3 = nota3;
    maiormedia = media;
    menormedia = media;
    puts("deseja colocar outro aluno? sim(s) nao(n): ");
    scanf(" %c", &ask);
    while (ask=='s'||ask=='S'){
        puts("de as notas: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        media = (nota1+nota2+nota3)/3;
        if (nota1>maior1){
            maior1 = nota1;
        }
        if(nota1<menor1){
            menor1 = nota1;
        }
        if (nota2>maior2){
            maior2 = nota2;
        }
        if (nota2<menor2){
            menor2 = nota2;
        }
        if (nota3>maior3){
            maior3 = nota3;
        }
        if (nota3<menor3){
            menor3 = nota3;
        }
        if (media>maiormedia){
            maiormedia = media;
        }
        if (media<menormedia){
            menormedia = media;
        }
        puts("deseja colocar outro aluno? sim(s) nao(n): ");
        scanf(" %c", &ask);
    }
    printf("primeiro exercicio: \n");
    printf("maior nota - %.1f \n", maior1);
    printf("menor nota - %.1f \n", menor1);
    puts("  ");
    printf("segundo exercicio: \n");
    printf("maior nota - %.1f \n", maior2);
    printf("menor nota - %.1f \n", menor2);
    puts("  ");
    printf("terceiro exercicio: \n");
    printf("maior nota - %.1f \n", maior3);
    printf("menor nota - %.1f \n", menor3);
    puts(" ");
    printf("media: \n");
    printf("maior media - %.1f \n", maiormedia);
    printf("menor media - %.1f \n", menormedia);
    

    return 0;
}
