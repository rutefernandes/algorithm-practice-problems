#include <stdio.h>
#include <string.h>

void cript(char str[], int tamanho){
  int i, j, hold, metade = tamanho/2, x,y;
  // primeira passada
  for(i = 0; i< tamanho; ++i){
    if((str[i]>= 65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
      str[i]+=3;
    }
  }
  // segunda passada
  for(i = 0, j = tamanho-1; i < metade; ++i, --j){
    hold = str[i];
    str[i] = str[j];
    str[j] = hold;
  }
  
  // terceira passada
  for(i = metade; i < tamanho; ++i){
    str[i]-=1;
  }
  printf("%s\n",str);
}

int main(void) {
  int qtd, tamanho=10001, qtdC;
  char str[tamanho];
  scanf("%d", &qtd);
  while(qtd!=0){
    scanf(" %[^\n]s", str);
    qtdC= strlen(str);
    cript(str, qtdC);
    qtd--;
  }
  return 0;
}
