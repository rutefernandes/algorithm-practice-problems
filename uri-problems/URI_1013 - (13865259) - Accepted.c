#include <stdio.h>
 
int main() {
 
  int a, b ,c, hold;
  scanf("%d %d %d", &a, &b, &c);
  hold = c;
  if(a > b && a > c){
    hold = a;
  } else if (b > a && b > c){
    hold = b;
  } 
   printf("%d eh o maior\n", hold);
    return 0;
}