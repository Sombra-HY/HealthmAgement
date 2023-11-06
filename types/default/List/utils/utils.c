#include <stdio.h>
#include <stdlib.h>
#include "../List.h"

//
// Created by lsomb on 04/11/2023.
//


void Add(List *list, Registry *resg) {

    EList *myElist = new_EList();
    if (list->Start == NULL ){
        myElist->dados = resg;

        list->Start = myElist;
        list->amount = 1;
        return;
    }

    myElist->dados = resg;
    myElist->next = list->Start;
    list->Start = myElist;
    list->amount++;
}


void printList(struct List *list) {
    EList *current = list->Start;
    int cont = 1;
    while (current != NULL) {
        Registry *re = new_Registry();
        printf("\n%d - ",cont);
        re->printRegistry(current->dados);
        current = current->next;
        cont++;
    }
}


Registry *getofIndex(List *list, int index) {
    if (index < 0 || index >= list->amount) {
        return NULL;
    }

    EList *current = list->Start;
    int i = 0;

    while (current != NULL && i < index) {
        current = current->next;
        i++;
    }
    Registry * re = current->dados;

    return re;
}


void removeIndex(List *list, int index) {
    if (index < 0 || index >= list->amount || list->Start == NULL) {
        return;
    }

    EList *current = list->Start;
    EList *previous = NULL;
    int i = 0;

    while (current != NULL && i < index) {
        previous = current;
        current = current->next;
        i++;
    }

    if (current != NULL) {
        if (previous == NULL) {
            list->Start = current->next;
        } else {
            previous->next = current->next;
        }
        free(current);
        list->amount--;
    }
}
