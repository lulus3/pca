#include <stdio.h>

int main() {
    int n;
    printf("de o numero de elementos: ");
    scanf("%i", &n);
    int va[n];
    int vb[n];
    int i;
    int soma = 0;
    for (i=0;i<n;i++){
        printf("de o valor no vertor a: ");
        scanf("%i", &va[i]);
        printf("de o valor no vertor b: ");
        scanf("%i", &vb[i]);
        soma+= va[i]*vb[i];
    }
    printf("%i", soma);

    return 0;
}
