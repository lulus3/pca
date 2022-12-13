

#include <stdio.h>

int main()
{
    int base, altura, area;
    printf("digite a base: ");
    scanf("%i", &base);
    printf("digite a altura: ");
    scanf("%i", &altura);
    area = base*altura/2;
    printf("a area eh igual a %i", area);

    return 0;
}
