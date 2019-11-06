void Constroi(Tno *No){

Dado = LerProximo();
if(Dado != ‘.’)
{
No = AloqueNo();
No->Dado = Dado;
Constroi(No->Esq);
Constroi(No->Dir);
}
else
No = NULL;
}