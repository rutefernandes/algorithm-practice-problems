#include <stdio.h>
 
int main() {
  double n[101];
  int i;
  scanf("%lf", &n[0]);
  printf("N[0] = %.4lf\n", n[0]);
  for(i=1;i<100; ++i){
    n[i] = n[i-1]/2;
    printf("N[%d] = %.4lf\n", i, n[i]);
  }
  return 0;
}