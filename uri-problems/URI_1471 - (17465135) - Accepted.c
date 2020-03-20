#include<stdio.h>
void faz_ai(int total, int voltaram){
    int i=0, x, t=1,j, c;
    int res[total];
    if(total==voltaram){
      printf("*");
    }
    while(t<=total){
        res[t]=0;
        t++;
      }
      while(i<voltaram){
        scanf("%d", &c);
        j=0;
        while(j<=total){
          if(c==j){
            res[j]+=0;
          } else if(c!=j){
            res[j]+=1;
          }
          j++;
        }
        i++;
      }
      x=1;
      while(x<(total+1)){
        if(res[x]<voltaram){
        } else {
          printf("%d ", x);
        }
        x++;
      }
          printf("\n");
}
int main(){
  int total, voltaram, i=0, c;
  while(scanf("%d %d",&total, &voltaram)!=EOF){
      faz_ai(total, voltaram);
  }
  return 0;
}