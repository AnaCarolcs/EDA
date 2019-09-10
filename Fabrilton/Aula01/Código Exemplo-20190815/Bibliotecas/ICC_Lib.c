//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

// Funções matemáticas
float Soma(float pnum1, float pnum2)
{
  float psoma;
  psoma = pnum1 + pnum2;
  return psoma;
}

float Media(float pnum1, float pnum2)
{
  float pmedia;
  pmedia = Soma(pnum1,pnum2)/2;
  return pmedia;
}

// Funções para entrada de dados:
char *LerString(char *pmensa, int ptamanho)
{
  char *pdado;
  pdado = (char *) malloc(ptamanho);	
  printf (pmensa);
  scanf ("%s",pdado);  
  return pdado;
}

int LerInteiro(char *pmensa)
{
  int pdado;
  printf (pmensa);
  scanf ("%d",&pdado);  
  return pdado;
}

float LerFloat(char *pmensa)
{
  float pdado;
  printf (pmensa);
  scanf ("%f",&pdado);  
  return pdado;
}

// Procedimentos para saída de dados:
void MostraString(char *pmensa, char *pdado)
{
  printf ("%s ", pmensa);
  printf ("%s \n", pdado);
}

void MostraInteiro(char *pmensa, int pdado)
{
  printf ("%s ", pmensa);
  printf ("%d \n", pdado);
}

void MostraFloat(char *pmensa, float pdado, int ptamanho, int pprecisao)
{
  char pformato[30];
  char pnumero[5];
  strcpy(pformato, "%s %");
  itoa(ptamanho,pnumero, 10);
  strcat(pformato,pnumero);
  strcat(pformato,".");
  itoa(pprecisao,pnumero, 10);
  strcat(pformato,pnumero);
  strcat(pformato,"f \n");
  
  printf (pformato, pmensa, pdado);
}

// Procedimentos para interfaces:
void DesenhaLinha(char *psimbolo, int ptamanho)
{
  int pc;
  printf ("%c",'\n');
  for(pc=0;pc<ptamanho;pc++)	
    printf(psimbolo);	
  printf ("%c",'\n');
}

