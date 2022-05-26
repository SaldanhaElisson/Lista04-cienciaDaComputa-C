/*Escreva um programa que gere dois vetores (X e Y ) com n ́umeros pseudoaleat ́orios no intervalo
[0,N − 1]. Crie uma matriz M com dimens ̃oes NxN que armazene as coocorrˆencias dos elementos
de X e Y da seguinte forma: */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerandoValoresVetores(int *const, const int, const int);
void identificandoOcorrMatriz(const int *const, const int * const, int *const, const int, const int);
void imprimindoVetores(const int *const, int);
void imprimindoMatriz(const int *const, int, int);

#define TAM 14
int main(){
    int *linhaEl, *colEl, *matrizOcor;
    int qtd;

    
    puts("Digite a dimensão da N para a Matriz quadratica N x N");
    scanf("%d", &qtd);

    
    matrizOcor = (int *) calloc(qtd*qtd, sizeof(int));
    linhaEl = (int *) calloc(TAM, sizeof(int));
    colEl  = (int *) calloc(TAM, sizeof(int));

    puts("Gerando elementos de X e Y...");
    gerandoValoresVetores(linhaEl, TAM, qtd-1);
    gerandoValoresVetores(colEl, TAM, qtd-1);

    imprimindoVetores( linhaEl, TAM);
    imprimindoVetores( colEl, TAM);

    puts("Identificando as Ocorrências");
    identificandoOcorrMatriz(linhaEl, colEl, matrizOcor, TAM, qtd);

    imprimindoMatriz(matrizOcor, qtd*qtd, qtd);
    

    return 0;
}

void gerandoValoresVetores( int *const vetores, const int qtd, const int intervalo){
    srand(time(NULL));
    for(int i = 0; i < qtd; i++){
        *(vetores+i) = rand() % intervalo;
    }
}

void identificandoOcorrMatriz(const int *const linEl, const int *const colEl, int *const matrizOcor, const int tamVetores, const int tamMatrizColuna){
    int k = 0;
    for(int i = 0; i < tamVetores; i++){
        k = *(linEl + i)  * tamMatrizColuna + *(colEl+i);
        ++*(matrizOcor+k);
    }
}

void imprimindoVetores(const int *const vetor, const int qtd){
    printf("[");
    for (int i = 0; i < qtd; i++)
    {
        printf("%d, ", *(vetor+i));
    }
    printf("]\n");
}

void imprimindoMatriz(const int *const matriz, int dim, int coluna){
    for(int i = 0; i < dim; i++){
            if(!(i)){
                printf("%d ", *(matriz + i));
                continue;
            }
              if ( !(i % coluna))
            {
                puts(" ");
            }
            printf("%d ", *(matriz + i));

          
            
    }
}