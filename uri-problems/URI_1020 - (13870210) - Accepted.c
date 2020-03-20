#include <stdio.h>
 
int main() {
 
  int a, b, x, c, i;
  scanf("%d", &x);
  a = x/365;
  i = (x%365);
  b = i/30;
  c = i%30;
  printf("%d ano(s)\n", a);
  printf("%d mes(es)\n",b);
  printf("%d dia(s)\n", c);

    return 0;
}