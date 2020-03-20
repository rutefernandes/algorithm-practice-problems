#include <stdio.h>
 
int main() {
 
	double a,b,c,d, r, x1, x2;
	scanf ("%lf%lf%lf", &a,&b,&c);
	d=b*b-4*a*c;
	r=pow(d,.5);
	if(d<0 || a==0){
		printf("Impossivel calcular\n");
	}else {
		x1=(-b+r)/(2*a);
		x2=(-b-r)/(2*a);
		printf("R1 = %.5lf\n",x1);
		printf("R2 = %.5lf\n",x2);
	}
    return 0;
}