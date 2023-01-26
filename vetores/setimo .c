#include <stdio.h>

int main() {
    int n, valor, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
    printf("de o numero de lancamentos: ");
    scanf("%i", &n);
    while (n>0){
        printf("de o numero da face: ");
        scanf("%i", &valor);
        if (valor == 1){
            n1++;
        }
        if (valor == 2){
            n2++;
        }
        if (valor == 3){
            n3++;
        }
        if (valor == 4){
            n4++;
        }
        if (valor == 5){
            n5++;
        }
        if (valor == 6){
            n6++;
        }
        n--;
    }
    printf("face 6 (%i), face 5 (%i), face 4 (%i), face 3 (%i), face 2 (%i), face 1 (%i)", n6, n5, n4, n3, n2, n1);
    return 0;
}
