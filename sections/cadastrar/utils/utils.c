//
// Created by lsomb on 04/11/2023.
//

#include <stdio.h>
#include <time.h>
#include "../../../types/default/Registry/Registry.h"
#include "../../../types/default/List/List.h"
#include "../../../types/others/Objectthis.h"
#include "../../../utils/input/input.h"
#include "../../../types/default/Registry/utils/utils.h"

void LimparLista(This * This){
    This->lista = new_List();
}



void Cadastrar(This * This) {
    Registry *re = new_Registry();
    input("Digite seu nome:", "%s", &re->name);
    input("Digite sua idade:", "%d", &re->age);
    input("Digite seu RG:", "%s", &re->rg);
    struct tm hora = getCurrentDate();

    re->date->year = hora.tm_year + 1900;
    re->date->month = hora.tm_mon + 1;
    re->date->day = hora.tm_mday;

    This->lista->Add(This->lista,re);

}

void Consultar_Paciente(This* aThis){
    List *myList = aThis->lista;
    Registry *res = myList->Start->dados;

    if (myList->Start == NULL) {
        printf("Nao Existe Registros!.\n");
        return;
    }
    res->printRegistry(res);
}

void printar_todos_Pacientes(This* aThis){
    aThis->lista->printList(aThis->lista);
}

void atualizar_dados(This* aThis){
    List* list = aThis->lista;
    Registry* res;

    printar_todos_Pacientes(aThis);
    int selec = 0;
    input("\n Selecione um paciente pelo numero\\n: \"","%d",&selec);
    res = list->getofIndex(list,selec-1);

    if(res ==NULL){
        return;
    }
    printf("Escreve o que deseja atualizar: \n");
    input("Digite o nome:", "%s", &res->name);
    input("Digite a idade:", "%d", &res->age);
    input("Digite o RG:", "%s", &res->rg);

}

void Remover_paciente(This* aThis){
    int selec = 0;
    List * list = aThis->lista;

    printar_todos_Pacientes(aThis);
    input("\n Selecione um paciente pelo numero\\n: \"","%d",&selec);
    list->removeIndex(list,selec-1);

}