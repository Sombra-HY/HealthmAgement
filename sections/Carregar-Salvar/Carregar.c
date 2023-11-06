//
// Created by lsomb on 26/10/2023.
//

#include <stdio.h>
#include "../../utils/Clear/Clear.h"
#include "../../types/others/Objectthis.h"
#include "../../main.h"
#include "utils/utils.h"

void Carregar(This* aThis){
    clear();
    int selector = 1;
    while (selector != 0){
        printf("\n"
               "Selecione: \n"
               "1 - Ler um arquivo com os dados dos pacientes e carregar a lista\n"
               "2 - Salvar um arquivo com os dados dos pacientes\n"
               "3- Voltar para o Menu \n:"
               );
        scanf("%d",&selector);
        clear();
        switch (selector) {
            case 1:
                CarregarData(aThis);
                continue;
            case 2:
                salvarFile(aThis);
                continue;
            case 3:
                home(aThis);
            default:
                continue;
        }
    }
}