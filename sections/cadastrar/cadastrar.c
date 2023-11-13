//
// Created by lsomb on 26/10/2023.
//
#include <stdio.h>
#include "../../utils/Clear/Clear.h"
#include "../../types/default/Registry/Registry.h"
#include "../../types/others/Objectthis.h"
#include "../../main.h"
#include "utils/utils.h"


void Cadastros(This* aThis){
    clear();
    int selector = 1;
    while (selector != 0){
        printf(""
               "\nSelecione: \n"
               "1 - Cadastrar novo paciente\n"
               "2 - Consultar paciente cadastrado \n"
               "3 - Mostrar lista completa \n"
               "4 - Atualizar dados de paciente\n"
               "5 - Remover paciente\n"
               "6 - Limpar Lista\n"
               "7 - Voltar para o Menu \n:");

        scanf("%d",&selector);
        clear();
        switch (selector) {
            case 1:
                Cadastrar(aThis);
                continue;
            case 2:
                Consultar_Paciente(aThis);
                continue;
            case 3:
                printar_todos_Pacientes(aThis);
                continue;
            case 4:
                atualizar_dados(aThis);
                continue;
            case 5:
                Remover_paciente(aThis);
                continue;
            case 6:
                LimparLista(aThis);
                continue;
            case 7:
                home(aThis);
                continue;
            default:
                continue;
        }
    }
}