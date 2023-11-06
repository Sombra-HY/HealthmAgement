//
// Created by lsomb on 27/10/2023.
//

#ifndef HEALTHMANEGEMENT_LIST_H
#define HEALTHMANEGEMENT_LIST_H
#include "../Registry/Registry.h"


typedef struct EList {
    Registry *dados;
    struct EList *next;
} EList;

typedef struct List {
    int amount;
    EList *Start;

    void (*Add)(struct List *list, Registry *newRegistry);
    void (*printList)(struct List *list);
    Registry* (*getofIndex)(struct List *list, int index);
    void (*removeIndex)(struct List *list, int index);

} List;


EList * new_EList();
List* new_List();










#endif //HEALTHMANEGEMENT_LIST_H
