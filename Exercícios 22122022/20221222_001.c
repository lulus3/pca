#include <stdio.h>
#include <math.h>

int main() {
    float xant, num, xnovo, xi;
    puts("de o numero: ");
    scanf("%f", &num);
    xi = num/2;
    xant = 1;
    xnovo = 2;
    while (fabs(xnovo-xant)>=0.1){
        xant = xi;
        xnovo = xant-(((xant*xant)-num)/(2*xant));
        xi = xnovo;
    }
    printf("%.2f", xnovo);

    return 0;
}
