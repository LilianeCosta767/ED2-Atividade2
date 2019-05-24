#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    int vet[10], opc;
    //escrevendo no arquivo
    FILE *arq;
    arq = fopen("atividade.dat", "wb");
    if(arq == NULL){
        printf("Arquivo deu pau.\n");
        exit(0);
    }
    escritaBin(arq);
    fclose(arq);

    //ordenando o arquivo com bubblesort
    arq = fopen("atividade.dat", "rb");
    if(arq == NULL){
        printf("Arquivo deu pau.\n");
        exit(0);
    }
    ordena(arq, vet);
    //fclose(arq);

    //imprimindo vetor
    printf("1. Vetor Desordenado.\n");
    printf("2. Vetor Ordenado.\n");
    printf("Sua Opcao: ");
    scanf("%d", &opc);

    if(opc == 1)
        imprimirDesordenado();
    else if(opc == 2)
        imprimirOrdenado();
    else
        printf("Opcao Invalida\n");



    return 0;
}
