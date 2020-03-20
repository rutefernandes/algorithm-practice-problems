#include <stdio.h>
#include <string.h>

int main() {
  int r,j,i,ii,pt=0, maior=0, v=0;
  scanf("%d %d", &j, &r);
  int out[j];
  memset(out, 0, sizeof out);
  for(i=0;i<r;++i){
    for(ii=0;ii<j;++ii){
      scanf("%d", &pt);
      out[ii]=out[ii] + pt;
    }
  }
  for(i=0; i<j;++i){
    if(out[i]>maior){
      maior = out[i];
      v = i + 1;
    } else if(out[i]==maior){
      maior = out[i];
      v = i + 1;
    }
  }
  printf("%d\n", v);
  return 0;
}