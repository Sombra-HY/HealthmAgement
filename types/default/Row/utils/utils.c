//
// Created by lsomb on 04/11/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "../../Registry/Registry.h"
#include "../Row.h"
#include "../../Registry/utils/utils.h"

void Infileira(Row* row, Registry *data) {

    Erow* erow = new_Erow();
    erow->data = data;
    erow->next = NULL;

    if (row->head == NULL) {
        row->head = erow;
        row->tail = erow;
    } else {
        row->tail->next = erow;
        row->tail = erow;
    }
    row->amount++;
}


void removeAtIndex(Row *row, int index) {
    if (index < 0 || index >= row->amount) {
        printf("Índice fora dos limites da lista.\n");
        return;
    }

    if (index == 0) {
        // Remoção do elemento no início da lista
        Erow *temp = row->head;
        row->head = row->head->next;
        free(temp);

    } else {
        Erow *current = row->head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        Erow *temp = current->next;
        current->next = temp->next;
        if (temp == row->tail) {
            row->tail = current;
        }
        free(temp);
    }

    row->amount--;
}

void printRow(Row* row) {
    if(row->head == NULL) {
        printf("A fila está vazia!\n");
        return;
    }

    Erow* temp = row->head;
    while(temp != NULL) {
        printRegistry(temp->data);
        printf("\n");
        temp = temp->next;
    }
    printf("\n");
}
