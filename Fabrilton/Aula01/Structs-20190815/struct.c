//Atividade de struct
#include <stdio.h>

typedef struct {
  int codigo;
  char nome[30];
  int idade;
  float altura;
} Pessoa;

Pessoa p[3];

void incluir(){
  for(int i=0; i<3; i++) {
    printf(" Digite codigo: ");
    scanf("%d", &p[i].codigo);
    printf(" Digite nome: ");
    scanf("%s", p[i].nome);
    printf(" Digite idade: ");
    scanf("%d", &p[i].idade);
    printf(" Digite altura: ");
    scanf("%f", &p[i].altura);
  }
  return;
}

void excluir(){
  printf("exlcuir\n");
  return;
}

void alterar(){

  int cod, posicao;

  printf(" \n Código: ");
  scanf("%d", &cod);

  int i;

  for(i=0; i<2; i++) {
    if(p[i].codigo == cod) {
        printf("\n Registro encontrado! ");
        posicao = i;
    } else {
        posicao = -1;
    }
  }

    if(posicao = -1) {
      printf(" \n Cadastro não encontrado! ");
    } else {
      printf(" Digite novo codigo: ");
      scanf("%d", &p[i].codigo);
      printf(" Digite novo nome: ");
      scanf("%s", p[i].nome);
      printf(" Digite nova idade: ");
      scanf("%d", &p[i].idade);
      printf(" Digite nova altura: ");
      scanf("%f", &p[i].altura);
    }
    return;
}

void listar(){
  for(int i=0; i<3; i++) {
    printf(" \n Codigo: %d ", p[i].codigo);
    printf(" \n Nome: %s ", p[i].nome);
    printf(" \n Idade: %d ", p[i].idade);
    printf(" \n Altura: %.2f \n", p[i].altura);
  }
  return;
}


void main(){

  int opcao, d = 1;

  while (d == 1) {

  printf("\nO que vc deseja fazer? \n(1) Incluir \n(2) Excluir \n(3) Alterar\n(4) Listar\n(5)Sair\n");
  scanf("%d", &opcao);

  switch (opcao){
      case 1: //incluir
        incluir();
        break;
      case 2: //excluir
        excluir();
        break;
      case 3: //alterar
        alterar();
        break;
      case 4: //listar
        listar();
        break;
      case 5: //listar
        return 0;
        break;
      default:
        return;
    }
  }
}