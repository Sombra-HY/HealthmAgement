#include <stdio.h>
#include <stdlib.h>
#include "../List.h"

//
// Created bchar *readFileToString(const char *filename) {
//    // Abre o arquivo para leitura
//    FILE *arquivo;
//    arquivo = fopen(filename, "r");
//
//    // Verifica se o arquivo foi aberto com sucesso
//    if (arquivo == NULL) {
//        printf("Erro ao abrir o arquivo.\n");
//        return NULL; // Retorna NULL em caso de erro
//    }
//
//    // Move o ponteiro de posição para o final do arquivo para obter o tamanho
//    fseek(arquivo, 0, SEEK_END);
//    long tamanho = ftell(arquivo);
//
//    // Move o ponteiro de posição de volta para o início do arquivo
//    fseek(arquivo, 0, SEEK_SET);
//
//    // Aloca memória para armazenar o conteúdo do arquivo em uma string
//    char *conteudo = (char *)malloc(tamanho + 1);
//
//    // Lê o conteúdo completo do arquivo para a string
//    fread(conteudo, 1, tamanho, arquivo);
//
//    // Fecha o arquivo
//    fclose(arquivo);
//
//    // Remove o último caractere se for '\n'
//    if (tamanho > 0 && conteudo[tamanho - 1] == '\n') {
//        conteudo[tamanho - 1] = '\0';
//    } else {
//        // Adiciona um caractere nulo ao final da string se não houver '\n'
//        conteudo[tamanho] = '\0';
//    }
//
//    return conteudo; // Retorna a string lida do arquivo
//}y lsomb on 04/11/2023.
//


void Add(List *list, Registry *resg) {

    EList *myElist = new_EList();
    if (list->Start == NULL ){
        myElist->dados = resg;

        list->Start = myElist;
        list->amount = 1;
        return;
    }

    myElist->dados = resg;
    myElist->next = list->Start;
    list->Start = myElist;
    list->amount++;
}


void printList(struct List *list) {
    EList *current = list->Start;
    int cont = 1;
    while (current != NULL) {
        Registry *re = new_Registry();
        printf("\n%d - ",cont);
        re->printRegistry(current->dados);
        current = current->next;
        cont++;
    }
}


Registry *getofIndex(List *list, int index) {
    if (index < 0 || index >= list->amount) {
        return NULL;
    }

    EList *current = list->Start;
    int i = 0;

    while (current != NULL && i < index) {
        current = current->next;
        i++;
    }
    Registry * re = current->dados;

    return re;
}


void removeIndex(List *list, int index) {
    if (index < 0 || index >= list->amount || list->Start == NULL) {
        return;
    }

    EList *current = list->Start;
    EList *previous = NULL;
    int i = 0;

    while (current != NULL && i < index) {
        previous = current;
        current = current->next;
        i++;
    }

    if (current != NULL) {
        if (previous == NULL) {
            list->Start = current->next;
        } else {
            previous->next = current->next;
        }
        free(current);
        list->amount--;
    }
}
