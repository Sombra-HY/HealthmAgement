#include <malloc.h>
#include "ABB.h"

//
// Created by lsomb on 27/10/2023.
//
ABB* new_ABB(){
    ABB* abb = (ABB*) malloc(sizeof (ABB));
    abb->amount = 0;
    abb->root = NULL;
    return abb;
}
EABB* new_EABB(){
    EABB * eabb = (EABB*) malloc(sizeof (EABB));
    eabb->data =NULL;
    eabb->LChiild = NULL;
    eabb->RChild = NULL;
    return eabb;
}