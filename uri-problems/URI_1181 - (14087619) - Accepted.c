#include <stdio.h>

int main() {
  int i,j, l;
  double m[12][12], s=0;
  char str, op[2];
  scanf("%d %s", &l, op);
  for(i=0; i<12; ++i){
    for(j=0; j<12; ++j){
      scanf("%lf", &m[i][j]);
    }
  }
  s = m[l][0] + m[l][1]+ m[l][2]+ m[l][3]+ m[l][4]+ m[l][5]+ m[l][6]+ m[l][7]+ m[l][8]+ m[l][9]+ m[l][10]+ m[l][11];
  if( *op == 'M' ){
    s = s/12;
  }
  printf("%.1lf\n", s);
  return 0;
}