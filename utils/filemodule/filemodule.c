#include <stdio.h>
#include <string.h>

#include "../../types/default/Registry/Registry.h"
#include "../../types/default/List/List.h"


int writeRegistryToCSV(const char *filename, Registry *reg) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo para escrita.\n");
        return 0;
    }
    fprintf(file, "%d,%d,%d,%d,%s,%s\n", &reg->date->day, &reg->date->month, &reg->date->year, reg->age,reg->rg, reg->name);
    fclose(file);
    return 1;
}


void readRegistrictADD(const char *PATH, List *list) {
    FILE *file = fopen(PATH, "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return;
    }

    int a = 0;

    char line[100]; // Tamanho do buffer para ler cada linha
    char * res ;

    while (fgets(line, sizeof(line), file)) {
        Registry *re = new_Registry();

        res = strtok(line,",");

        sscanf(res,"%d",&re->date->day);
        res = strtok(NULL,",");
        sscanf(res,"%d",&re->date->month);
        res = strtok(NULL,",");
        sscanf(res,"%d",&re->date->year);
        res = strtok(NULL,",");
        sscanf(res,"%d",&re->age);
        res = strtok(NULL,",");

        sscanf(res, "%s", &re->rg);
        res = strtok(NULL,",");


        sscanf(res, "%s", &re->name);
        res = strtok(NULL,"\n");

        list->Add(list,re);
    }

    fclose(file);
}
