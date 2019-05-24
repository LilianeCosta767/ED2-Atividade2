void escritaBin(FILE *arq){
    int vet[10] = {10,9,8,7,6,5,4,3,2,1};
    for(int i=0;i<10;i++){
        fwrite(&vet[i], sizeof(int), 1, arq);
    }

}

void ordena(FILE *arq, int vet[]){
    fread(vet, sizeof(int), 10, arq); //lendo do arquivo binario e colocando no vetor automaicamente
    fclose(arq);
    ordenaV(vet);
    // tentando colocar o vetor ordenado em um novo arquivo
    FILE *arq2;
    arq2 = fopen("vetorOrdenado.dat", "wb");
    fclose(arq2);
    //
}

void ordenaV(int vet[]){
    int aux;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(vet[i]>vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void imprimir(int vet[]){
    for(int i=0;i<10;i++)
        printf("vet[%d] = %d\n", i, vet[i]);
}
