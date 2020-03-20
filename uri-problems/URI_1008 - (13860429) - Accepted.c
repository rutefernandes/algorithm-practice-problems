#include <stdio.h>
 
int main() {
 
  int n, h;
  double v, t;
  scanf("%d %d %lf", &n , &h, &v);
  t = h*v;
  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, t);
 
    return 0;
}