#include <stdio.h>
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