#include <stdio.h>
 
int main() {
 
  int c1, n1, c2, n2;
  double t, v1, v2;
  scanf("%d %d %lf", &c1 , &n1, &v1);
  scanf("%d %d %lf", &c2 , &n2, &v2);
  t = (n1 * v1) + (n2 * v2);
  printf("VALOR A PAGAR: R$ %.2lf\n", t);
 
    return 0;
}