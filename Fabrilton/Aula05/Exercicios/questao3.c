#include<stdio.h>

float retangulo(int base, int altura, int zero){
  return base*altura;
}

float triangulo(int base, int altura, int zero){
  return (base*altura)/2;
}

float trianguloIsosceles(int base, int altura, int zero){
  return (base*altura)/2;
}

float quadrado(int base, int altura, int zero){
  return base*altura;
}

float trapezio(int baseMaior, int baseMenor, int altura){
  return ((baseMaior+baseMenor)*altura)/2;
}

float circulo(int raio, int zero, int um){
  return 3.1415*raio*raio/2;
}

float AplicaF(int n, int m, int o, float (*f) (int k, int y, int z)){
  int atermo = n, btermo = m, ctermo = o;
  float resposta = f(atermo, btermo, ctermo);
  return resposta;
}

void main(){

  int a, b, c, f;

  scanf("%d %d %d %d", &a, &b, &c, &f);

  float psq;

    switch(f){
    case 1:
      psq = AplicaF(a,b,c,retangulo);
      break;
    case 2:
      psq = AplicaF(a,b,c,triangulo);
      break;
    case 3:
      psq = AplicaF(a,b,c,trianguloIsosceles);
      break;
    case 4:
      psq = AplicaF(a,b,c,quadrado);
      break;
    case 5:
      psq = AplicaF(a,b,c,trapezio);
      break;
    case 6:
      psq = AplicaF(a,b,c,circulo);
      break;
    default:
      break;
  }

  printf("resultado: %f\n",psq);

}