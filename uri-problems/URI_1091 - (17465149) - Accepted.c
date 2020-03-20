#include<stdio.h>

void divisao_n(int n, int m, int x, int y){
  if(x==n || x==m || y==n || y==m){
    printf("divisa\n");
  } else if(x>n && y>m){
    printf("NE\n");
  } else if(x>n && y<m){
    printf("SE\n");
  } else if(x<n && y < m){
    printf("SO\n");
  } else if(x<n && y>m){
    printf("NO\n");
  }
}

int main(){
  int i=-1, n, m, x, y;
  while(scanf("%d",&i),i){
    scanf("%d %d",&n, &m);
    while(i>0){
      scanf("%d %d",&x, &y);
      divisao_n(n, m, x,y);
      i--;
    }
  } 
  return 0;
}

