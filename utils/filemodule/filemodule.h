//
// Created by lsomb on 06/11/2023.
//

#ifndef HEALTHMANEGEMENT_FILEMODULE_H
#define HEALTHMANEGEMENT_FILEMODULE_H

#include "../../types/default/Registry/Registry.h"
#include "../../types/default/List/List.h"

int writeRegistryToCSV(const char *filename, Registry *reg);

void readRegistrictADD(const char *PATH, List *list);

#endif //HEALTHMANEGEMENT_FILEMODULE_H
