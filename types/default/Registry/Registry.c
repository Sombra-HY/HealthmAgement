#include <stdio.h>
#include <malloc.h>
#include "Registry.h"
#include "utils/utils.h"

//
// Created by lsomb on 26/10/2023.
//


// Init Data types
Date *new_Data(){
    Date *date = (Date*) malloc(sizeof (Date));
    return date;
}
Registry* new_Registry(){
    Registry *res = (Registry*)malloc(sizeof(Registry));
    res->age = NULL;
    res->date = new_Data();

    res->printRegistry = &printRegistry;

    return res;
}



