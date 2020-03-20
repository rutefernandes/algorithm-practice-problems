#include <stdio.h>
#include <string.h>
int main() {
    int i, a, b,c, d, l;
    char pass[50];
    while(scanf(" %[^\n]s",pass)!=EOF){
      l = strlen(pass);
      if(l>32 || l<6){
        printf("Senha invalida.\n");
      } else {
        b = a = c = d=0;
        for(i=0;i<l;++i){
          if(pass[i]>='a' && pass[i]<='z'){
            a +=-1;
          } else if(pass[i]>='A' && pass[i]<='Z'){
            b +=-1;
          } else if(pass[i]>='0' && pass[i]<='9'){
            c +=-1;
          } else {
            d +=-1;
          }
        }
          if(a<0 && b<0 && c<0 && d==0){
            printf("Senha valida.\n");
          } else {
            printf("Senha invalida.\n");
          }  
    }
  }
  return 0;
}