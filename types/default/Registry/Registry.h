//
// Created by lsomb on 27/10/2023.
//

#ifndef HEALTHMANEGEMENT_REGISTRY_H
#define HEALTHMANEGEMENT_REGISTRY_H

typedef struct Date{
    int day;
    int month;
    int year;
}Date;

typedef struct Registry{
    int *age;
    Date *date;
    char name[30];
    char rg[9];

    void (*setCurruentDate)(Date *date);
    void (*printRegistry)();

}Registry;

Registry* new_Registry();


#endif //HEALTHMANEGEMENT_REGISTRY_H
