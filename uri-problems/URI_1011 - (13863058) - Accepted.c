#include <stdio.h>
 
int main() {
 
  double r, pi = 3.14159, v;
  scanf("%lf", &r);
  v = pow(r, 3);
  v = (4/3.0) * pi * v;
  printf("VOLUME = %.3lf\n", v);
 
    return 0;
}