#include<stdio.h>

void ordena(int *a, int *b, int *c){

  int t;

 if(*a > *b && *a > *c){
    if(*b > *c){}
 } else if (*b > *a && *b > *c){
  if(*a > *c){
  } else{
    t=*a;
    *a=*c;
    *c=t;
  }
    t=*a;
    *a=*b;
    *b=t;
 } else if (*c > *a && *c > *b){
  if(*a > *b){
  } else {
    t=*a;
    *a=*b;
    *b=t;
  }
    t=*a;
    *a=*c;
    *c=t;
 }

}

main(){

int N1=3, N2=5, N3=1;
printf("Antes: %d, %d, %d\n",N1,N2,N3);
ordena(&N1,&N2,&N3);
printf("Depois: %d, %d, %d\n",N1,N2,N3);

}