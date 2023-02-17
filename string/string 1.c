#include <stdio.h>
#include <string.h>

int main() {
    char sim[10];
    printf("vamos começar? (digite sim): ");
    fgets(sim, 10, stdin);
    int equipes = 2;
    int integrantes = 2;
    int string = 120;
    char matriz[equipes][integrantes][string];
    int i, a;
    for (i=0;i<equipes;i++){
        for (a=0;a<integrantes;a++){
            char aluno[120];
            printf("de o nome do %iº aluno na equipe %i: ", a+1, i+1);
            fgets(matriz[i][a], 120, stdin);
            printf("%s\n", matriz[i][a]);
        }
    }
    char sn[10];
    do {
        printf("deseja pesquisar um nome? digite sim ou nao: ");
        fgets(sn, 10, stdin);
        if (strcmp(sn, sim) == 0){
            char pesquisa[120];
            puts("digite o nome:\n");
            fgets(pesquisa, 120, stdin);
            for (i=0;i<equipes;i++){
                for (a=0;a<integrantes;a++){
                    if (strcmp(pesquisa, matriz[i][a]) == 0){
                        printf("o aluno esta na equipe %i \n", i+1);
                    }
                }
            }
        }
    } while (strcmp(sn, sim) == 0);
}
