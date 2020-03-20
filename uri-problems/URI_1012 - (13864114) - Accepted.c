#include <stdio.h>
 
int main() {
 
  double atr, ac, at, aq, ar, a, b ,c;
  scanf("%lf %lf %lf", &a, &b, &c);
  atr = (a * c) / 2;
  ac =  3.14159 * (c * c);
  at = ((a + b) * c)/2;
  aq = b * b;
  ar = a * b;
  printf("TRIANGULO: %.3lf\n", atr);
  printf("CIRCULO: %.3lf\n", ac);
  printf("TRAPEZIO: %.3lf\n", at);
  printf("QUADRADO: %.3lf\n", aq);
  printf("RETANGULO: %.3lf\n", ar);
 
    return 0;
}