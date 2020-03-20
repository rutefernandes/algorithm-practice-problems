#include <stdio.h>
 
int main() {
 
  int a, b, x, c, i;
  scanf("%d", &x);
  a = x/3600;
  i = (x%3600);
  b = i/60;
  c = i-(b*60);
  printf("%d:%d:%d\n", a, b, c);
 
    return 0;
}