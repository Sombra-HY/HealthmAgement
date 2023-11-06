cmake_minimum_required(VERSION 3.26)
project(healthManegement C)

set(CMAKE_C_STANDARD 11)

add_executable(healthManegement main.c
        utils/Clear/Clear.h
        sections/sections.h
        sections/sections.c
        sections/cadastrar/cadastrar.c
        sections/cadastrar/cadastrar.h
        sections/Atendimento/Atendimento.c
        sections/Atendimento/Atendimento.h
        sections/Pesquisa/Pesquisa.c
        sections/Pesquisa/Pesquisa.h
        sections/Carregar-Salvar/Carregar.c
        sections/Carregar-Salvar/Carregar.h
        types/default/Registry/Registry.c
        utils/Clear/Clear.c
        utils/input/input.c
        utils/input/input.h
        types/others/Objectthis.h
        types/others/Objectthis.c
        types/default/List/List.c
        types/default/Row/Row.c
        types/default/ABB/ABB.c
        types/default/ABB/ABB.h
        types/default/List/List.h
        types/default/Registry/Registry.h
        types/default/Row/Row.h
        types/default/List/utils/utils.h
        types/default/List/utils/utils.c
        main.h
        sections/Sobre/Sobre.c
        sections/Sobre/Sobre.h
        sections/cadastrar/utils/utils.c
        sections/cadastrar/utils/utils.h
        types/default/Row/utils/utils.c
        types/default/Row/utils/utils.h
        sections/Atendimento/utils/utils.c
        sections/Atendimento/utils/utils.h
        types/default/Registry/utils/utils.c
        types/default/Registry/utils/utils.h
        types/default/ABB/utils/utils.c
        types/default/ABB/utils/utils.h
        utils/filemodule/filemodule.c
        utils/filemodule/filemodule.h
)

