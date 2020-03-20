#include<stdio.h>
#include<stdio.h>

void serase(int d, int vf, int vg){
    int d1;
    d1 = sqrt((pow(d,2) + pow(12,2)));
    float tempo_vf=(float)12/(float)vf;
    float tempo_vg=(float)d1/(float)vg;
    if(tempo_vg <= tempo_vf){
      printf("S\n");
    } else if(tempo_vf < tempo_vg){
      printf("N\n");
    } 
}

int main(){
  int d, vf, vg;
  while(scanf("%d %d %d", &d, &vf, &vg) != EOF){
    serase(d, vf, vg);
  }

  return 0;
}