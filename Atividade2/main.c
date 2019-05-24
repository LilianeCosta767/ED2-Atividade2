#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    int vet[10];
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
    imprimir(vet);


    return 0;
}
