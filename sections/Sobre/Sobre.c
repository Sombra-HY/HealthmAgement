#include "stdio.h"
#include "../../main.h"
#include "../../utils/Clear/Clear.h"

//
// Created by lsomb on 04/11/2023.
//
void Sobre(This* aThis){
    clear();
    int selector = 5;
    while (selector != 0){
        printf("\n"
               "Integrantes: \n"
               "Rafael Augusto Feliciano Assembleia \n"
               "221-221-039 \n"
               "\n"
               "Lucas Sombra do Nascimento \n"
               "221-221-120 \n"
               "\n"
               "Ciclo: \n"
               "4 Ciclo \n"
               "\n"
               "Curso: \n"
               "Ciencia da Computacao \n"
               "\n"
               "Disciplina: \n"
               "Estrutura de Dados \n"
               "\n"
               "Data: \n"
               "13/11/2023 \n"
               "Digite '1' para voltar ao Menu Principal \n:");
        scanf("%d",&selector);
        clear();
        switch (selector) {
            case 1:
                home(aThis);
            default:
                continue;
        }
    }
}