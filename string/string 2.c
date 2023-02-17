#include <stdio.h>
#include <string.h>
#define tamanho 4
#define limite 120

void imprimir(char list[][limite]){
    int i;
    for (i=0;i<tamanho;i++){
        printf("%s\n", list[i]);
    }
    }
void eliminar(char list[][limite]){
    char nada[120] = "\0";
    char eliminado[limite];
    printf("digite o nome que quer eliminar: ");
    scanf("%s", eliminado);
    for (int i=0;i<tamanho;i++){
        if (strcmp(eliminado, list[i]) == 0){
            strcpy(list[i], nada);
        }
    }
}
void imprimir_alfabetica(char lista[][limite]){
    char list[tamanho][limite];
    for (int i=0;i<tamanho;i++){
        strcpy(list[i], lista[i]);
    }
    for (int i=0;i<tamanho;i++){
        for (int a=0;a<tamanho;a++){
            int diferenca = strcmp(list[a], list[a+1]);
            if (diferenca > 0){
                if (a == tamanho-1) continue;
                char nome1[120];
                char nome2[120];
                strcpy(nome1, list[a]);
                strcpy(nome2, list[a+1]);
                strcpy(list[a], nome2);
                strcpy(list[a+1], nome1);
            }
        }
    }
    for (int i=0;i<tamanho;i++){
        printf("%s\n", list[i]);
    }
}

int main() {
    char lista[tamanho][limite];
    int i;
    for (i=0;i<tamanho;i++){
        puts("digite o nome");
        scanf("%s", lista[i]);
    }
    imprimir(lista);
    puts(" ");
    eliminar(lista);
    imprimir(lista);
    puts(" ");
    imprimir_alfabetica(lista);

    return 0;
}