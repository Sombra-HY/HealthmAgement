//
// Created by lsomb on 05/11/2023.


#include <stdlib.h>
#include "utils.h"
#include "../ABB.h"

EABB* insertNode(EABB* root, Registry* data) {
//    if (root == NULL) {
//        return new_EABB(data);
//    }
//
//    // Adapte a lógica de comparação conforme necessário (aqui usando idade como critério)
//    if (*(data->age) < *(root->data->age)) {
//        root->LChiild = insertNode(root->LChiild, data);
//    } else if (*(data->age) > *(root->data->age)) {
//        root->RChild = insertNode(root->RChild, data);
//    }

    return NULL;
}

void insert(ABB* tree, Registry* data) {
    if (tree == NULL || data == NULL) {
        return;
    }

    tree->root = insertNode(tree->root, data);
    tree->amount++;
}

void freeTree(EABB* root) {
    if (root != NULL) {
        freeTree(root->LChiild);
        freeTree(root->RChild);
        free(root->data->date);
        free(root->data->age);
        free(root->data);
        free(root);
    }
}

void freeAbb(ABB* tree) {
    if (tree != NULL) {
        freeTree(tree->root);
        free(tree);
    }
}