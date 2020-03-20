#include<stdio.h>

int alarm(int h1, int m1, int h2, int m2){
    int a, b;
    a = (h1*60) + m1;
    b = (h2*60) + m2;
    if(a<b){
      return b - a;
    } else if(a>b){
      h1 = (1440 - a) + 1440;
      h2 = (1440 - b);
      return h1 - h2;
    }
  return 0;
}

int main(){
  int h1, m1, h2, m2;
  while((scanf("%d %d %d %d", &h1, &m1, &h2, &m2)) && ((h1!=0) || (m1!=0) || (h2!=0) || (m2!=0))){
    printf("%d\n", alarm(h1, m1, h2, m2));
  }
  return 0;
}