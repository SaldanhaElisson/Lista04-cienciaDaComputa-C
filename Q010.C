// desafio: 
/*  Escreva um programa que gere um vetor X com n ́umeros pseudoaleat ́orios no intervalo [0,N − 1].
Crie um vetor F com N posi ̧c ̃oes e armazene em cada posi ̧c ̃ao de F a quantidade de ocorrˆencias
dos elementos de X.*/
#include <stdio.h>
#include <stdlib.h>

void gerandoValoresVetores(int *const, const int, const int);
void identificandoOcorrencias(const int *const, int *const, const int);
void imprimindoVetores(const int *const, int);

int main(){
    int qtdVetorElem, qtdVetorOcorr;
    int *vetorElem, *vetorOcorr;


    // entranda de dados
    puts("Digite a quantidade de Elementos ");
    scanf("%d", &qtdVetorElem);

    puts("Digite o valor maximo dos elementos");
    scanf("%d", &qtdVetorOcorr);
   
    // realocando vetores
    vetorElem = (int *)malloc (qtdVetorElem * sizeof(int));
    vetorOcorr = (int *)malloc (qtdVetorOcorr * sizeof(int)); 

    puts("Gerando velores aleatorios...");
    gerandoValoresVetores(vetorElem, qtdVetorElem, qtdVetorOcorr);

    puts("Identificando Ocorrência no Elemento gerado...");
    identificandoOcorrencias(vetorElem, vetorOcorr, qtdVetorElem);

    puts("Sucesso");
    puts(" ");
    puts("Elementos \n");
    imprimindoVetores(vetorElem, qtdVetorElem);

    puts(" ");
    puts("Ocorrências");
    imprimindoVetores(vetorOcorr, qtdVetorOcorr);

    return 0;

}

void identificandoOcorrencias(const int *const vetorElem, int *const vetorOcorr, const int qtdVetorElem)
{
    for (int i = 0; i < qtdVetorElem; i++){
        ++*(vetorOcorr + *(vetorElem+i));
    }
}

void imprimindoVetores(const int *const vetor, const int qtd){
    for (int i = 0; i < qtd; i++)
    {
        printf("[%d, ", *(vetor+i));
    }
    printf("]\n");
}

void gerandoValoresVetores( int *const vetores, int qtd, int intervalo){
    for(int i = 0; i < qtd; i++){
        *(vetores+i) = rand() % intervalo;
    }
}