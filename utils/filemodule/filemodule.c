#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <unistd.h>

#include "../../types/default/Registry/Registry.h"
#include "../../types/default/List/List.h"

int apagarUltimaLinha(const char *filename) {
    FILE *arquivo = fopen(filename, "r+");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;  // Retorna 1 em caso de erro
    }
    fseek(arquivo, 0, SEEK_END);

    long posicao = ftell(arquivo);
    while (posicao > 0) {
        posicao--;
        fseek(arquivo, posicao, SEEK_SET);
        if (fgetc(arquivo) == '\n') {
            break;
        }
    }

    fprintf(arquivo, "%s", "");

    ftruncate(fileno(arquivo), ftell(arquivo));

    // Fechar o arquivo
    fclose(arquivo);

    return 0;  // Operação bem-sucedida
}

char *readFileToString(const char *filename) {
    FILE *arquivo;
    arquivo = fopen(filename, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return NULL; // Retorna NULL em caso de erro
    }

    fseek(arquivo, 0, SEEK_END);
    long tamanho = ftell(arquivo);

    fseek(arquivo, 0, SEEK_SET);
    char *conteudo = (char *)malloc(tamanho + 1);
    fread(conteudo, 1, tamanho, arquivo);

    fclose(arquivo);

    if (tamanho > 0 && conteudo[tamanho - 1] == '\n') {
        conteudo[tamanho - 1] = '\0';
    } else {
        conteudo[tamanho] = '\0';
    }

    return conteudo;
}

int writeRegistryToCSV(const char *filename, Registry *reg) {
    FILE *file;

    char* filestring = readFileToString(filename);

    printf("%s",filestring);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo para escrita.\n");
        return 0;
    }
    fprintf(file, "%d,%d,%d,%d,%s,%s\n", reg->date->day, reg->date->month, reg->date->year, reg->age,reg->rg, reg->name);
    fclose(file);

    file = fopen(filename,"a");
    printf("arquivo :%s \n",filestring);
    fprintf(file,"%s",filestring);
    fclose(file);

    apagarUltimaLinha(filename);

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
