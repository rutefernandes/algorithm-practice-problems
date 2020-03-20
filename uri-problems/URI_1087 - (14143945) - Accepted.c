#include<stdio.h>
#include<math.h>

int dama(int x1, int x2, int y1, int y2){
   int cont = 2, ds;
   ds = abs((x1-x2)) - abs((y1-y2));
   if((x1 == x2) && (y1 == y2)){
      cont = 0;
    }else if((x1 == x2) || (y1 == y2) || ((x1-x2) == (y1-y2)) || ds == 0){
      cont = 1;       
    } 
    return cont;
}

int main(){
  int x1, y1, x2, y2;
  while(scanf( "%d %d %d %d", &x1, &y1, &x2, &y2) && (x1!=0 && x2!=0 && y1!=0 && y2!=0)){
    printf("%d\n", dama(x1, x2, y1, y2));
  }
  return 0;
}
