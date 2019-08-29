#include <bits/stdc++.h>

using namespace std;

string maiusculo(string palavra){
  transform(palavra.begin(), palavra.end(), palavra.begin(), ::toupper);
  return palavra;
}

string minusculo(string palavra){
  transform(palavra.begin(), palavra.end(), palavra.begin(), ::tolower);
  return palavra;
}

string primeiraMaiuscula(string palavra){
  palavra.push_back(palavra[0]);
  palavra.push_back(palavra[0]-32);
  return palavra;
}

string AplicaF(string n, string (*f) (string k)){
  string resposta = f(n);
  return resposta;
}

int main(){

  string palavra, opcao;

  cin >> palavra >> opcao;

  string psq;

    switch(opcao){
    case "maiusculo":
      psq = AplicaF(palavra);
      break;
    case "minusculo":
      psq = AplicaF(palavra);
      break;
    case "primeiraMaiuscula":
      psq = AplicaF(palavra);
      break;
    default:
      break;
  }

  printf("%s\n",psq);

  return 0;

}