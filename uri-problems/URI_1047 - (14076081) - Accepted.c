#include <stdio.h>
 
int main() {
 int hi, mi, hf, mf;
  scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
  hi = hi*60+mi;
  hf = hf*60+mf;
  if(hi < hf){
    mi = (hf-hi)/60;
    mf = (hf-hi)%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mi, mf);
  } else {
    mi = (1440-(hi-hf))/60;
    mf = (1440-(hi-hf))%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mi, mf);
  }
    return 0;
}