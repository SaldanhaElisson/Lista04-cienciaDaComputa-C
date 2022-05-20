#include <stdio.h>
// Desafio:
/*Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros. */

#include <stdlib.h>

int main(){
    char string[] = "elisson";
    char *qtd = string;
    int i = 0;

    while (!(*(qtd+i) == '\0'))
    {
        i++;
    }
    
    printf("A string tem tamanho de %d ", i);

}