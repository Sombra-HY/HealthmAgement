//
// Created by lsomb on 26/10/2023.
//

#include <stdio.h>
#include "../../utils/Clear/Clear.h"
#include "../../types/others/Objectthis.h"
#include "../../main.h"

void Carregar(This* aThis){
    clear();
    int selector = 1;
    while (selector != 0){
        printf("\n"
               "Selecione: \n"
               "1 - Ler um arquivo com os dados dos pacientes e carregar a lista\n"
               "2 - Salvar um arquivo com os dados dos pacientes\n"
               "3 - A ordem de inserção dos registros deve ser mantida \n"
               "4 - Voltar para o Menu \n:"
               );
        scanf("%d",&selector);
        clear();
        switch (selector) {
            case 1:
                clear();
            case 2:
                clear();
            case 3:
                clear();
            case 4:
                home(aThis);
            default:
                continue;
        }
    }
}