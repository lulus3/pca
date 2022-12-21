#include <stdio.h>

int main() {
    int soma, rep;
    rep = 100;
    soma = 0;
    while (rep < 200){
        if (rep%2!=0){
            soma += rep;
        }
        rep++;
    }
    
    printf("a soma eh %i", soma);
    return 0;
}
