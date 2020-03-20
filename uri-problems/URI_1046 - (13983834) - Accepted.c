#include <stdio.h>
 
int main() {
 
  int i, f, m;
  scanf("%d %d",&i, &f);
  m = (24-i)+f;
  if(f>i){
    m = f-i;
    printf("O JOGO DUROU %d HORA(S)\n", m);
  } else {
    printf("O JOGO DUROU %d HORA(S)\n", m);
  }
    return 0;
}