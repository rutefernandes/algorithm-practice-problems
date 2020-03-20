#include <stdio.h>

int main() {
  char op[1];
  double m[12][12], sum;
  int col,i,j;
  scanf("%d %c", &col, op);
  for(i = 0; i < 12; ++i){
    for(j=0; j <12 ; ++j ){
      scanf("%lf", &m[i][j]);
    }
  }  
  for(i = 0; i < 12; ++i){
      sum = sum + m[i][col];
  }  
  if (*op=='M'){
    printf("%.1lf\n", sum/12);
  } else {
    printf("%.1lf\n", sum);
  }
  return 0;
}