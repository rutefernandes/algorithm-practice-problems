#include <stdio.h>
 
int main() {
 
  int x;
  double y, r; 
  scanf("%d %lf", &x, &y);
  r = x/y;
  printf("%.3lf km/l\n", r);
 
    return 0;
}