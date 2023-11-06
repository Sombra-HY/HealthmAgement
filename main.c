#include <stdio.h>
//Sections
#include "types/default/ABB/ABB.h"
#include "utils/Clear/Clear.h"
#include "sections/Atendimento/Atendimento.h"
#include "sections/Pesquisa/Pesquisa.h"
#include "sections/Carregar-Salvar/Carregar.h"
#include "types/others/Objectthis.h"
#include "sections/Sobre/Sobre.h"
#include "sections/cadastrar/cadastrar.h"
#include "sections/cadastrar/utils/utils.h"



int home (This *athis){
    clear();

    int selector = 1;
    while (selector != 0){
        printf(""
               "Selecione: \n"
               "1 - Cadastrar\n"
               "2 - Atendiemnto \n"
               "3 - Pesquisa \n"
               "4 - Carregar / Salvar\n"
               "5 - Sobre\n:");
        scanf("%d",&selector);

        switch (selector) {
            case 1:
                Cadastros(athis);
                continue;
            case 2:
                Atendimento(athis);
                continue;
            case 3:
                Pesquisa(athis);
                continue;
            case 4:
                Carregar(athis);
                continue;
            case 5:
                Sobre(athis);
                continue;
            default:
                continue;
        }
    }
}

int main() {
    This* this = new_Types();
    home(this);

    return 0;
}
