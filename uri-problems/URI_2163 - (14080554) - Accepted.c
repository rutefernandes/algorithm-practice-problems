#include <stdio.h>
 
int main() {
 
  int i, j, m, n, x=0, y=0;
  int matriz[1001][1001];
  scanf("%d %d", &m, &n);
  for(i=0;i<m;++i){
    for(j=0;j<n;++j){
      scanf ("%d", &matriz[i][j]);
    }
  }
  for(i=0;i<m;++i){
    for(j=0;j<n;++j){
      if(matriz[i][j]==42 && matriz[i][j-1]==7 && matriz[i][j+1]==7 && matriz[i-1][j]==7 && matriz[i+1][j]==7 && matriz[i-1][j+1]==7 && matriz[i-1][j-1]==7 && matriz[i+1][j+1]==7 && matriz[i+1][j-1]==7){
        x = i+1;
        y= j+1;
          break;
      }
    }
  }
  printf("%d %d\n", x, y);
 
    return 0;
}