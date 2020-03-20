#include <stdio.h>
 
int main() {
  char nomeV [60] ;
  double s, v, t;
  scanf("%s %lf %lf", nomeV , &s, &v);
  t = s+(v*15/100);
  printf("TOTAL = R$ %.2lf\n", t);
    return 0;
}