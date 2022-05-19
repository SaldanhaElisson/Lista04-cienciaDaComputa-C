#include <stdio.h>
#include <stdlib.h>

void imprimindoString(const int, const char *);
void copiandoString(const int qtd, const char *, char *);

int main(){
    char *string, *copyString;
    int qtd;
    
    // definindo o tamanho da string
    puts("Digite o tamanho do string: ");
    scanf("%d", &qtd);
    string = malloc(qtd * sizeof(char));
    copyString = malloc(qtd * sizeof(char));

    // capturando a string
    puts("Digite a string: ");
    getchar();
    scanf("%[^\n]s", string);

    imprimindoString(qtd, string);

    puts("Copiando string...");
    copiandoString(qtd, string, copyString);

    puts("Copia da String");
    imprimindoString(qtd, copyString);
   


    return 0;
}

void imprimindoString(const int qtd, const char *string){
     for(int i = 0; i < qtd ; i++){
        printf("%c", *(string + i));
    }
    puts(" ");
}

void copiandoString(const int qtd, const char *string, char *copyString)
{
    for(int i = 0; i < qtd; i++)
    {
        *(copyString + i) = *(string + i);
    }
}