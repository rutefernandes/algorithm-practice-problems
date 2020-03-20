#include <stdio.h>
 
int main() {
 
  double x,y;
  scanf("%lf %lf", &x, &y);
  x = (x * y)/12;
  printf("%.3lf\n", x);
 
    return 0;
}