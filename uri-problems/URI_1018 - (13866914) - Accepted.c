#include <stdio.h>
 
int main() {
  int x=0, i, x2=0;
  scanf("%d", &x);
  x2= x;
  int notas[7] = {100, 50, 20, 10, 5, 2, 1};
  int qtd[7] = {0, 0, 0, 0, 0, 0, 0};
  for(i = 0; i< 7; ++i){
    while(x/notas[i]){
      qtd[i]+=1;
      x = x-notas[i];
    }
  }
  printf("%d\n", x2);
  printf("%d nota(s) de R$ 100,00\n", qtd[0]);
  printf("%d nota(s) de R$ 50,00\n", qtd[1]);
  printf("%d nota(s) de R$ 20,00\n", qtd[2]);
  printf("%d nota(s) de R$ 10,00\n", qtd[3]);
  printf("%d nota(s) de R$ 5,00\n", qtd[4]);
  printf("%d nota(s) de R$ 2,00\n", qtd[5]);
  printf("%d nota(s) de R$ 1,00\n", qtd[6]);
    return 0;
}