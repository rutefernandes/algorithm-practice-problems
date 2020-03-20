#include <stdio.h>
 
int main() {
  double s, r;
  scanf("%lf", &s);
  if(s>=0 && s<=400.00){
    r = s*1.15;
    printf("Novo salario: %.2lf\n", r);
    r = r-s;
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: 15 %%\n");
  } else if(s>=400.01 && s<=800.00){
    r = s*1.12;
    printf("Novo salario: %.2lf\n", r);
    r = r-s;
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: 12 %%\n");
  } else if(s>= 800.01 && s<=1200.00){
    r = s*1.10;
    printf("Novo salario: %.2lf\n", r);
    r = r-s;
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: 10 %%\n");
  } else if(s>=1200.01 && s<=2000.00){  
    r = s*1.07;
    printf("Novo salario: %.2lf\n", r);
    r = r-s;
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: 7 %%\n");
  } else if(s> 2000.00){
    r = s*1.04;
    printf("Novo salario: %.2lf\n", r);
    r = r-s;
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: 4 %%\n");
  }
 
    return 0;
}