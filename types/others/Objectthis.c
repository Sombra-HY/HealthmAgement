//
// Created by lsomb on 26/10/2023.
//
// a ideia desse tipo é embrulhar os dados essenciais da aplicacao e rapassar para as fucoes principais
// assim tendo acesso de todos tipos em um unico lugar, por isso a escolha da palavra "this"

#include <malloc.h>
#include "Objectthis.h"

This* new_Types(){
    This *this = (This*) malloc(sizeof (This));
    this->lista = new_List();
    this->row = new_Row();
    this->abb = new_ABB();
    return this;
}