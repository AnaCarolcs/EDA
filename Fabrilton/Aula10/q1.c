/*1. Retifique os algoritmos abaixo para considerar os casos em que a lista de entrada possa estar vazia.
a. TNo *IncluiCabeca(TNo *pLista, int pValor)
b. TNo *IncluiCalda(TNo *pLista, int pValor)
c. TNo *ExcluiCabeca(TNo *pLista)
d. TNo *ExcluiCalda(TNo *pLista)C
*/

//a.
TNo *IncluiCabeca(TNo *pLista, int pValor){
  TNo *pNovoNo;
  pNovoNo = (TNo *) malloc(sizeof(TNo));
  pNovoNo->Numero = pValor;
  pNovoNo->Prox = pLista;
  pLista = pNovoNo;
  return pLista;
}