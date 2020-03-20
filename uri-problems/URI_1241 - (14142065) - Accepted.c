#include<stdio.h>
#include<string.h>

void serase(){
  char a[10001], b[10001];
  scanf("%s %s", a, b);
  int i,j,x,ii,y,count;
  i = strlen(a);
  j = strlen(b);
    if(j>i){
      printf("nao encaixa\n");
    } else if(i>=j){
      x = i-j;
      y=count=0;
      for(ii=x;ii<i;++ii){
        if(a[ii]==b[y])
          count++;
          y++;
      }
        if(count==j){
          printf("encaixa\n");
        } else { 
          printf("nao encaixa\n");
        }
      }
}

int main(){
  int i;
  scanf("%d", &i);
  while(i!=0){
    serase();
    --i;
  }
  return 0;
}