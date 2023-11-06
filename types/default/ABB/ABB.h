//
// Created by lsomb on 27/10/2023.
//

#ifndef HEALTHMANEGEMENT_ABB_H
#define HEALTHMANEGEMENT_ABB_H

#include "../Registry/Registry.h"

typedef struct EABB{
    Registry * data;
    struct EABB *RChild;
    struct EABB *LChiild;
}EABB;


typedef struct ABB{
    int amount;
    EABB *root;

}ABB;
EABB* new_EABB();
ABB* new_ABB();

ABB* new_Abb();


#endif //HEALTHMANEGEMENT_ABB_H
