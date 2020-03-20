#include <stdio.h>
#include <string.h>

int main() {
  char m[11],i, str;
  scanf("%s", m);
  for(i = strlen(m)-1; i >= 0; i--){
    printf("%c", m[i]);
  }  
  printf("\n");
    return 0;
}