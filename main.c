#include <stdio.h>
#include "arvore.h"

int main(){
    Arvore* arvore = arvore_cria();

    arvore_inserir(arvore, 5);
    arvore_inserir(arvore, 3);
    arvore_inserir(arvore, 7);
    arvore_inserir(arvore, 2);
    arvore_inserir(arvore, 4);
    arvore_inserir(arvore, 6);
    arvore_inserir(arvore, 8);
    arvore_inserir(arvore, 1);  
    arvore_inserir(arvore, 3);
    arvore_inserir(arvore, 9);
    arvore_inserir(arvore, 12);
    arvore_inserir(arvore, 10);
    arvore_inserir(arvore, 11);
    arvore_inserir(arvore, 15);
    arvore_inserir(arvore, 16);
    arvore_inserir(arvore, 17);
    arvore_inserir(arvore, 18);
    arvore_imprimir(arvore);
    
    arvore_apagar(arvore, 9);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    arvore_imprimir(arvore);
   

}