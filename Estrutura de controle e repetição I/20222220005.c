#include <stdio.h>

int main() {
    int rep, varmaior, varmenor, var, lu;
    printf("de o numero: ");
    scanf("%i", &var);
    while (var<0){
        puts("numero invalido \n");
        printf("de outro numero: ");
        scanf("%i", &var);
    }
    varmenor = var;
    varmaior = var;
    rep = 2;
    while (rep>0){
        printf("de outro numero: ");
        scanf("%i", &var);
        if (var<0){
            puts("numero invalido");
            continue;
        } else {
            if (var>varmaior){
            varmaior = var;
            }
            if (var<varmenor){
            varmenor = var;
            }
            rep--;
        }
    }
    printf("o menor numero eh %i \n", varmenor);
    printf("o maior numero eh %i", varmaior);
    return 0;
}
