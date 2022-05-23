// desafio
/* Escreva um programa que adicione dois n ́umeros usando ponteiros. Al ́em do valor da soma, imprima
tamb ́em o endere ̧co de mem ́oria onde o valor resultante dessa soma est ́a armazenado.*/
#include <stdio.h>

int main(){
    int n1, n2, resultado, *Ptrn1, *Ptrn2;

    Ptrn1 = &n1;
    Ptrn2 = &n2;

    puts("Digite o primeiro numero: ");
    scanf("%d", Ptrn1);
    
    puts("Digite o segundo numero: ");
    getchar();
    scanf("%d", Ptrn2);


    puts("Adicionando...");

    printf("%d + %d = %d \n", *Ptrn1, *Ptrn2, *Ptrn1+*Ptrn2);
    
    puts("Endereços do Resultado");
    printf("[%p]\n", &resultado);
    return 0;
}