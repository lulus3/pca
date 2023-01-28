#include <stdio.h>

int main() {
    int matriz[5][5] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}, {4, 4, 4, 4, 4}, {5, 5, 5, 5, 5}};
    int principal[5], p = 0;
    int secundaria[5], s = 0;
    int i, a;
    int linha = 0, coluna = 0;
    for (i=0;i<5;i++){
        for(a=0;a<5;a++){
            if (i==a){
                principal[p] = matriz[i][a];
                p++;
            }
            if (i+a == 4){
                secundaria[s] = matriz[i][a];
                s++;
            }
            if (i==3){
                linha += matriz[i][a];
            }
            if (a==1){
                coluna += matriz[i][a];
            }
        }
    }
    for (i=0;i<5;i++){
        printf("%i  ", principal[i]);
    }
    puts("\n");
    for (i=0;i<5;i++){
        printf("%i  ", secundaria[i]);
    }
    puts("\n");
    printf("a soma da linha 4 eh %i \n", linha);
    printf("a soma da coluna 2 eh %i \n", coluna);

    return 0;
}
