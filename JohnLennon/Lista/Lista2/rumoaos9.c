#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

  int somaDigitos(int n){
    if (n<10){
      return n;
    } else{
      return (n%10 + somaDigitos(n/10));
    }
  }

  int somaImprimeCaracteres(){
    char c;
    scanf ("%c",&c);

    if (c=='0'){
      return 0;
    }

    int soma=0;

    while (isdigit(c)){
      soma += c - '0';
      printf ("%c",c);
      scanf ("%c",&c);
    }
    return soma;
  }

  int grau9(int n) {
    if (n<10){
      return (n==9 ? 1 : 0);
    } else{
      int grau = grau9(somaDigitos(n));
      return (grau == 0? 0 : 1 + grau);
    }
  }

int main() {

  while (1) {
    int n = somaImprimeCaracteres();

    if (n==0){
      break;
    }

    int grau9n = grau9(n);

    if (grau9n==0){
      printf (" is not a multiple of 9.\n");
    } else{
      printf (" is a multiple of 9 and has 9-degree %d.\n", grau9n);
    }
  }
  return 0;
}
