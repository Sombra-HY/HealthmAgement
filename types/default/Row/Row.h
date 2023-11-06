//
// Created by lsomb on 27/10/2023.
//

#ifndef HEALTHMANEGEMENT_ROW_H
#define HEALTHMANEGEMENT_ROW_H
#include "../Registry/Registry.h"

typedef struct Erow{
    Registry *data;
    struct Erow * next;
}Erow;


typedef struct Row{
    int amount;
    struct Erow * head;
    struct Erow * tail;

    void (*Infileira)(struct Row* row,struct Registry *data) ;
    void (*removeAtIndex)( struct Row *row, int index) ;
    void (*printRow)(struct Row* row);

}Row;

Erow* new_Erow();
Row* new_Row();
#endif //HEALTHMANEGEMENT_ROW_H
