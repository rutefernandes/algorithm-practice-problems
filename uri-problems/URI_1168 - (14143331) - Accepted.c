#include <stdio.h>
#include <string.h>

int main(){
  int length, qtd, i;
  scanf("%d", &qtd);
  while(qtd != 0){
    char n[105];
    int leds =0;
    scanf("%s",n);
    length = strlen(n);
    for(i=0; i<length;++i){
      if(n[i]=='1'){
        leds+=2;
      } else if(n[i]=='2'){
        leds+=5;
      } else if(n[i]=='3'){
        leds+=5;
      } else if(n[i]=='4'){
        leds+=4;
      } else if(n[i]=='5'){
        leds+=5;
      } else if(n[i]=='6'){
        leds+=6;
      } else if(n[i]=='7'){
        leds+=3;
      } else if(n[i]=='8'){
        leds+=7;
      } else if(n[i]=='9'){
        leds+=6;
      } else if(n[i]=='0'){
        leds+=6;
      }
    }
    printf("%d leds\n", leds);
    qtd--;
  }
  return 0;
}