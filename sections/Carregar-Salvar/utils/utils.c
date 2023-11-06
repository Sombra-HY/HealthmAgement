//
// Created by lsomb on 06/11/2023.
//

#include <stdio.h>
#include "utils.h"
#include "../../../utils/filemodule/filemodule.h"
#include "../../../data/config.h"


void salvarFile(This *aThis){
    EList *current = aThis->lista->Start;
    Registry * re;

    while (current != NULL) {
        re = current->dados;
        writeRegistryToCSV(PATH,re);
        current = current->next;
    }
}

void CarregarData(This *aThis){
    List *list = aThis->lista;
    readRegistrictADD(PATH,list);
}
