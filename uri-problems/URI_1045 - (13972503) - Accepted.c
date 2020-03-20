#include <stdio.h>
 
int main() {
double valores[3], aq, bc, a,b,c;
  int i, j, temp;
  scanf("%lf %lf %lf", &valores[0],&valores[1], &valores[2]);
  for(i = 0; i< 3; ++i){
    for(j = i; j< 3; ++j ){
      if(valores[i]<valores[j]){
        temp = valores[i];
        valores[i] = valores[j];
        valores[j] = temp;
      }
    }
  }
  a = valores[0];
  b = valores[1];
  c = valores[2];
  aq = valores[0] * valores[0];
  bc = valores[1] * valores[1] + valores[2] * valores[2];
  if(valores[0]>=valores[1]+valores[2]){
    printf("NAO FORMA TRIANGULO\n");
  } else {
    if(aq == bc){
    printf("TRIANGULO RETANGULO\n");
    } 
    if(aq > bc){
      printf("TRIANGULO OBTUSANGULO\n");
    } 
    if(aq < bc){
      printf("TRIANGULO ACUTANGULO\n");
    } 
    if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)){
      printf("TRIANGULO ISOSCELES\n");
    } 
    if(a==b && a==c){
      printf("TRIANGULO EQUILATERO\n");
    } 
  }
 
    return 0;
}