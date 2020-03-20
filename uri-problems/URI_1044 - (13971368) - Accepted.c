#include <stdio.h>
 
int main() {
 
  int a,b, m, me;
  scanf("%d %d", &a,&b);
  m = a;
  me = b;
  if(b>a){
    m = b;
    me = a;
  }
  if(m%me==0){
    printf("Sao Multiplos\n");
  } else {
    printf("Nao sao Multiplos\n");
  }
 
    return 0;
}