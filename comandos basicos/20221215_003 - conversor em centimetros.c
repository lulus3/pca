#include <stdio.h>
int main() {
   float metro, centimetros;
   printf("digite a quantidade de metros: ");
   scanf("%f", &metro);
   centimetros = metro * 100;
   printf("%.2f metros sao %.2f centimtros", metro, centimetros);
}