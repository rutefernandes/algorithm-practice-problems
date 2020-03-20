#include <stdio.h>
 
int main() {
 
   double a, b, c, d, media, ne;
   scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
   media= (a*2+b*3+c*4+d*1)/10;
   printf("Media: %.1lf\n", media);
   if(media >= 7.0){
     printf("Aluno aprovado.\n");
   } else if(media < 5.0) {
     printf("Aluno reprovado.\n");
   } else if(media >= 5.0 && media <= 6.9){
     printf("Aluno em exame.\n");
     scanf("%lf", &ne);
     printf("Nota do exame: %.1lf\n", ne);
     media=(media+ne)/2;
     if(media >= 5.0){
       printf("Aluno aprovado.\n");
     } else {
       printf("Aluno reprovado. \n");
     }
     printf("Media final: %.1lf\n", media);
   }
 
    return 0;
}