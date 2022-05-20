// desafio: 
/*Escreva um programa que troque o valor de dois n ́umeros utilizando ponteiros. */

#include <stdio.h>

int main(){
    int *n1Ptr, *n2Ptr;
    int n1, n2; 

    n1Ptr = &n1;
    n2Ptr = &n2;


    puts("Digite o primeiro numero: ");
    scanf("%d", n1Ptr);

    puts("Digite o segundo numero: ");
    scanf("%d", n2Ptr);

    printf("ENDEREÇO  | VALOR \n");
    printf("%p | %d \n", n1Ptr, *n1Ptr);
    printf("%p | %d \n", n2Ptr, *n2Ptr);

    puts(" ");
    puts("Trocando a posição dos numeros ...");
    puts(" ");

    *n1Ptr = *n1Ptr ^ *n2Ptr;
    *n2Ptr = *n1Ptr ^ *n2Ptr;
    *n1Ptr = *n1Ptr ^ *n2Ptr;

    printf("ENDEREÇO  | VALOR \n");
    printf("%p | %d \n", n1Ptr, *n1Ptr);
    printf("%p | %d \n", n2Ptr, *n2Ptr);

    return 0;
}