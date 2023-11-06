#include <stdio.h>

void createCSVFile(const char *fileName) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Não foi possível criar o arquivo CSV.\n");
        return;
    }
    fprintf(file, "Nome,Idade,Email\n");
    fclose(file);
}

void appendToCSV(const char *fileName, const char *data) {
    FILE *file = fopen(fileName, "a"); // "a" abre o arquivo em modo de adição (append)
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo para adicionar dados.\n");
        return;
    }
    fprintf(file, "%s\n", data);
    fclose(file);
}
