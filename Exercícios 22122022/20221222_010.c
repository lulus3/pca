#include <stdio.h>

int main() {
    int total, n, variavel, rep, meio;
    printf("de o numero: ");
    scanf("%i", &n);
    total = n*n*n;
    meio = total/n;
    if (meio%2==0){
        variavel = meio-1;
        variavel -= n-2;
        for (rep=n;rep>=1;rep--){
            printf("%i ", variavel);
            variavel+=2;
        }
        
    } else{
        variavel = meio; 
        variavel -= n-1;
        for (rep=n;rep>=1;rep--){
            printf("%i ", variavel);
            variavel+=2;
        }
    }

    return 0;
}
