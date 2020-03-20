#include <stdio.h>
 
int main() {
  double a,b,c, val=1, p, area;
  scanf("%lf %lf %lf", &a, &b, &c);
  if(a<b+c && a>b-c){
    val = 0;
  }
  if(val==0){
    p = a + b +c;
    printf("Perimetro = %.1lf\n", p);
  } else {
    area = ((a+b)*c)/2;
    printf("Area = %.1lf\n", area);
  }
 
    return 0;
}