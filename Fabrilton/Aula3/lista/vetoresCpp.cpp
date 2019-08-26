/*
Crie uma biblioteca em linguagem C++chamada VetoresCPP.cppcom as seguintes funções/procedimentos:

a.Função CriaVetInt para alocação de vetores do tipo int. Esta função deverá receber a quantidade de elementos do vetor e retornar o ponteiro para o vetor alocado;

b.Função CriaVetFloat para alocação de vetores do tipo float. Esta função deverá receber a quantidade de elementos do vetor e retornar o ponteiro para o vetor alocado;
*/

int* criaVetInt(int size){
  int* array = new int[size];
  return array;
}

float* criaVetFloat(float size){
  float* array = new float[size];
  return array;
}

int main(){

  int sizeInt;
  float sizeFloat;

  criaVetInt(sizeInt);
  criaVetFloat(sizeFloat);

  return 0;
}