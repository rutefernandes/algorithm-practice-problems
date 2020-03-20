#include <stdio.h>
#include <string.h> 

int main() {
  int cdt, n, i, length, hold;
  char x[55];
  scanf("%d", &cdt);
  while(cdt != 0){
    scanf("%s", x);
    length = strlen(x);
    scanf("%d", &n);
    for(i=0; i<(length);++i){
      if(x[i]>=65 && x[i]<=90){
        x[i]= x[i]-n;    
        if(x[i]<65){
          hold = (65 - x[i]) - 1;
          x[i]= 90 - hold;
        } else if(x[i]>90){
          hold = (x[i] - 90) + 1;
          x[i]= 65 + hold;
        }
        printf("%c", x[i]);
      }
    }
    printf("\n");
    cdt--;
  }
    return 0;
}