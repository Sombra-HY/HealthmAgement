//
// Created by lsomb on 05/11/2023.
//

#include "utils.h"
#include "../Registry.h"
#include <time.h>
#include <stdio.h>


#include <time.h>

struct tm getCurrentDate() {
    time_t t;
    struct tm *current_time;

    time(&t);
    current_time = localtime(&t);

    return *current_time;
}
//    *(date->day) = current_time->tm_mday;
//    *(date->month) = current_time->tm_mon + 1;
//    *(date->year) = current_time->tm_year + 1900;

void printRegistry(Registry *myregis){
    printf("Name: %s \t ",myregis->name);
    printf("\t Idade: %d",myregis->age);
    printf("\t RG: %s",myregis->rg);

    Date *date = myregis->date;

    printf("\t %d/%d/%d",date->day,date->month,date->year);

}
