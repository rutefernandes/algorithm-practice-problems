#include <stdio.h>

long teste(){
    long n;
    int i=0, j,count =0;
    scanf("%ld", &n);
    long lista[n];
    while(i<n){
      scanf("%ld", &lista[i]);
      i++;
    }
    for (i=0; i<n; i++) { 
      for (j=0; j<i; j++){ 
        if (lista[i] == lista[j]){
          break; 
        } 
      }
      if (i == j){
        count++;
      }
    }
    return count;
}

int main(){
  long cdt;
  scanf("%ld",&cdt);
  while(cdt != 0){
    printf("%ld\n", teste());
    cdt--;
  }
  return 0;
}