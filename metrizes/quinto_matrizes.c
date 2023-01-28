#include <stdio.h>

int main() {
    int n;
    printf("de o n: ");
    scanf("%i", &n);
    int i, a, valor;
    int matriz[n][n];
    int linha[n], coluna[n];
    int principal = 0, secundaria = 0;
    for (i=0;i<n;i++){
        for(a=0;a<n;a++){
            printf("[%i][%i]", i+1, a+1);
            scanf("%i", &valor);
            matriz[i][a] = valor;
            if (i==a){
                principal += valor;
            }
            if (i+a == n-1){
                secundaria += valor;
            }
        }
    }
    
    for (i=0;i<n;i++){
        int somalinha = 0, c = 0, somacoluna = 0, l = 0;
        while (c<n && l<n){
            somalinha += matriz[i][c];
            c++;
            somacoluna += matriz[l][i];
            l++;
        }
        linha[i] = somalinha;
        coluna[i] = somacoluna;
    }
    int sim = 1;
    for (i=0;i<n;i++){
        if (principal != secundaria || principal != linha[i] || principal != coluna[i]){
            sim = 0;
        }
    }
    if (sim){
        puts("eh um quadrado magico");
    }else{
        puts("nao eh");
    }

    return 0;
}
