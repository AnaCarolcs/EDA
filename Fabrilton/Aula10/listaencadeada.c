//quando temos uma variável normal, usamos "p.prox" para referenciar alguma coisa, quando usamos ponteiros,
// a nomenclatura é "p->prox"

struct TNo{
  int Numero;
  TNo *Prox;
};

bool Vazia(TNo *pLista){
  if(pLista == NULL)
    return true;
  else
    return false;
}

TNo *IncluiCabeca(TNo *pLista, int pValor){
  TNo *pNovoNo;
  pNovoNo = (TNo *) malloc(sizeof(TNo));
  pNovoNo->Numero = pValor;
  pNovoNo->Prox = pLista;
  pLista = pNovoNo;
  return pLista;
}

TNo *IncluiCalda(TNo *pLista, int pValor){
  TNo *pNovoNo, *pAux;
  pNovoNo = (TNo *) malloc(sizeof(TNo));
  pNovoNo->Numero = pValor;
  pNovoNo->Prox = NULL;
  pAux = pLista;

  while (pAux->Prox != NULL)
    pAux = pAux->Prox;

  pAux->Prox = pNovoNo;
  return pLista;
}

TNo *IncluiAntes(TNo *pLista, int pChave, int pValor){
  TNo *pNovoNo, *pAux;
  pNovoNo = (TNo *) malloc(sizeof(TNo));
  pNovoNo->Numero = pValor;
  pAux = pLista;

  while (pAux->Prox->Valor != pChave)
    pAux = pAux->Prox;

  pNovoNo->Prox = pAux->Prox;
  pAux->Prox = pNovoNo;
  return pLista;
}

TNo *ExcluiCabeca(TNo *pLista){
  TNo *pAux;
  pAux = pLista;
  pLista = pLista->Prox;
  free(pAux);
  return pLista;
}

TNo *ExcluiCalda(TNo *pLista){
  TNo *pAux;
  pAux = pLista;

  while (pAux->Prox->Prox != NULL)//Percorre até o nó nulo, pois o nó nulo corresponde ao último valor
    pAux = pAux->Prox;

  free(pAux->Prox);
  pAux->Prox = NULL;
  return pLista;
}

TNo *ExcluiChave(TNo *pLista, int pChave){
  TNo *pAnt, *pPost;
  pAnt = pLista;

  while (pAnt->Prox->Numero != pChave)//percorre até achar o valor que deseja excluir
    pAnt = pAnt->Prox;

  pPost = pAnt->Prox->Prox;
  free(pAnt->Prox);
  pAnt->Prox = pPost ;
  return pLista;
}

