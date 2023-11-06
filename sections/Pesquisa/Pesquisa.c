//
// Created by lsomb on 26/10/2023.
//

#include <stdio.h>
#include "../../utils/Clear/Clear.h"
#include "../../types/others/Objectthis.h"
#include "../../main.h"

void Pesquisa(This* aThis){
    clear();
    int selector = 1;
    while (selector != 0){
        printf("\n"
               "Selecione como gostaria ordenar os registros: \n"
               "1 - Ano\n"
               "2 - Mes\n"
               "3 - Dia \n"
               "4 - idade do paciente\n"
               "5 - Voltar para o Menu \n:"
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
                clear();
            case 5:
                home(aThis);
            default:
                continue;
        }
    }
}