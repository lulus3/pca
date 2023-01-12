#include <stdio.h>
int fib(int n){
    int f1 = 1;
    int f2 = 1;
    int var;
    while (n>2){
        var = f1 + f2;
        f1 = f2;
        f2 = var;
        n--;
    }
    return var;
}
int main() {
    int n, valor;
    puts("de o numero N");
    scanf("%i", &n);
    valor = fib(n);
    printf("%i", valor);

    return 0;
}
