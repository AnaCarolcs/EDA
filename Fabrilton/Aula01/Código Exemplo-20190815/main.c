#include <stdio.h>
#include <stdlib.h>
#include "ICC_lib.c"


int main(int argc, char *argv[])
{
//Declara��o das vari�veis
  float pm, ps, paltura;
  int pn1, pn2;
  char *pcidade;

//Entrada de dados
  DesenhaLinha("-x", 30);
  pn1 = LerInteiro("Digite a Idade 1: ");
  pn2 = LerInteiro("Digite a Idade 2: ");
  paltura = LerFloat("Digite a Altura: ");
  pcidade = LerString("Cidade: ",10);

//C�lculos
  pm = Media(pn1,pn2);
  ps = Soma(pn1,pn2);

//Sa�da de informa��es:
  DesenhaLinha("-#", 30);
  MostraInteiro("Idade 1: ", pn1);
  MostraInteiro("Idade 2: ", pn2);
  MostraInteiro("Soma das Idades 1 e 2: ", ps);
  MostraFloat("Media das Idades 1 e 2: ", pm, 5, 2);
  MostraString("Cidade: ", pcidade);

  getch(); //Parar a tela
  return 0;
}
