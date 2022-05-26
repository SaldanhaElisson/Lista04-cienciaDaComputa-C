/* Reimplemente a quest ̃ao considerando que o vetor Y  ́e dado em fun ̧c ̃ao de X da seguinte forma:

yi =
xi
if 0 < r ≤ 3
xi − 1 if 3 < r ≤ 5
xi + 1 if 5 < r ≤ 7
xi − 2 if 8 < r ≤ 9
xi + 2 if 9 < r ≤ 10*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerandoValoresVetores(int *const, const int, const int);
void gerandoValoresVetoresEmy(int *const, const int * const,const int);
void identificandoOcorrMatriz(const int *const, const int * const, int *const, const int, const int);
void imprimindoVetores(const int *const, int);
void imprimindoMatriz(const int *const, int, int);

#define TAM 10
#define INTERVALO 10
int main(){
    int *linhaEl, *colEl, *matrizOcor;
      
    matrizOcor = (int *) calloc(INTERVALO * INTERVALO, sizeof(int));
    linhaEl = (int *) calloc(TAM, sizeof(int));
    colEl  = (int *) calloc(TAM, sizeof(int));

    puts("Gerando elementos de X e Y...");
    gerandoValoresVetores(linhaEl, TAM, INTERVALO);
    gerandoValoresVetoresEmy(colEl, linhaEl, TAM);

    imprimindoVetores( linhaEl, TAM);
    imprimindoVetores( colEl, TAM);

    puts("Identificando as Ocorrências");
    identificandoOcorrMatriz(linhaEl, colEl, matrizOcor, TAM, INTERVALO);

    imprimindoMatriz(matrizOcor, INTERVALO * INTERVALO, INTERVALO);
    

    return 0;
}

void gerandoValoresVetores( int *const vetores, const int qtd, const int intervalo){
    srand(time(NULL));
    for(int i = 0; i < qtd; i++){
        *(vetores+i) = rand() % intervalo;
    }
}

void gerandoValoresVetoresEmy( int *const vetoresY,const int *const vetoresX , const int qtd){
    int w[10] = {0, 0, 0, -1, -1, 1, 1, -2, -2, 2};
    int *wPtr;
    wPtr = w;
    for(int i = 0; i < qtd; i++){
        *(vetoresY+i) = *(vetoresX+i) +  *(wPtr + i);
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