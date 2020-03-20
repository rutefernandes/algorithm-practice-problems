#include <stdio.h>

int ehPrimo(int i){
  int j = 2;
  if(i==2){return 1;}
  if(i==1 ||i==0){return -1;}
  while(j <= i /2 ){
    if(i%j==0){return -1;}
    j++;
  }
  return 1;
}

int main() {
  long x ,y, h;
  while (scanf("%ld", &x) == 1){
    h=0;
    if(ehPrimo(x)==1){
      if(x<10){
        y=0;
      }
      y=x;
      while(y>0){
        x = y%10;
        if(ehPrimo(x)==-1){
          h = -1;
          break;
        }
        y = y/10; 
      }
      if(h==-1){
        printf("Primo\n"); 
      } else {
        printf("Super\n"); 
      }
    } else {
      printf("Nada\n");
    }
  }
  return 0;
}
