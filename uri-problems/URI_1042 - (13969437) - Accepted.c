#include<stdio.h>

int main() {
  int ini[3], f[3], temp, i, j;
  scanf("%d %d %d", &ini[0], &ini[1], &ini[2]);
  f[0] = ini[0];
  f[1] = ini[1];
  f[2] = ini[2];
  for( i=0; i< 3; ++i){
    for(j =i+1; j<3; ++j){
      if(ini[i]>ini[j]){
        temp = ini[i];
        ini[i] =  ini[j];
        ini[j] = temp;
      }
    }
  }
  printf("%d\n", ini[0]);
  printf("%d\n", ini[1]);
  printf("%d\n", ini[2]);
  printf("\n");
  printf("%d\n", f[0]);
  printf("%d\n", f[1]);
  printf("%d\n", f[2]);
   return 0;
}

