#include <stdio.h>
#include "../../utils/Clear/Clear.h"
#include "../../types/others/Objectthis.h"
#include "../../main.h"
#include "utils/utils.h"

//
// Created by lsomb on 26/10/2023.
//
void Atendimento(This* aThis){
    clear();
    int selector = 1;
    while (selector != 0){
        printf("\n"
               "Selecione: \n"
               "1 - Enfileirar paciente\n"
               "2 - Desenfileirar paciente\n"
               "3 - Mostrar fila\n"
               "4 - Voltar para o Menu \n:"
               );
        scanf("%d",&selector);
        clear();
        switch (selector) {
            case 1:
                Enfileirar_paciente(aThis);
                continue;
            case 2:
                Desenfileirar_paciente(aThis);
                continue;
            case 3:
                Mostrar_fila(aThis);
                continue;
            case 4:
                home(aThis);
            default:
                continue;
        }
    }
}