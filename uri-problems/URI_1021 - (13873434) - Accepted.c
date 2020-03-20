#include <stdio.h>
 
int main() {
 
  int y, w, i, j,notas[7] = {100,50,20,10,5,2,1}, moedas[5] = {50,25,10,5,1}, resultado[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
  double x, v;
  scanf("%lf", &x);
  x = x + 0.001;
  y = x;
  v =  (x - (int) x);
  w = v * 100;
  for(i = 0; i< 7; ++i){
    while(y/notas[i]){
      resultado[i]+=1;
      y=y-notas[i];
    }
  }
  for(i = 0; i < 5; ++i){
    while(w/moedas[i]){
      resultado[i+7]+=1;
      w=w-moedas[i];
    }
  }
  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", resultado[0]);
  printf("%d nota(s) de R$ 50.00\n", resultado[1]);
  printf("%d nota(s) de R$ 20.00\n", resultado[2]);
  printf("%d nota(s) de R$ 10.00\n", resultado[3]);
  printf("%d nota(s) de R$ 5.00\n", resultado[4]);
  printf("%d nota(s) de R$ 2.00\n", resultado[5]);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", resultado[6]);
  printf("%d moeda(s) de R$ 0.50\n", resultado[7]);
  printf("%d moeda(s) de R$ 0.25\n", resultado[8]);
  printf("%d moeda(s) de R$ 0.10\n", resultado[9]);
  printf("%d moeda(s) de R$ 0.05\n", resultado[10]);
  printf("%d moeda(s) de R$ 0.01\n", resultado[11]);
 
    return 0;
}