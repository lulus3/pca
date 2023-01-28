#include <stdio.h>

int main() {
    int matriz[4][4] = {{4, 1, 2, 3}, {5, 2, 1, 400}, {2, 1, 3, 8}, {7, 1, 2, 5}};
    int n, i;
    printf("quantos pontos tem o intinerario: ");
    scanf("%i", &n);
    int intinerario[n];
    puts("de o intinerario:");
    for (i=0;i<n;i++){
        printf("ponto[%i]", i+1);
        scanf("%i", &intinerario[i]);
    }
    int somacusto = 0;
    for (i=0;i<n-1;i++){
        somacusto += matriz[intinerario[i]][intinerario[i+1]];
    }
    printf("%i", somacusto);
    return 0;
}
