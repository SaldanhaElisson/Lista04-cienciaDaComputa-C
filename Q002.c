// desafio: 
/*Escreva um programa que troque o valor de dois n ́umeros utilizando ponteiros. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int *n1Ptr, *n2Ptr;
    int n1, n2; 

    n1Ptr = &n1;
    n2Ptr = &n2;


    puts("Digite o primeiro numero: ");
    // scanf retorna a quantidade de bytes do tipo que está sendo passado
    // nesse caso vou verificar quantos bytes ele está retornando
    // se retonar somemente um byte significa que estou tratando com um dado  do tipo char
    // mas se for diferente de um byte pode ser que estou tratando de um inteiro 
    if(scanf("%d", n1Ptr) != 1){
        puts("ERRO");
        exit(1);
    }

    // if(isalpha(*n1Ptr)){
    //     printf("é um letra \n");
    // }

    puts("Digite o segundo numero: ");
    getchar();
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