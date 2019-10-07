struct TNo
{
TNo *Ant;
int Numero;
TNo *Prox;
};

bool Vazia(TNo *pLista)
{
if(pLista == NULL)
return true;
else
return false;
}

TNo *IncluiCabeca(TNo *pLista, int pValor)
{
TNo *pNovoNo;
pNovoNo = (TNo *) malloc(sizeof(TNo));
pNovoNo->Numero = pValor;
pNovoNo->Ant = NULL;
pNovoNo->Prox = pLista;
pLista->Ant = pNovoNo;
pLista = pNovoNo;
return pLista;
}

TNo *IncluiCalda(TNo *pLista, int pValor)
{
TNo *pNovoNo, *pAux;
pNovoNo = (TNo *) malloc(sizeof(TNo));
pNovoNo->Numero = pValor;
pNovoNo->Prox = NULL;
pAux = pLista;
while (pAux->Prox != NULL)
pAux = pAux->Prox;
pAux->Prox = pNovoNo;
pNovoNo->Ant = pAux;
return pLista;
}

TNo *IncluiDepois(TNo *pLista, int pChave, int pValor)
{
TNo *pNovoNo, *pAux;
pNovoNo = (TNo *) malloc(sizeof(TNo));
pNovoNo->Numero = pValor;
pAux = pLista;
while (pAux->Prox->Valor != pChave)
pAux = pAux->Prox;
pNovoNo->Prox = pAux->Prox;
pNovoNo->Ant = pAux;
pAux->Prox = pNovoNo;
pNovoNo->Prox->Ant = pNovoNo;
return pLista;

TNo *ExcluiCabeca(TNo *pLista)
{
pLista = pLista->Prox;
free(pLista->Ant);
pLista->Ant = NULL;
return pLista;
}

TNo *ExcluiCalda(TNo *pLista)
{
TNo *pAux;
pAux = pLista;
while (pAux->Prox->Prox != NULL)
pAux = pAux->Prox;
free(pAux->Prox);
pAux->Prox = NULL;
return pLista;
}

TNo *ExcluiChave(TNo *pLista, int pChave)
{
TNo *pAux;
pAux = pLista;
while (pAux->Numero != pChave)
pAux = pAux->Prox;
pAux->Ant->Prox = pAux->Prox;
pAux->Prox->Ant = pAux->Ant;
free(pAux);
return pLista;
}

