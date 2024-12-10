#include<stdio.h>
#include<stdlib.h>

typedef struct No{
    int dado;
    struct No* proximo;
}No;

No* inserirInicio(No* lista, int valor){
    No* novo_no (No*) malloc((sizeof(No)));
    novo_no->dado = valor;
    novo_no->proximo = lista;
}

No* removeInicio(No* lista){
    if(lista == NULL){

    }

    No* temp = lista;
    lista = lista->proximo;
    free(temp);

    return lista;
}

void imprimeLista(No* lista){
    No* atual = lista;
    while (atual != NULL){
        printf("%d -> ", atual->dado);
        atual = atual->proximo;
    }
    printf("\n\n");
}

int main()
{
    No* lista = NULL;
    
    lista = inserirInicio(lista, 100);
    lista = inserirInicio(lista, 101);
    lista = inserirInicio(lista, 102);
    lista = inserirInicio(lista, 103);
    lista = inserirInicio(lista, 104);
    lista = inserirInicio(lista, 105);

    imprimeLista(lista);
}
