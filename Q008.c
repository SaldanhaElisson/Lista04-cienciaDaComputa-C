// desafio:
/* Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros.*/
#include <stdio.h>
#include <stdlib.h>

// problema:
// Escreba um programa que busque um caracter fornecido em uma string utilizando ponteiros
// LOGICA:
// receber string
// receber caractere
// verificar se o caractere está na string
    // pecorrer a string 
        // enquanto isso comparar se o caractere daquela posição é igual ao carectere fornecido
        // ser for, para de pecorrer a string e retornar o resultado
// retornar

int main(){
    char *string, caractere ;
    int qtd;

    puts("Digite o tamanho da string: ");
    scanf("%d", &qtd);

    string = malloc(qtd * sizeof(char));

    puts("Digite a string: ");
    scanf("%s", string);

    puts("Digite o caractere: ");
    getchar();
    scanf("%c", &caractere);

    for(int i = 0; i < qtd; i++){
        if(*(string+i) == caractere){
            puts("O caractere está presente na string!");
            exit(1);
        }
    }
    puts("O caractere não foi achado na string :/");

    return 0;
}