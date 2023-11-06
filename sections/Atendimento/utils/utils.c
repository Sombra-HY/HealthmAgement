//
// Created by lsomb on 05/11/2023.
//

#include <stdio.h>
#include "utils.h"
#include "../../../utils/input/input.h"


void Enfileirar_paciente(This *aThis){
    Registry *re;
    List *list = aThis->lista;
    Row *row = aThis->row;

    list->printList(list);
    if(list->amount == 0){
        printf("\nNao existe Registros! \n");
        return;
    }

    int selec = 0;
    input("\n Selecione o numero do paciente para enfileirar:","%d",&selec);
    re = list->getofIndex(list, selec-1);

    if(re == NULL){
        printf("\nRegistro nao Encontrado! \n");
        return;
    }
    row->Infileira(row,re);
}

void Desenfileirar_paciente(This *aThis){
    Registry *re;
    List *list = aThis->lista;
    Row *row = aThis->row;

    list->printList(list);
    if(list->amount == 0){
        printf("\nNao existe Registros! \n");
        return;
    }

    int selec = 0;
    input("\n Selecione o numero do paciente para densenfileirar:","%d",&selec);
    re = list->getofIndex(list, selec-1);

    if(re == NULL){
        printf("\nRegistro nao Encontrado! \n");
        return;
    }
    row->removeAtIndex(row,selec-1);
}

void Mostrar_fila(This *aThis){
    Row *row = aThis->row;
    row->printRow(row);
}