#include <stdio.h>

int main() {
  char op[1];
  scanf("%c", op);
  float m[12][12], sum, qtd;
  int i, j, c=0;
  for(i = 0; i < 12; ++i){
    for(j=0; j <12 ; ++j ){
      scanf("%f", &m[i][j]);
    }
  }  
  for(i = 0; i < 11; ++i){
    c+=1;
    for(j=c; j <12 ; ++j ){
      sum = sum + m[i][j];
      qtd++;
    }
  }  
  if(*op=='M'){
    sum = sum/qtd;
  }
  printf("%.1f\n", sum);
  return 0;
}