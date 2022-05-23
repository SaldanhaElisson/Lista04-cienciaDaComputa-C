// desafio: 
/*  Escreva um programa que gere um vetor X com n ́umeros pseudoaleat ́orios no intervalo [0,N − 1].
Crie um vetor F com N posi ̧c ̃oes e armazene em cada posi ̧c ̃ao de F a quantidade de ocorrˆencias
dos elementos de X.*/
#include <stdio.h>

void void gerandoValoresAleatorios(int *const, int);

int main(){
    int qtd, *numeros, *positions;


    

    return 0;
}

void gerandoValoresAleatorios(int *const vetor, int qtd){
    for( int i = 0; i < qtd; i++){
        *(vetor + i) = rand()  % 100;
    }
}