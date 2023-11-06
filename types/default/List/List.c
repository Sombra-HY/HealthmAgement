//
// Created by lsomb on 27/10/2023.
//

#include <malloc.h>
#include "List.h"
#include "utils/utils.h"


// init struct
List* new_List(){
    List *list = (List*) malloc(sizeof (List));
    list->amount = 0;
    list->Start = NULL;

    list->Add = &Add;
    list->printList = &printList;
    list->getofIndex = &getofIndex;
    list->removeIndex = &removeIndex;


    return list;
}
EList * new_EList(){
    EList *list = (EList*) malloc(sizeof (EList));
    list->dados = NULL;
    list->next = NULL;
    return list;
}