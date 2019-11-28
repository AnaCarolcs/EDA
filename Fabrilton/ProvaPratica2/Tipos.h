//
//  Tipos.h
//  MunicipiosBrasil
//
//  Created by Nilton Correia da Silva on 19/11/19.
//  Copyright © 2019 Nilton Correia da Silva. All rights reserved.
//

#ifndef Tipos_h
#define Tipos_h

typedef struct Municipio {
    long int codg;
    char UF[3];
    char nome[50];
    char regiao[25];
    long int pop;
    char porte[15];
} TMunicipio;

int leregistro(FILE *parquivo, int plinha, TMunicipio *pregistro){
    int pcont, perro;
    long int pfilesize;
    fseek(parquivo, 0L, SEEK_END);
    pfilesize = ftell(parquivo);
    if((plinha*116)>=pfilesize)
        return 0;
    perro = fseek(parquivo, plinha*116, SEEK_SET);
    if(perro)
        return 0;
    fscanf(parquivo, "%d %ld %s %s %s %ld %s ", &pcont, &pregistro->codg, pregistro->UF, pregistro->nome, pregistro->regiao, &pregistro->pop, pregistro->porte);
    return 1;
}

#endif /* Tipos_h */

