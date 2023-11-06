//
// Created by lsomb on 26/10/2023.
//



#ifndef HEALTHMANEGEMENT_OBJECTTHIS_H

#include "../default/List/List.h"
#include "../default/Row/Row.h"
#include "../default/ABB/ABB.h"
#define HEALTHMANEGEMENT_OBJECTTHIS_H

typedef struct This{
    List *lista;
    Row * row;
    ABB * abb;
}This;

This* new_Types();

#endif //HEALTHMANEGEMENT_OBJECTTHIS_H


