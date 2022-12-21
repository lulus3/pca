#include <stdio.h>

int main() {
    int rep, varmaior, varmenor, var;
    printf("de o numero: ");
    scanf("%i", &var);
    varmenor = var;
    varmaior = var;
    rep = 19;
    while (rep>0){
       printf("de o numero: ");
       scanf("%i", &var);
       if (var>varmaior){
           varmaior = var;
       }
       if (var<varmenor){
           varmenor = var;
       }
       rep--;
    }
    printf("o menor numero eh %i \n", varmenor);
    printf("o maior numero eh %i", varmaior);
    return 0;
}
