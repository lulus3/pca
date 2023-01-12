#include <stdio.h>
int fat(int n){
    int produto;
    produto = n;
    n--;
    while(n>0){
        produto *= n;
        n--;
    }
    return produto;
}
int main() {
    int n;
    puts("de o numero");
    scanf("%i", &n);
    int resultado = fat(n);
    printf("%i", resultado);

    return 0;
}
