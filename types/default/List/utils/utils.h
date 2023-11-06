//
// Created by lsomb on 04/11/2023.
//

#ifndef HEALTHMANEGEMENT_UTILS_H
#define HEALTHMANEGEMENT_UTILS_H

#include "../../Registry/Registry.h"
#include "../List.h"

void Add(List *list, Registry *newRegistry);

void printList(struct List *list);

Registry *getofIndex(List *list, int index);

void removeIndex(List *list, int index);

#endif //HEALTHMANEGEMENT_UTILS_H
