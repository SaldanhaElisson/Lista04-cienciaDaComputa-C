// desafio 
/* Escreva um programa que leia um vetor do usu ́ario e imprima seus valores e seus endere ̧cos. Teste
o vetor com tipos de dados diferentes, analise os endere ̧cos. O que vocˆe observou?*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *pv = NULL;
    int  qtd = 0;

    puts("Digite o tamanho do vetor: ");
    scanf("%d", &qtd);

    // alocação dinâmica
    pv = malloc(qtd * sizeof(char));


    // capturando dados do vetor
    for(int i = 0; i < qtd; i++){
        printf("Digite um numero para a posição do vetor %c \n", i);
        scanf("%c", (pv+i));
        getchar();
    }   

    // imprimindo endere~p
        for(int i = 0; i < qtd; i++)
    {
        printf("[%p] = %c  \n", (pv+i), *(pv+i));
     }   

    //Foi observado que quando utilizamos dados do tipo char, os endereços pulam de 1 em 1
    // quando utilizado tipo int, os endereços pulam de 4 em 4
    return 0;
}