// desafio: 
/* Implemente o m ́etodo de ordena ̧c ̃ao bolha utilizando ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

# define TAM 10

void imprimindoString(const int, const int *);
void gerandoValoresAleatorios(int *, int);

int main(){
    int vetor[TAM], *vetorPtr;

    vetorPtr = vetor;

    gerandoValoresAleatorios(vetorPtr, TAM);

    imprimindoString(TAM, vetorPtr);
    
    puts(" ");

    puts("Ordenando vetores de forma decrescente....");

    puts(" ");

    for(int i = 0; i < TAM; i++){
        for( int j = 0; j < TAM - 1; j++ ){
            if(*(vetor+j) < *(vetor + (j + 1))){
                // trocando de posição
                *(vetor + j) = *(vetor+j) ^ *(vetor + j + 1);
                *(vetor + j + 1) = *(vetor+j) ^ *(vetor + j + 1);
                *(vetor + j) = *(vetor+j) ^ *(vetor + j + 1);

            }
        }
    }

    imprimindoString(TAM, vetorPtr);

    return 0;
}

void imprimindoString(const int qtd, const int *string){
     for(int i = 0; i < qtd ; i++){
        printf("%d, ", *(string + i));
    }
    puts(" ");
}

void gerandoValoresAleatorios(int *vetor, int qtd){
    for( int i = 0; i < qtd; i++){
        *(vetor + i) = rand()  % 100;
    }
}