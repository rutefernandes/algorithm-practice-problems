#include<stdio.h>
#include<string.h>
int main(){
  char *d[101], *s[101];
  while(scanf("%s %s", d,s) != EOF){
    if(strstr(d, s)){
      printf("Resistente\n");
    } else {
      printf("Nao resistente\n");
    }
  }
  return 0;
}