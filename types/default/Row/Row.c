//
// Created by lsomb on 27/10/2023.
//

#include <malloc.h>
#include "Row.h"
#include "utils/utils.h"


Erow* new_Erow(){
    Erow *myErow = (Erow*) malloc(sizeof(Erow));
    myErow->next = NULL;
    myErow->data = NULL;

    return myErow;
}

Row* new_Row(){
    Row* row = (Row*) malloc(sizeof (Row));
    row->amount = 0;
    row->head = NULL;
    row->tail = NULL;

    row->printRow = printRow;
    row->removeAtIndex = removeAtIndex;
    row->Infileira = Infileira;


    return row;
}